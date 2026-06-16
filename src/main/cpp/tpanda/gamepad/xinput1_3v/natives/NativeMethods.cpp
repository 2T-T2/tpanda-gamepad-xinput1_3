#include "tpanda_gamepad_xinput1_3v_natives_NativeMethods.h"
#include <windows.h>
#include <xinput.h>

#ifndef XINPUT_DEVSUBTYPE_UNKNOWN
#define XINPUT_DEVSUBTYPE_UNKNOWN 0x00 // mingw になかったので
#endif

#pragma region JNI_UTILITY
template <typename T>
class JniLocalRefGuard {
private:
    JNIEnv *env;
    T localRef;
public:
    JniLocalRefGuard(JNIEnv *env, T localRef) : env(env), localRef(localRef) {}
    ~JniLocalRefGuard() {
        if (localRef != nullptr) {
            env->DeleteLocalRef(localRef);
        }
    }

    // --- 利便性を高めるためのメンバ関数を追加 ---

    // 生データ を取得する
    T get() const { return localRef; }

    // コピー禁止（RAII クラスの鉄則：二重解放を防ぐ）
    JniLocalRefGuard(const JniLocalRefGuard &) = delete;
    JniLocalRefGuard &operator=(const JniLocalRefGuard &) = delete;
};

class JniCharArrayGuard {
private:
    JNIEnv *env;
    jcharArray array;
    jchar *elm;

public:
    JniCharArrayGuard(JNIEnv *env, jcharArray array) : env(env), array(array) {
        this->elm = env->GetCharArrayElements(array, nullptr);
    }

    ~JniCharArrayGuard() {
        if (elm != nullptr) {
            env->ReleaseCharArrayElements(array, elm, 0);
        }
    }

    // --- 利便性を高めるためのメンバ関数を追加 ---

    // 生ポインタ（jchar*）を取得する
    jchar *get() const { return elm; }

    // コピー禁止（RAII クラスの鉄則：二重解放を防ぐ）
    JniCharArrayGuard(const JniCharArrayGuard &) = delete;
    JniCharArrayGuard &operator=(const JniCharArrayGuard &) = delete;
};
#pragma endregion

#pragma region キャッシュ用グローバル変数
namespace XInputBatteryInformation {
    static jfieldID batteryType;
    static jfieldID batteryLevel;

    DWORD Initialize(JNIEnv *env) {
        JniLocalRefGuard localClass(env, env->FindClass("tpanda/gamepad/xinput1_3v/XInputBatteryInformation"));
        if (localClass.get() == nullptr) return JNI_ERR;

        batteryType = env->GetFieldID(localClass.get(), "batteryType", "I");
        batteryLevel = env->GetFieldID(localClass.get(), "batteryLevel", "I");

        if (batteryType == nullptr ||
            batteryLevel == nullptr
        ) {
            return JNI_ERR;
        }

        return JNI_OK;
    }

    DWORD Finalize(JNIEnv *) {
        return JNI_OK;
    }
}

namespace XInputCapabilities {
    static jfieldID type;
    static jfieldID subType;
    static jfieldID flags;
    static jfieldID gamepad;
    static jfieldID vibration;

    DWORD Initialize(JNIEnv *env) {
        JniLocalRefGuard localClass(env, env->FindClass("tpanda/gamepad/xinput1_3v/XInputCapabilities"));
        if (localClass.get() == nullptr) return JNI_ERR;

        type = env->GetFieldID(localClass.get(), "type", "I");
        subType = env->GetFieldID(localClass.get(), "subType", "I");
        flags = env->GetFieldID(localClass.get(), "flags", "I");
        gamepad = env->GetFieldID(localClass.get(), "gamepad", "Ltpanda/gamepad/xinput1_3v/XInputGamepad;");
        vibration = env->GetFieldID(localClass.get(), "vibration", "Ltpanda/gamepad/xinput1_3v/XInputVibration;");

        if (type == nullptr ||
            subType == nullptr ||
            flags == nullptr ||
            gamepad == nullptr ||
            vibration == nullptr
        ) {
            return JNI_ERR;
        }

        return JNI_OK;
    }

    DWORD Finalize(JNIEnv *) {
        return JNI_OK;
    }
}

namespace XInputGamepad {
    static jfieldID buttons;
    static jfieldID leftTrigger;
    static jfieldID rightTrigger;
    static jfieldID thumbLX;
    static jfieldID thumbLY;
    static jfieldID thumbRX;
    static jfieldID thumbRY;

    DWORD Initialize(JNIEnv *env) {
        JniLocalRefGuard localClass(env, env->FindClass("tpanda/gamepad/xinput1_3v/XInputGamepad"));
        if (localClass.get() == nullptr) return JNI_ERR;

        buttons = env->GetFieldID(localClass.get(), "buttons", "I");
        leftTrigger = env->GetFieldID(localClass.get(), "leftTrigger", "S");
        rightTrigger = env->GetFieldID(localClass.get(), "rightTrigger", "S");
        thumbLX = env->GetFieldID(localClass.get(), "thumbLX", "S");
        thumbLY = env->GetFieldID(localClass.get(), "thumbLY", "S");
        thumbRX = env->GetFieldID(localClass.get(), "thumbRX", "S");
        thumbRY = env->GetFieldID(localClass.get(), "thumbRY", "S");

        if (buttons == nullptr ||
            leftTrigger == nullptr ||
            rightTrigger == nullptr ||
            thumbLX == nullptr ||
            thumbLY == nullptr ||
            thumbRX == nullptr ||
            thumbRY == nullptr
        ) {
            return JNI_ERR;
        }

        return JNI_OK;
    }

    DWORD Finalize(JNIEnv *) {
        return JNI_OK;
    }
}

namespace XInputKeystroke {
    static jfieldID virtualKey;
    static jfieldID unicode;
    static jfieldID flags;
    static jfieldID userIndex;
    static jfieldID hidCode;

    DWORD Initialize(JNIEnv *env) {
        JniLocalRefGuard localClass(env, env->FindClass("tpanda/gamepad/xinput1_3v/XInputKeystroke"));
        if (localClass.get() == nullptr) return JNI_ERR;

        virtualKey = env->GetFieldID(localClass.get(), "virtualKey", "I");
        unicode = env->GetFieldID(localClass.get(), "unicode", "C");
        flags = env->GetFieldID(localClass.get(), "flags", "I");
        userIndex = env->GetFieldID(localClass.get(), "userIndex", "I");
        hidCode = env->GetFieldID(localClass.get(), "hidCode", "I");

        if (virtualKey == nullptr ||
            unicode == nullptr ||
            flags == nullptr ||
            userIndex == nullptr ||
            hidCode == nullptr
        ) {
            return JNI_ERR;
        }

        return JNI_OK;
    }

    DWORD Finalize(JNIEnv *) {
        return JNI_OK;
    }
}

namespace XInputState {
    static jfieldID packetNumber;
    static jfieldID gamepad;

    DWORD Initialize(JNIEnv *env) {
        JniLocalRefGuard localClass(env, env->FindClass("tpanda/gamepad/xinput1_3v/XInputState"));
        if (localClass.get() == nullptr) return JNI_ERR;

        packetNumber = env->GetFieldID(localClass.get(), "packetNumber", "I");
        gamepad = env->GetFieldID(localClass.get(), "gamepad", "Ltpanda/gamepad/xinput1_3v/XInputGamepad;");

        if (packetNumber == nullptr ||
            gamepad == nullptr
        ) {
            return JNI_ERR;
        }

        return JNI_OK;
    }

    DWORD Finalize(JNIEnv *) {
        return JNI_OK;
    }
}

namespace XInputVibration {
    static jfieldID leftMotorSpeed;
    static jfieldID rightMotorSpeed;

    DWORD Initialize(JNIEnv *env) {
        JniLocalRefGuard localClass(env, env->FindClass("tpanda/gamepad/xinput1_3v/XInputVibration"));
        if (localClass.get() == nullptr) return JNI_ERR;

        leftMotorSpeed = env->GetFieldID(localClass.get(), "leftMotorSpeed", "I");
        rightMotorSpeed = env->GetFieldID(localClass.get(), "rightMotorSpeed", "I");

        if (leftMotorSpeed == nullptr ||
            rightMotorSpeed == nullptr
        ) {
            return JNI_ERR;
        }

        return JNI_OK;
    }

    DWORD Finalize(JNIEnv *) {
        return JNI_OK;
    }
}
#pragma endregion

namespace TPandaXInput
{
    void Enable(BOOL enable) {
        XInputEnable(enable);
    }
    DWORD SetState(DWORD dwUserIndex, XINPUT_VIBRATION *pVibration) {
        return XInputSetState(dwUserIndex, pVibration);
    }
    DWORD GetState(DWORD dwUserIndex, XINPUT_STATE *pState) {
        return XInputGetState(dwUserIndex, pState);
    }
    DWORD GetKeystroke(DWORD dwUserIndex, DWORD dwReserved, PXINPUT_KEYSTROKE pKeystroke) {
        return XInputGetKeystroke(dwUserIndex, dwReserved, pKeystroke);
    }
    DWORD GetCapabilities(DWORD dwUserIndex, DWORD dwFlags, XINPUT_CAPABILITIES *pCapabilities) {
        return XInputGetCapabilities(dwUserIndex, dwFlags, pCapabilities);
    }
    DWORD GetBatteryInformation(DWORD dwUserIndex, BYTE devType, XINPUT_BATTERY_INFORMATION *pBatteryInformation) {
        return XInputGetBatteryInformation(dwUserIndex, devType, pBatteryInformation);
    }
    DWORD GetAudioDeviceIds(DWORD, LPWSTR, UINT *, LPWSTR , UINT *) {
        return ERROR_NOT_SUPPORTED;
    }
    DWORD GetDSoundAudioDeviceGuids(DWORD dwUserIndex, GUID *pDSoundRenderGuid, GUID *pDSoundCaptureGuid) {
        return XInputGetDSoundAudioDeviceGuids(dwUserIndex, pDSoundRenderGuid, pDSoundCaptureGuid);
    }
}

// --- C API 構造体 -> java object ---
DWORD setXInputBatteryInformation(JNIEnv *env, jobject jBatteryInformation, XINPUT_BATTERY_INFORMATION& batteryInformation) {
    env->SetIntField(jBatteryInformation, XInputBatteryInformation::batteryType, batteryInformation.BatteryType);
    env->SetIntField(jBatteryInformation, XInputBatteryInformation::batteryLevel, batteryInformation.BatteryLevel);

    return ERROR_SUCCESS;
}

DWORD setXInputGamepad(JNIEnv *env, jobject jGamepad, XINPUT_GAMEPAD &gamepad) {
    env->SetIntField(jGamepad, XInputGamepad::buttons, gamepad.wButtons);
    env->SetShortField(jGamepad, XInputGamepad::leftTrigger, gamepad.bLeftTrigger);
    env->SetShortField(jGamepad, XInputGamepad::rightTrigger, gamepad.bRightTrigger);
    env->SetShortField(jGamepad, XInputGamepad::thumbLX, gamepad.sThumbLX);
    env->SetShortField(jGamepad, XInputGamepad::thumbLY, gamepad.sThumbLY);
    env->SetShortField(jGamepad, XInputGamepad::thumbRX, gamepad.sThumbRX);
    env->SetShortField(jGamepad, XInputGamepad::thumbRY, gamepad.sThumbRY);

    return ERROR_SUCCESS;
}

DWORD setXInputVibration(JNIEnv *env, jobject jVibration, XINPUT_VIBRATION& vibration) {
    env->SetIntField(jVibration, XInputVibration::leftMotorSpeed, vibration.wLeftMotorSpeed);
    env->SetIntField(jVibration, XInputVibration::rightMotorSpeed, vibration.wRightMotorSpeed);

    return ERROR_SUCCESS;
}

DWORD setXInputCapabilities(JNIEnv *env, jobject jCapabilities, XINPUT_CAPABILITIES& capabilities) {
    JniLocalRefGuard<jobject> gamepad(env, env->GetObjectField(jCapabilities, XInputCapabilities::gamepad));
    JniLocalRefGuard<jobject> vibration(env, env->GetObjectField(jCapabilities, XInputCapabilities::vibration));

    env->SetIntField(jCapabilities,  XInputCapabilities::type   , capabilities.Type);
    env->SetIntField(jCapabilities,  XInputCapabilities::subType, capabilities.SubType);
    env->SetIntField(jCapabilities,  XInputCapabilities::flags  , capabilities.Flags);
    DWORD result = setXInputGamepad(env, gamepad.get(), capabilities.Gamepad);
    if (result != ERROR_SUCCESS) {
        return result;
    }
    return setXInputVibration(env, vibration.get(), capabilities.Vibration);
}

DWORD setGUID(JNIEnv *env, jbyteArray jGuid, GUID& guid) {
    // 構造体の値をそのまま byte 配列に格納
    env->SetByteArrayRegion(jGuid, 0, 16, reinterpret_cast<const jbyte*>(&guid));

    return ERROR_SUCCESS;
}

DWORD setXInputKeystroke(JNIEnv *env, jobject jKeystroke, XINPUT_KEYSTROKE& keystroke) {
    env->SetIntField(jKeystroke, XInputKeystroke::virtualKey, keystroke.VirtualKey);
    env->SetCharField(jKeystroke, XInputKeystroke::unicode, keystroke.Unicode);
    env->SetIntField(jKeystroke, XInputKeystroke::flags, keystroke.Flags);
    env->SetIntField(jKeystroke, XInputKeystroke::userIndex, keystroke.UserIndex);
    env->SetIntField(jKeystroke, XInputKeystroke::hidCode, keystroke.HidCode);

    return ERROR_SUCCESS;
}

DWORD setXInputState(JNIEnv *env, jobject jState, XINPUT_STATE& state) {
    JniLocalRefGuard gamepad(env, env->GetObjectField(jState, XInputState::gamepad));

    env->SetIntField(jState, XInputState::packetNumber, state.dwPacketNumber);

    return setXInputGamepad(env, gamepad.get(), state.Gamepad);
}

DWORD getXInputVibration(JNIEnv *env, jobject jVibration, XINPUT_VIBRATION& vibration) {
    vibration.wLeftMotorSpeed = env->GetIntField(jVibration, XInputVibration::leftMotorSpeed);
    vibration.wRightMotorSpeed = env->GetIntField(jVibration, XInputVibration::rightMotorSpeed);

    return ERROR_SUCCESS;
}

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeMethods
 * Method:    XInputEnable
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeMethods_XInputEnable(JNIEnv *, jclass, jboolean enable)
{
    TPandaXInput::Enable(enable);
}

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeMethods
 * Method:    XInputGetAudioDeviceIds
 * Signature: (I[C[C)I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeMethods_XInputGetAudioDeviceIds(JNIEnv *env, jclass, jint userIndex, jcharArray renderDeviceId, jcharArray captureDeviceId)
{
    JniCharArrayGuard renderDeviceIdGuard(env, renderDeviceId);
    JniCharArrayGuard captureDeviceIdGuard(env, captureDeviceId);

    if (captureDeviceIdGuard.get() == nullptr || renderDeviceIdGuard.get() == nullptr) {
        return ERROR_NOT_ENOUGH_MEMORY;
    }

    UINT renderDeviceIdCount = env->GetArrayLength(renderDeviceId);
    UINT captureDeviceIdCount = env->GetArrayLength(captureDeviceId);

    return TPandaXInput::GetAudioDeviceIds(
        userIndex
        , reinterpret_cast<LPWSTR>(renderDeviceIdGuard.get())
        , &renderDeviceIdCount
        , reinterpret_cast<LPWSTR>(captureDeviceIdGuard.get())
        , &captureDeviceIdCount
    );
}

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeMethods
 * Method:    XInputGetBatteryInformation
 * Signature: (IILtpanda/gamepad/XInputBatteryInformation;)I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeMethods_XInputGetBatteryInformation(JNIEnv *env, jclass, jint userIndex, jint devType, jobject jBatteryInformation)
{
    XINPUT_BATTERY_INFORMATION batteryInformation;
    DWORD result = TPandaXInput::GetBatteryInformation(userIndex, devType, &batteryInformation);

    if (result == ERROR_SUCCESS) {
        result = setXInputBatteryInformation(env, jBatteryInformation, batteryInformation);
    }

    return result;
}

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeMethods
 * Method:    XInputGetCapabilities
 * Signature: (IILtpanda/gamepad/XInputCapabilities;)I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeMethods_XInputGetCapabilities(JNIEnv *env, jclass, jint userIndex, jint flags, jobject jCapabilities)
{
    XINPUT_CAPABILITIES capabilities;
    DWORD result = TPandaXInput::GetCapabilities(userIndex, flags, &capabilities);

    if (result == ERROR_SUCCESS) {
        result = setXInputCapabilities(env, jCapabilities, capabilities);
    }

    return result;
}

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeMethods
 * Method:    XInputGetDSoundAudioDeviceGuids
 * Signature: (I[B[B)I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeMethods_XInputGetDSoundAudioDeviceGuids(JNIEnv *env, jclass, jint userIndex, jbyteArray jDSoundRenderGuid, jbyteArray jDSoundCaptureGuid)
{
    GUID dSoundRenderGuid, dSoundCaptureGuid;
    DWORD result = TPandaXInput::GetDSoundAudioDeviceGuids(userIndex, &dSoundRenderGuid, &dSoundCaptureGuid);

    if (result == ERROR_SUCCESS) {
        result = setGUID(env, jDSoundRenderGuid, dSoundRenderGuid);
    }
    if (result == ERROR_SUCCESS) {
        result = setGUID(env, jDSoundCaptureGuid, dSoundCaptureGuid);
    }

    return result;
}

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeMethods
 * Method:    XInputGetKeystroke
 * Signature: (IILtpanda/gamepad/XInputKeystroke;)I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeMethods_XInputGetKeystroke(JNIEnv *env, jclass, jint userIndex, jint reserved, jobject jKeystroke)
{
    XINPUT_KEYSTROKE keystroke;
    DWORD result = TPandaXInput::GetKeystroke(userIndex, reserved, &keystroke);

    if (result == ERROR_SUCCESS) {
        result = setXInputKeystroke(env, jKeystroke, keystroke);
    }

    return result;
}

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeMethods
 * Method:    XInputGetState
 * Signature: (ILtpanda/gamepad/XInputState;)I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeMethods_XInputGetState(JNIEnv *env, jclass, jint userIndex, jobject jstate)
{
    XINPUT_STATE state;
    DWORD result = TPandaXInput::GetState(userIndex, &state);

    if (result == ERROR_SUCCESS) {
        result = setXInputState(env, jstate, state);
    }

    return result;
}

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeMethods
 * Method:    XInputSetState
 * Signature: (ILtpanda/gamepad/XInputVibration;)I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeMethods_XInputSetState(JNIEnv *env, jclass, jint userIndex, jobject jVibration)
{
    XINPUT_VIBRATION vibration;
    DWORD result = getXInputVibration(env, jVibration, vibration);

    if (result == ERROR_SUCCESS) {
        result = TPandaXInput::SetState(userIndex, &vibration);
    }

    return result;
}

JNIEXPORT jint JNI_OnLoad(JavaVM *vm, void *) {
    JNIEnv *env = nullptr;

    // JNIEnv の取得
    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) != JNI_OK) {
        return JNI_ERR;
    }

    if (XInputBatteryInformation::Initialize(env) != JNI_OK ||
        XInputCapabilities::Initialize(env) != JNI_OK ||
        XInputGamepad::Initialize(env) != JNI_OK ||
        XInputKeystroke::Initialize(env) != JNI_OK ||
        XInputState::Initialize(env) != JNI_OK ||
        XInputVibration::Initialize(env) != JNI_OK
    ) {
        return JNI_ERR;
    }

    return JNI_VERSION_1_6;
}

JNIEXPORT void JNI_OnUnload(JavaVM *vm, void *) {
    JNIEnv *env = nullptr;
    if (vm->GetEnv(reinterpret_cast<void**>(&env), JNI_VERSION_1_6) == JNI_OK) {
        XInputBatteryInformation::Finalize(env);
        XInputCapabilities::Finalize(env);
        XInputGamepad::Finalize(env);
        XInputKeystroke::Finalize(env);
        XInputState::Finalize(env);
        XInputVibration::Finalize(env);
    }
}

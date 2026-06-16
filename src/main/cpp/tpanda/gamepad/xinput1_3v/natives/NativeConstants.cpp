#include "tpanda_gamepad_xinput1_3v_natives_NativeConstants.h"
#include <windows.h>
#include <xinput.h>

#ifndef XINPUT_DEVSUBTYPE_UNKNOWN
#define XINPUT_DEVSUBTYPE_UNKNOWN 0x00 // mingw になかったので
#endif

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    ERROR_SUCCESS
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_ERROR_1SUCCESS(JNIEnv *, jclass) { return ERROR_SUCCESS; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    ERROR_DEVICE_NOT_CONNECTED
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_ERROR_1DEVICE_1NOT_1CONNECTED(JNIEnv *, jclass) { return ERROR_DEVICE_NOT_CONNECTED; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    ERROR_EMPTY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_ERROR_1EMPTY(JNIEnv *, jclass) { return ERROR_EMPTY; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XUSER_MAX_COUNT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XUSER_1MAX_1COUNT(JNIEnv *, jclass) { return XUSER_MAX_COUNT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    BATTERY_DEVTYPE_GAMEPAD
 * Signature: ()I
 */
JNIEXPORT jbyte JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_BATTERY_1DEVTYPE_1GAMEPAD(JNIEnv *, jclass) { return BATTERY_DEVTYPE_GAMEPAD; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    BATTERY_DEVTYPE_HEADSET
 * Signature: ()I
 */
JNIEXPORT jbyte JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_BATTERY_1DEVTYPE_1HEADSET(JNIEnv *, jclass) { return BATTERY_DEVTYPE_HEADSET; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    BATTERY_TYPE_DISCONNECTED
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_BATTERY_1TYPE_1DISCONNECTED(JNIEnv *, jclass) { return BATTERY_TYPE_DISCONNECTED; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    BATTERY_TYPE_WIRED
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_BATTERY_1TYPE_1WIRED(JNIEnv *, jclass) { return BATTERY_TYPE_WIRED; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    BATTERY_TYPE_ALKALINE
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_BATTERY_1TYPE_1ALKALINE(JNIEnv *, jclass) { return BATTERY_TYPE_ALKALINE; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    BATTERY_TYPE_NIMH
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_BATTERY_1TYPE_1NIMH(JNIEnv *, jclass) { return BATTERY_TYPE_NIMH; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    BATTERY_TYPE_UNKNOWN
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_BATTERY_1TYPE_1UNKNOWN(JNIEnv *, jclass) { return BATTERY_TYPE_UNKNOWN; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    BATTERY_LEVEL_EMPTY
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_BATTERY_1LEVEL_1EMPTY(JNIEnv *, jclass) { return BATTERY_LEVEL_EMPTY; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    BATTERY_LEVEL_LOW
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_BATTERY_1LEVEL_1LOW(JNIEnv *, jclass) { return BATTERY_LEVEL_LOW; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    BATTERY_LEVEL_MEDIUM
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_BATTERY_1LEVEL_1MEDIUM(JNIEnv *, jclass) { return BATTERY_LEVEL_MEDIUM; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    BATTERY_LEVEL_FULL
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_BATTERY_1LEVEL_1FULL(JNIEnv *, jclass) { return BATTERY_LEVEL_FULL; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_DPAD_UP
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1DPAD_1UP(JNIEnv *, jclass) { return XINPUT_GAMEPAD_DPAD_UP; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_DPAD_DOWN
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1DPAD_1DOWN(JNIEnv *, jclass) { return XINPUT_GAMEPAD_DPAD_DOWN; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_DPAD_LEFT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1DPAD_1LEFT(JNIEnv *, jclass) { return XINPUT_GAMEPAD_DPAD_LEFT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_DPAD_RIGHT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1DPAD_1RIGHT(JNIEnv *, jclass) { return XINPUT_GAMEPAD_DPAD_RIGHT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_START
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1START(JNIEnv *, jclass) { return XINPUT_GAMEPAD_START; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_BACK
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1BACK(JNIEnv *, jclass) { return XINPUT_GAMEPAD_BACK; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_LEFT_THUMB
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1LEFT_1THUMB(JNIEnv *, jclass) { return XINPUT_GAMEPAD_LEFT_THUMB; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_RIGHT_THUMB
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1RIGHT_1THUMB(JNIEnv *, jclass) { return XINPUT_GAMEPAD_RIGHT_THUMB; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_LEFT_SHOULDER
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1LEFT_1SHOULDER(JNIEnv *, jclass) { return XINPUT_GAMEPAD_LEFT_SHOULDER; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_RIGHT_SHOULDER
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1RIGHT_1SHOULDER(JNIEnv *, jclass) { return XINPUT_GAMEPAD_RIGHT_SHOULDER; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_A
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1A(JNIEnv *, jclass) { return XINPUT_GAMEPAD_A; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_B
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1B(JNIEnv *, jclass) { return XINPUT_GAMEPAD_B; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_X
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1X(JNIEnv *, jclass) { return XINPUT_GAMEPAD_X; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_Y
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1Y(JNIEnv *, jclass) { return XINPUT_GAMEPAD_Y; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1LEFT_1THUMB_1DEADZONE(JNIEnv *, jclass) { return XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1RIGHT_1THUMB_1DEADZONE(JNIEnv *, jclass) { return XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_GAMEPAD_TRIGGER_THRESHOLD
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1GAMEPAD_1TRIGGER_1THRESHOLD(JNIEnv *, jclass) { return XINPUT_GAMEPAD_TRIGGER_THRESHOLD; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_DEVTYPE_GAMEPAD
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1DEVTYPE_1GAMEPAD(JNIEnv *, jclass) { return XINPUT_DEVTYPE_GAMEPAD; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_DEVSUBTYPE_UNKNOWN
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1DEVSUBTYPE_1UNKNOWN(JNIEnv *, jclass) { return XINPUT_DEVSUBTYPE_UNKNOWN; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_DEVSUBTYPE_GAMEPAD
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1DEVSUBTYPE_1GAMEPAD(JNIEnv *, jclass) { return XINPUT_DEVSUBTYPE_GAMEPAD; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_DEVSUBTYPE_ARCADE_STICK
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1DEVSUBTYPE_1ARCADE_1STICK(JNIEnv *, jclass) { return XINPUT_DEVSUBTYPE_ARCADE_STICK; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_DEVSUBTYPE_WHEEL
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1DEVSUBTYPE_1WHEEL(JNIEnv *, jclass) { return XINPUT_DEVSUBTYPE_WHEEL; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_DEVSUBTYPE_FLIGHT_STICK
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1DEVSUBTYPE_1FLIGHT_1STICK(JNIEnv *, jclass) { return XINPUT_DEVSUBTYPE_FLIGHT_STICK; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_DEVSUBTYPE_DANCE_PAD
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1DEVSUBTYPE_1DANCE_1PAD(JNIEnv *, jclass) { return XINPUT_DEVSUBTYPE_DANCE_PAD; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_DEVSUBTYPE_GUITAR
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1DEVSUBTYPE_1GUITAR(JNIEnv *, jclass) { return XINPUT_DEVSUBTYPE_GUITAR; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_DEVSUBTYPE_GUITAR_ALTERNATE
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1DEVSUBTYPE_1GUITAR_1ALTERNATE(JNIEnv *, jclass) { return XINPUT_DEVSUBTYPE_GUITAR_ALTERNATE; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_DEVSUBTYPE_DRUM_KIT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1DEVSUBTYPE_1DRUM_1KIT(JNIEnv *, jclass) { return XINPUT_DEVSUBTYPE_DRUM_KIT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_DEVSUBTYPE_GUITAR_BASS
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1DEVSUBTYPE_1GUITAR_1BASS(JNIEnv *, jclass) { return XINPUT_DEVSUBTYPE_GUITAR_BASS; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_DEVSUBTYPE_ARCADE_PAD
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1DEVSUBTYPE_1ARCADE_1PAD(JNIEnv *, jclass) { return XINPUT_DEVSUBTYPE_ARCADE_PAD; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_CAPS_VOICE_SUPPORTED
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1CAPS_1VOICE_1SUPPORTED(JNIEnv *, jclass) { return XINPUT_CAPS_VOICE_SUPPORTED; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_CAPS_FFB_SUPPORTED
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1CAPS_1FFB_1SUPPORTED(JNIEnv *, jclass) { return XINPUT_CAPS_FFB_SUPPORTED; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_CAPS_WIRELESS
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1CAPS_1WIRELESS(JNIEnv *, jclass) { return XINPUT_CAPS_WIRELESS; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_CAPS_PMD_SUPPORTED
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1CAPS_1PMD_1SUPPORTED(JNIEnv *, jclass) { return XINPUT_CAPS_PMD_SUPPORTED; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_CAPS_NO_NAVIGATION
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1CAPS_1NO_1NAVIGATION(JNIEnv *, jclass) { return XINPUT_CAPS_NO_NAVIGATION; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_KEYSTROKE_KEYDOWN
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1KEYSTROKE_1KEYDOWN(JNIEnv *, jclass) { return XINPUT_KEYSTROKE_KEYDOWN; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_KEYSTROKE_KEYUP
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1KEYSTROKE_1KEYUP(JNIEnv *, jclass) { return XINPUT_KEYSTROKE_KEYUP; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_KEYSTROKE_REPEAT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1KEYSTROKE_1REPEAT(JNIEnv *, jclass) { return XINPUT_KEYSTROKE_REPEAT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    XINPUT_FLAG_GAMEPAD
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_XINPUT_1FLAG_1GAMEPAD(JNIEnv *, jclass) { return XINPUT_FLAG_GAMEPAD; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_A
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1A(JNIEnv *, jclass) { return VK_PAD_A; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_B
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1B(JNIEnv *, jclass) { return VK_PAD_B; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_X
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1X(JNIEnv *, jclass) { return VK_PAD_X; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_Y
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1Y(JNIEnv *, jclass) { return VK_PAD_Y; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_RSHOULDER
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1RSHOULDER(JNIEnv *, jclass) { return VK_PAD_RSHOULDER; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_LSHOULDER
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1LSHOULDER(JNIEnv *, jclass) { return VK_PAD_LSHOULDER; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_LTRIGGER
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1LTRIGGER(JNIEnv *, jclass) { return VK_PAD_LTRIGGER; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_RTRIGGER
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1RTRIGGER(JNIEnv *, jclass) { return VK_PAD_RTRIGGER; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_DPAD_UP
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1DPAD_1UP(JNIEnv *, jclass) { return VK_PAD_DPAD_UP; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_DPAD_DOWN
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1DPAD_1DOWN(JNIEnv *, jclass) { return VK_PAD_DPAD_DOWN; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_DPAD_LEFT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1DPAD_1LEFT(JNIEnv *, jclass) { return VK_PAD_DPAD_LEFT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_DPAD_RIGHT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1DPAD_1RIGHT(JNIEnv *, jclass) { return VK_PAD_DPAD_RIGHT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_START
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1START(JNIEnv *, jclass) { return VK_PAD_START; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_BACK
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1BACK(JNIEnv *, jclass) { return VK_PAD_BACK; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_LTHUMB_PRESS
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1LTHUMB_1PRESS(JNIEnv *, jclass) { return VK_PAD_LTHUMB_PRESS; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_RTHUMB_PRESS
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1RTHUMB_1PRESS(JNIEnv *, jclass) { return VK_PAD_RTHUMB_PRESS; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_LTHUMB_UP
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1LTHUMB_1UP(JNIEnv *, jclass) { return VK_PAD_LTHUMB_UP; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_LTHUMB_DOWN
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1LTHUMB_1DOWN(JNIEnv *, jclass) { return VK_PAD_LTHUMB_DOWN; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_LTHUMB_RIGHT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1LTHUMB_1RIGHT(JNIEnv *, jclass) { return VK_PAD_LTHUMB_RIGHT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_LTHUMB_LEFT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1LTHUMB_1LEFT(JNIEnv *, jclass) { return VK_PAD_LTHUMB_LEFT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_LTHUMB_UPLEFT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1LTHUMB_1UPLEFT(JNIEnv *, jclass) { return VK_PAD_LTHUMB_UPLEFT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_LTHUMB_UPRIGHT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1LTHUMB_1UPRIGHT(JNIEnv *, jclass) { return VK_PAD_LTHUMB_UPRIGHT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_LTHUMB_DOWNRIGHT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1LTHUMB_1DOWNRIGHT(JNIEnv *, jclass) { return VK_PAD_LTHUMB_DOWNRIGHT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_LTHUMB_DOWNLEFT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1LTHUMB_1DOWNLEFT(JNIEnv *, jclass) { return VK_PAD_LTHUMB_DOWNLEFT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_RTHUMB_UP
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1RTHUMB_1UP(JNIEnv *, jclass) { return VK_PAD_RTHUMB_UP; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_RTHUMB_DOWN
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1RTHUMB_1DOWN(JNIEnv *, jclass) { return VK_PAD_RTHUMB_DOWN; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_RTHUMB_RIGHT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1RTHUMB_1RIGHT(JNIEnv *, jclass) { return VK_PAD_RTHUMB_RIGHT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_RTHUMB_LEFT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1RTHUMB_1LEFT(JNIEnv *, jclass) { return VK_PAD_RTHUMB_LEFT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_RTHUMB_UPLEFT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1RTHUMB_1UPLEFT(JNIEnv *, jclass) { return VK_PAD_RTHUMB_UPLEFT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_RTHUMB_UPRIGHT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1RTHUMB_1UPRIGHT(JNIEnv *, jclass) { return VK_PAD_RTHUMB_UPRIGHT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_RTHUMB_DOWNRIGHT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1RTHUMB_1DOWNRIGHT(JNIEnv *, jclass) { return VK_PAD_RTHUMB_DOWNRIGHT; }

/*
 * Class:     tpanda_gamepad_xinput1_3v_natives_NativeConstants
 * Method:    VK_PAD_RTHUMB_DOWNLEFT
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_tpanda_gamepad_xinput1_13v_natives_NativeConstants_VK_1PAD_1RTHUMB_1DOWNLEFT(JNIEnv *, jclass) { return VK_PAD_RTHUMB_DOWNLEFT; }

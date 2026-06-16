package tpanda.gamepad.xinput1_3v.natives;

public final class NativeConstants {
    static {
        if (!NativeLib.loadSuccess) {}
    }

    public static native int ERROR_SUCCESS();

    public static native int ERROR_DEVICE_NOT_CONNECTED();

    public static native int ERROR_EMPTY();

    public static native int XUSER_MAX_COUNT();

    // --- Battery Device Types ---
    public static native byte BATTERY_DEVTYPE_GAMEPAD();

    public static native byte BATTERY_DEVTYPE_HEADSET();

    // --- Battery Types ---
    public static native int BATTERY_TYPE_DISCONNECTED();

    public static native int BATTERY_TYPE_WIRED();

    public static native int BATTERY_TYPE_ALKALINE();

    public static native int BATTERY_TYPE_NIMH();

    public static native int BATTERY_TYPE_UNKNOWN();

    // --- Battery Levels ---
    public static native int BATTERY_LEVEL_EMPTY();

    public static native int BATTERY_LEVEL_LOW();

    public static native int BATTERY_LEVEL_MEDIUM();

    public static native int BATTERY_LEVEL_FULL();

    // --- Gamepad Button Bitmasks ---
    public static native int XINPUT_GAMEPAD_DPAD_UP();

    public static native int XINPUT_GAMEPAD_DPAD_DOWN();

    public static native int XINPUT_GAMEPAD_DPAD_LEFT();

    public static native int XINPUT_GAMEPAD_DPAD_RIGHT();

    public static native int XINPUT_GAMEPAD_START();

    public static native int XINPUT_GAMEPAD_BACK();

    public static native int XINPUT_GAMEPAD_LEFT_THUMB();

    public static native int XINPUT_GAMEPAD_RIGHT_THUMB();

    public static native int XINPUT_GAMEPAD_LEFT_SHOULDER();

    public static native int XINPUT_GAMEPAD_RIGHT_SHOULDER();

    public static native int XINPUT_GAMEPAD_A();

    public static native int XINPUT_GAMEPAD_B();

    public static native int XINPUT_GAMEPAD_X();

    public static native int XINPUT_GAMEPAD_Y();

    // --- Deadzones and Thresholds ---
    public static native int XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE();

    public static native int XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE();

    public static native int XINPUT_GAMEPAD_TRIGGER_THRESHOLD();

    // --- Device Types and Subtypes ---
    public static native int XINPUT_DEVTYPE_GAMEPAD();

    public static native int XINPUT_DEVSUBTYPE_UNKNOWN();

    public static native int XINPUT_DEVSUBTYPE_GAMEPAD();

    public static native int XINPUT_DEVSUBTYPE_ARCADE_STICK();

    public static native int XINPUT_DEVSUBTYPE_WHEEL();

    public static native int XINPUT_DEVSUBTYPE_FLIGHT_STICK();

    public static native int XINPUT_DEVSUBTYPE_DANCE_PAD();

    public static native int XINPUT_DEVSUBTYPE_GUITAR();

    public static native int XINPUT_DEVSUBTYPE_GUITAR_ALTERNATE();

    public static native int XINPUT_DEVSUBTYPE_DRUM_KIT();

    public static native int XINPUT_DEVSUBTYPE_GUITAR_BASS();

    public static native int XINPUT_DEVSUBTYPE_ARCADE_PAD();

    // --- Device Capability Flags ---
    public static native int XINPUT_CAPS_VOICE_SUPPORTED();

    public static native int XINPUT_CAPS_FFB_SUPPORTED();

    public static native int XINPUT_CAPS_WIRELESS();

    public static native int XINPUT_CAPS_PMD_SUPPORTED();

    public static native int XINPUT_CAPS_NO_NAVIGATION();

    // --- KeyStroke Flags ---
    public static native int XINPUT_KEYSTROKE_KEYDOWN();

    public static native int XINPUT_KEYSTROKE_KEYUP();

    public static native int XINPUT_KEYSTROKE_REPEAT();

    // --- Input Flags ---
    public static native int XINPUT_FLAG_GAMEPAD();

    // --- Virtual Keys ---
    public static native int VK_PAD_A();

    public static native int VK_PAD_B();

    public static native int VK_PAD_X();

    public static native int VK_PAD_Y();

    public static native int VK_PAD_RSHOULDER();

    public static native int VK_PAD_LSHOULDER();

    public static native int VK_PAD_LTRIGGER();

    public static native int VK_PAD_RTRIGGER();

    public static native int VK_PAD_DPAD_UP();

    public static native int VK_PAD_DPAD_DOWN();

    public static native int VK_PAD_DPAD_LEFT();

    public static native int VK_PAD_DPAD_RIGHT();

    public static native int VK_PAD_START();

    public static native int VK_PAD_BACK();

    public static native int VK_PAD_LTHUMB_PRESS();

    public static native int VK_PAD_RTHUMB_PRESS();

    public static native int VK_PAD_LTHUMB_UP();

    public static native int VK_PAD_LTHUMB_DOWN();

    public static native int VK_PAD_LTHUMB_RIGHT();

    public static native int VK_PAD_LTHUMB_LEFT();

    public static native int VK_PAD_LTHUMB_UPLEFT();

    public static native int VK_PAD_LTHUMB_UPRIGHT();

    public static native int VK_PAD_LTHUMB_DOWNRIGHT();

    public static native int VK_PAD_LTHUMB_DOWNLEFT();

    public static native int VK_PAD_RTHUMB_UP();

    public static native int VK_PAD_RTHUMB_DOWN();

    public static native int VK_PAD_RTHUMB_RIGHT();

    public static native int VK_PAD_RTHUMB_LEFT();

    public static native int VK_PAD_RTHUMB_UPLEFT();

    public static native int VK_PAD_RTHUMB_UPRIGHT();

    public static native int VK_PAD_RTHUMB_DOWNRIGHT();

    public static native int VK_PAD_RTHUMB_DOWNLEFT();
}
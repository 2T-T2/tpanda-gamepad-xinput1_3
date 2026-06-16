package tpanda.gamepad.xinput1_3v;

import tpanda.gamepad.xinput1_3v.natives.NativeConstants;

public enum Constants implements tpanda.gamepad.xinput.api.Constants {
    INSTANCE;

    public int ERROR_SUCCESS() { return NativeConstants.ERROR_SUCCESS(); }

    public int ERROR_DEVICE_NOT_CONNECTED() { return NativeConstants.ERROR_DEVICE_NOT_CONNECTED(); }

    public int ERROR_EMPTY() { return NativeConstants.ERROR_EMPTY(); }

    public int XUSER_MAX_COUNT() { return NativeConstants.XUSER_MAX_COUNT(); }

    // --- Battery Device Types ---
    public byte BATTERY_DEVTYPE_GAMEPAD() { return NativeConstants.BATTERY_DEVTYPE_GAMEPAD(); }

    public byte BATTERY_DEVTYPE_HEADSET() { return NativeConstants.BATTERY_DEVTYPE_HEADSET(); }

    // --- Battery Types ---
    public int BATTERY_TYPE_DISCONNECTED() { return NativeConstants.BATTERY_TYPE_DISCONNECTED(); }

    public int BATTERY_TYPE_WIRED() { return NativeConstants.BATTERY_TYPE_WIRED(); }

    public int BATTERY_TYPE_ALKALINE() { return NativeConstants.BATTERY_TYPE_ALKALINE(); }

    public int BATTERY_TYPE_NIMH() { return NativeConstants.BATTERY_TYPE_NIMH(); }

    public int BATTERY_TYPE_UNKNOWN() { return NativeConstants.BATTERY_TYPE_UNKNOWN(); }

    // --- Battery Levels ---
    public int BATTERY_LEVEL_EMPTY() { return NativeConstants.BATTERY_LEVEL_EMPTY(); }

    public int BATTERY_LEVEL_LOW() { return NativeConstants.BATTERY_LEVEL_LOW(); }

    public int BATTERY_LEVEL_MEDIUM() { return NativeConstants.BATTERY_LEVEL_MEDIUM(); }

    public int BATTERY_LEVEL_FULL() { return NativeConstants.BATTERY_LEVEL_FULL(); }

    // --- Gamepad Button Bitmasks ---
    public int XINPUT_GAMEPAD_DPAD_UP() { return NativeConstants.XINPUT_GAMEPAD_DPAD_UP(); }

    public int XINPUT_GAMEPAD_DPAD_DOWN() { return NativeConstants.XINPUT_GAMEPAD_DPAD_DOWN(); }

    public int XINPUT_GAMEPAD_DPAD_LEFT() { return NativeConstants.XINPUT_GAMEPAD_DPAD_LEFT(); }

    public int XINPUT_GAMEPAD_DPAD_RIGHT() { return NativeConstants.XINPUT_GAMEPAD_DPAD_RIGHT(); }

    public int XINPUT_GAMEPAD_START() { return NativeConstants.XINPUT_GAMEPAD_START(); }

    public int XINPUT_GAMEPAD_BACK() { return NativeConstants.XINPUT_GAMEPAD_BACK(); }

    public int XINPUT_GAMEPAD_LEFT_THUMB() { return NativeConstants.XINPUT_GAMEPAD_LEFT_THUMB(); }

    public int XINPUT_GAMEPAD_RIGHT_THUMB() { return NativeConstants.XINPUT_GAMEPAD_RIGHT_THUMB(); }

    public int XINPUT_GAMEPAD_LEFT_SHOULDER() { return NativeConstants.XINPUT_GAMEPAD_LEFT_SHOULDER(); }

    public int XINPUT_GAMEPAD_RIGHT_SHOULDER() { return NativeConstants.XINPUT_GAMEPAD_RIGHT_SHOULDER(); }

    public int XINPUT_GAMEPAD_A() { return NativeConstants.XINPUT_GAMEPAD_A(); }

    public int XINPUT_GAMEPAD_B() { return NativeConstants.XINPUT_GAMEPAD_B(); }

    public int XINPUT_GAMEPAD_X() { return NativeConstants.XINPUT_GAMEPAD_X(); }

    public int XINPUT_GAMEPAD_Y() { return NativeConstants.XINPUT_GAMEPAD_Y(); }

    // --- Deadzones and Thresholds ---
    public int XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE() { return NativeConstants.XINPUT_GAMEPAD_LEFT_THUMB_DEADZONE(); }

    public int XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE() { return NativeConstants.XINPUT_GAMEPAD_RIGHT_THUMB_DEADZONE(); }

    public int XINPUT_GAMEPAD_TRIGGER_THRESHOLD() { return NativeConstants.XINPUT_GAMEPAD_TRIGGER_THRESHOLD(); }

    // --- Device Types and Subtypes ---
    public int XINPUT_DEVTYPE_GAMEPAD() { return NativeConstants.XINPUT_DEVTYPE_GAMEPAD(); }

    public int XINPUT_DEVSUBTYPE_UNKNOWN() { return NativeConstants.XINPUT_DEVSUBTYPE_UNKNOWN(); }

    public int XINPUT_DEVSUBTYPE_GAMEPAD() { return NativeConstants.XINPUT_DEVSUBTYPE_GAMEPAD(); }

    public int XINPUT_DEVSUBTYPE_ARCADE_STICK() { return NativeConstants.XINPUT_DEVSUBTYPE_ARCADE_STICK(); }

    public int XINPUT_DEVSUBTYPE_WHEEL() { return NativeConstants.XINPUT_DEVSUBTYPE_WHEEL(); }

    public int XINPUT_DEVSUBTYPE_FLIGHT_STICK() { return NativeConstants.XINPUT_DEVSUBTYPE_FLIGHT_STICK(); }

    public int XINPUT_DEVSUBTYPE_DANCE_PAD() { return NativeConstants.XINPUT_DEVSUBTYPE_DANCE_PAD(); }

    public int XINPUT_DEVSUBTYPE_GUITAR() { return NativeConstants.XINPUT_DEVSUBTYPE_GUITAR(); }

    public int XINPUT_DEVSUBTYPE_GUITAR_ALTERNATE() { return NativeConstants.XINPUT_DEVSUBTYPE_GUITAR_ALTERNATE(); }

    public int XINPUT_DEVSUBTYPE_DRUM_KIT() { return NativeConstants.XINPUT_DEVSUBTYPE_DRUM_KIT(); }

    public int XINPUT_DEVSUBTYPE_GUITAR_BASS() { return NativeConstants.XINPUT_DEVSUBTYPE_GUITAR_BASS(); }

    public int XINPUT_DEVSUBTYPE_ARCADE_PAD() { return NativeConstants.XINPUT_DEVSUBTYPE_ARCADE_PAD(); }

    // --- Device Capability Flags ---
    public int XINPUT_CAPS_VOICE_SUPPORTED() { return NativeConstants.XINPUT_CAPS_VOICE_SUPPORTED(); }

    public int XINPUT_CAPS_FFB_SUPPORTED() { return NativeConstants.XINPUT_CAPS_FFB_SUPPORTED(); }

    public int XINPUT_CAPS_WIRELESS() { return NativeConstants.XINPUT_CAPS_WIRELESS(); }

    public int XINPUT_CAPS_PMD_SUPPORTED() { return NativeConstants.XINPUT_CAPS_PMD_SUPPORTED(); }

    public int XINPUT_CAPS_NO_NAVIGATION() { return NativeConstants.XINPUT_CAPS_NO_NAVIGATION(); }

    // --- KeyStroke Flags ---
    public int XINPUT_KEYSTROKE_KEYDOWN() { return NativeConstants.XINPUT_KEYSTROKE_KEYDOWN(); }

    public int XINPUT_KEYSTROKE_KEYUP() { return NativeConstants.XINPUT_KEYSTROKE_KEYUP(); }

    public int XINPUT_KEYSTROKE_REPEAT() { return NativeConstants.XINPUT_KEYSTROKE_REPEAT(); }

    // --- Input Flags ---
    public int XINPUT_FLAG_GAMEPAD() { return NativeConstants.XINPUT_FLAG_GAMEPAD(); }

    // --- Virtual Keys ---
    public int VK_PAD_A() { return NativeConstants.VK_PAD_A(); }

    public int VK_PAD_B() { return NativeConstants.VK_PAD_B(); }

    public int VK_PAD_X() { return NativeConstants.VK_PAD_X(); }

    public int VK_PAD_Y() { return NativeConstants.VK_PAD_Y(); }

    public int VK_PAD_RSHOULDER() { return NativeConstants.VK_PAD_RSHOULDER(); }

    public int VK_PAD_LSHOULDER() { return NativeConstants.VK_PAD_LSHOULDER(); }

    public int VK_PAD_LTRIGGER() { return NativeConstants.VK_PAD_LTRIGGER(); }

    public int VK_PAD_RTRIGGER() { return NativeConstants.VK_PAD_RTRIGGER(); }

    public int VK_PAD_DPAD_UP() { return NativeConstants.VK_PAD_DPAD_UP(); }

    public int VK_PAD_DPAD_DOWN() { return NativeConstants.VK_PAD_DPAD_DOWN(); }

    public int VK_PAD_DPAD_LEFT() { return NativeConstants.VK_PAD_DPAD_LEFT(); }

    public int VK_PAD_DPAD_RIGHT() { return NativeConstants.VK_PAD_DPAD_RIGHT(); }

    public int VK_PAD_START() { return NativeConstants.VK_PAD_START(); }

    public int VK_PAD_BACK() { return NativeConstants.VK_PAD_BACK(); }

    public int VK_PAD_LTHUMB_PRESS() { return NativeConstants.VK_PAD_LTHUMB_PRESS(); }

    public int VK_PAD_RTHUMB_PRESS() { return NativeConstants.VK_PAD_RTHUMB_PRESS(); }

    public int VK_PAD_LTHUMB_UP() { return NativeConstants.VK_PAD_LTHUMB_UP(); }

    public int VK_PAD_LTHUMB_DOWN() { return NativeConstants.VK_PAD_LTHUMB_DOWN(); }

    public int VK_PAD_LTHUMB_RIGHT() { return NativeConstants.VK_PAD_LTHUMB_RIGHT(); }

    public int VK_PAD_LTHUMB_LEFT() { return NativeConstants.VK_PAD_LTHUMB_LEFT(); }

    public int VK_PAD_LTHUMB_UPLEFT() { return NativeConstants.VK_PAD_LTHUMB_UPLEFT(); }

    public int VK_PAD_LTHUMB_UPRIGHT() { return NativeConstants.VK_PAD_LTHUMB_UPRIGHT(); }

    public int VK_PAD_LTHUMB_DOWNRIGHT() { return NativeConstants.VK_PAD_LTHUMB_DOWNRIGHT(); }

    public int VK_PAD_LTHUMB_DOWNLEFT() { return NativeConstants.VK_PAD_LTHUMB_DOWNLEFT(); }

    public int VK_PAD_RTHUMB_UP() { return NativeConstants.VK_PAD_RTHUMB_UP(); }

    public int VK_PAD_RTHUMB_DOWN() { return NativeConstants.VK_PAD_RTHUMB_DOWN(); }

    public int VK_PAD_RTHUMB_RIGHT() { return NativeConstants.VK_PAD_RTHUMB_RIGHT(); }

    public int VK_PAD_RTHUMB_LEFT() { return NativeConstants.VK_PAD_RTHUMB_LEFT(); }

    public int VK_PAD_RTHUMB_UPLEFT() { return NativeConstants.VK_PAD_RTHUMB_UPLEFT(); }

    public int VK_PAD_RTHUMB_UPRIGHT() { return NativeConstants.VK_PAD_RTHUMB_UPRIGHT(); }

    public int VK_PAD_RTHUMB_DOWNRIGHT() { return NativeConstants.VK_PAD_RTHUMB_DOWNRIGHT(); }

    public int VK_PAD_RTHUMB_DOWNLEFT() { return NativeConstants.VK_PAD_RTHUMB_DOWNLEFT(); }
}
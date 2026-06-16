package tpanda.gamepad.xinput1_3v.natives;

import tpanda.gamepad.xinput.api.XInputBatteryInformation;
import tpanda.gamepad.xinput.api.XInputCapabilities;
import tpanda.gamepad.xinput.api.XInputKeystroke;
import tpanda.gamepad.xinput.api.XInputState;
import tpanda.gamepad.xinput.api.XInputVibration;

public final class NativeMethods {
    static {
        if (!NativeLib.loadSuccess) {}
    }

    private NativeMethods() {}

    public native static void XInputEnable(boolean enable);
    public native static int XInputGetAudioDeviceIds(int userIndex, char[] bufRenderDeviceId, char[] bufCaptureDeviceId);
    public native static int XInputGetBatteryInformation(int userIndex, int devType, XInputBatteryInformation batteryInformation);
    public native static int XInputGetCapabilities(int userIndex, int flags, XInputCapabilities capabilities);
    public native static int XInputGetDSoundAudioDeviceGuids(int userIndex, byte[] dSoundRenderGuid, byte[] dSoundCaptureGuid);
    public native static int XInputGetKeystroke(int userIndex, int reserved, XInputKeystroke keystroke);
    public native static int XInputGetState(int userIndex, XInputState state);
    public native static int XInputSetState(int userIndex, XInputVibration vibration);
}

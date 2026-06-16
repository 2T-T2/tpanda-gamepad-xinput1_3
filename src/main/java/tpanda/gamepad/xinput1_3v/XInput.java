package tpanda.gamepad.xinput1_3v;

import java.util.stream.IntStream;

import tpanda.gamepad.xinput.api.XInputBatteryInformation;
import tpanda.gamepad.xinput.api.XInputCapabilities;
import tpanda.gamepad.xinput.api.XInputKeystroke;
import tpanda.gamepad.xinput.api.XInputState;
import tpanda.gamepad.xinput.api.XInputVibration;
import tpanda.gamepad.xinput1_3v.natives.NativeConstants;
import tpanda.gamepad.xinput1_3v.natives.NativeLib;
import tpanda.gamepad.xinput1_3v.natives.NativeMethods;

/**
 * xinput1_3 の実装
 */
public enum XInput implements tpanda.gamepad.xinput.api.XInput {
    INSTANCE;

    private static final int ERROR_SUCCESS;

    static {
        if (NativeLib.loadSuccess) {
            ERROR_SUCCESS = NativeConstants.ERROR_SUCCESS();
        } else {
            ERROR_SUCCESS = 0;
        }
    }

    @Override
    public void enable(boolean enable) {
        NativeMethods.XInputEnable(enable);
    }

    @Override
    public int getAudioDeviceIds(int userIndex, StringBuffer renderDeviceId, int renderCount, StringBuffer captureDeviceId, int captureCount) {
        renderDeviceId.setLength(0);
        captureDeviceId.setLength(0);

        char[] bufRenderDeviceId = new char[renderCount];
        char[] bufCaptureDeviceId = new char[captureCount];
        int result = NativeMethods.XInputGetAudioDeviceIds(userIndex, bufRenderDeviceId, bufCaptureDeviceId);
        if (result == ERROR_SUCCESS) {
            int lenRenderDeviceId = IntStream.range(0, renderCount).filter(i->bufRenderDeviceId[i] == '\0').findFirst().orElse(renderCount);
            renderDeviceId.append(bufRenderDeviceId, 0, lenRenderDeviceId);

            int lenCaptureDeviceId = IntStream.range(0, renderCount).filter(i->bufCaptureDeviceId[i] == '\0').findFirst().orElse(captureCount);
            captureDeviceId.append(bufCaptureDeviceId, 0, lenCaptureDeviceId);
        }
        return result;
    }

    @Override
    public int getBatteryInformation(int userIndex, int devType, XInputBatteryInformation batteryInformation) {
        return NativeMethods.XInputGetBatteryInformation(userIndex, devType, batteryInformation);
    }

    @Override
    public int getCapabilities(int userIndex, int flags, XInputCapabilities capabilities) {
        return NativeMethods.XInputGetCapabilities(userIndex, flags, capabilities);
    }

    @Override
    public int getDSoundAudioDeviceGuids(int userIndex, byte[] dSoundRenderGuid, byte[] dSoundCaptureGuid) {
        if (dSoundRenderGuid == null) throw new IllegalArgumentException("dSoundRenderGuid is null");
        if (dSoundCaptureGuid == null) throw new IllegalArgumentException("dSoundCaptureGuid is null");
        if (dSoundRenderGuid.length < 16) throw new IllegalArgumentException("dSoundRenderGuid must be at least 16 bytes");
        if (dSoundCaptureGuid.length < 16) throw new IllegalArgumentException("dSoundCaptureGuid must be at least 16 bytes");
        return NativeMethods.XInputGetDSoundAudioDeviceGuids(userIndex, dSoundRenderGuid, dSoundCaptureGuid);
    }
    @Override
    public int getKeystroke(int userIndex, int reserved, XInputKeystroke keystroke) {
        return NativeMethods.XInputGetKeystroke(userIndex, reserved, keystroke);
    }

    @Override
    public int getState(int userIndex, XInputState state) {
        return NativeMethods.XInputGetState(userIndex, state);
    }

    @Override
    public int setState(int userIndex, XInputVibration vibration) {
        return NativeMethods.XInputSetState(userIndex, vibration);
    }
}

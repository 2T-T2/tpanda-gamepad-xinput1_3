package test.tpanda.gamepad.xinput1_3v;

import org.junit.jupiter.api.Test;
import tpanda.gamepad.xinput.api.XInputBatteryInformation;
import tpanda.gamepad.xinput.api.XInputCapabilities;
import tpanda.gamepad.xinput.api.XInputKeystroke;
import tpanda.gamepad.xinput.api.XInputState;
import tpanda.gamepad.xinput.api.XInputVibration;
import tpanda.gamepad.xinput1_3v.Constants;
import tpanda.gamepad.xinput1_3v.XInput;

public class TestXInput implements tpanda.gamepad.xinput.api.XInput {
    private static final XInput xinput = XInput.INSTANCE;
    private static final Constants constants = Constants.INSTANCE;

    @Test
    public void 呼び出しテスト() {
        // 一通り呼び出せるかテスト(native の load に失敗しないか確認)
        xinput.enable(true);
        xinput.getAudioDeviceIds(0, new StringBuffer(), 255, new StringBuffer(), 255);
        xinput.getBatteryInformation(0, constants.BATTERY_DEVTYPE_GAMEPAD(), new tpanda.gamepad.xinput1_3v.XInputBatteryInformation());
        xinput.getCapabilities(0, constants.XINPUT_FLAG_GAMEPAD(), new tpanda.gamepad.xinput1_3v.XInputCapabilities());
        xinput.getDSoundAudioDeviceGuids(0, new byte[16], new byte[16]);
        xinput.getKeystroke(0, 0, new tpanda.gamepad.xinput1_3v.XInputKeystroke());
        xinput.getState(0, new tpanda.gamepad.xinput1_3v.XInputState());
        xinput.setState(0, new tpanda.gamepad.xinput1_3v.XInputVibration(0, 0));
    }

    @Override
    public void enable(boolean enable) {
        xinput.enable(enable);
    }

    @Override
    public int getAudioDeviceIds(int userIndex, StringBuffer renderDeviceId, int renderCount, StringBuffer captureDeviceId, int captureCount) {
        return xinput.getAudioDeviceIds(userIndex, renderDeviceId, renderCount, captureDeviceId, captureCount);
    }

    @Override
    public int getBatteryInformation(int userIndex, int devType, XInputBatteryInformation batteryInformation) {
        return xinput.getBatteryInformation(userIndex, devType, batteryInformation);
    }

    @Override
    public int getCapabilities(int userIndex, int flags, XInputCapabilities capabilities) {
        return xinput.getCapabilities(userIndex, flags, capabilities);
    }

    @Override
    public int getDSoundAudioDeviceGuids(int userIndex, byte[] dSoundRenderGuid, byte[] dSoundCaptureGuid) {
        return xinput.getDSoundAudioDeviceGuids(userIndex, dSoundRenderGuid, dSoundCaptureGuid);
    }

    @Override
    public int getKeystroke(int userIndex, int reserved, XInputKeystroke keystroke) {
        return xinput.getKeystroke(userIndex, reserved, keystroke);
    }

    @Override
    public int getState(int userIndex, XInputState state) {
        return xinput.getState(userIndex, state);
    }

    @Override
    public int setState(int userIndex, XInputVibration vibration) {
        return xinput.setState(userIndex, vibration);
    }
}

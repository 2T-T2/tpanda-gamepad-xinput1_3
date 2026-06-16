package tpanda.gamepad.xinput1_3v;

import tpanda.gamepad.xinput1_3v.natives.NativeLib;

public class XInputProvider implements tpanda.gamepad.xinput.api.XInputProvider {

    @Override
    public boolean isAvailable() {
        return NativeLib.loadSuccess;
    }

    @Override
    public XInput getXInput() {
        return XInput.INSTANCE;
    }

    @Override
    public Constants getConstants() {
        return Constants.INSTANCE;
    }

    @Override
    public XInputBatteryInformation newBatteryInformation() {
        return new XInputBatteryInformation();
    }

    @Override
    public XInputCapabilities newCapabilities() {
        return new XInputCapabilities();
    }

    @Override
    public XInputGamepad newGamepad() {
        return new XInputGamepad();
    }

    @Override
    public XInputKeystroke newKeystroke() {
        return new XInputKeystroke();
    }

    @Override
    public XInputState newState() {
        return new XInputState();
    }

    @Override
    public XInputVibration newVibration(int leftMotorSpeed, int rightMotorSpeed) {
        return new XInputVibration(leftMotorSpeed, rightMotorSpeed);
    }
}

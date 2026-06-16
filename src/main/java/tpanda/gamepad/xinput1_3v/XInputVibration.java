package tpanda.gamepad.xinput1_3v;

import java.util.Objects;

public final class XInputVibration implements tpanda.gamepad.xinput.api.XInputVibration {
    private int leftMotorSpeed = 0;
    private int rightMotorSpeed = 0;

    public XInputVibration(int leftMotorSpeed, int rightMotorSpeed) {
        this.leftMotorSpeed = leftMotorSpeed;
        this.rightMotorSpeed = rightMotorSpeed;
    }

    public int leftMotorSpeed() {
        return leftMotorSpeed;
    }

    public int rightMotorSpeed() {
        return rightMotorSpeed;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj == this) return true;
        if (obj == null || obj.getClass() != this.getClass()) return false;
        var that = (XInputVibration) obj;
        return this.leftMotorSpeed == that.leftMotorSpeed &&
                this.rightMotorSpeed == that.rightMotorSpeed;
    }

    @Override
    public int hashCode() {
        return Objects.hash(leftMotorSpeed, rightMotorSpeed);
    }

    @Override
    public String toString() {
        return "XInputVibration[" +
                "leftMotorSpeed=" + leftMotorSpeed + ", " +
                "rightMotorSpeed=" + rightMotorSpeed + ']';
    }
}

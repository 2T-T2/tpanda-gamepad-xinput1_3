package tpanda.gamepad.xinput1_3v;

import java.util.Objects;

public final class XInputBatteryInformation implements tpanda.gamepad.xinput.api.XInputBatteryInformation {
    private int batteryType;
    private int batteryLevel;

    public XInputBatteryInformation() {
        this.batteryType = 0;
        this.batteryLevel = 0;
    }

    public int batteryType() {
        return batteryType;
    }

    public int batteryLevel() {
        return batteryLevel;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj == this) return true;
        if (obj == null || obj.getClass() != this.getClass()) return false;
        var that = (XInputBatteryInformation) obj;
        return this.batteryType == that.batteryType &&
                this.batteryLevel == that.batteryLevel;
    }

    @Override
    public int hashCode() {
        return Objects.hash(batteryType, batteryLevel);
    }

    @Override
    public String toString() {
        return "XInputBatteryInformationImpl[" +
                "batteryType=" + batteryType + ", " +
                "batteryLevel=" + batteryLevel + ']';
    }

}

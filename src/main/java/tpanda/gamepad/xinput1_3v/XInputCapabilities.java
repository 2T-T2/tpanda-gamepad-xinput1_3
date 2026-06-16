package tpanda.gamepad.xinput1_3v;

import java.util.Objects;

public final class XInputCapabilities implements tpanda.gamepad.xinput.api.XInputCapabilities {
    private int type;
    private int subType;
    private int flags;
    private XInputGamepad gamepad;
    private XInputVibration vibration;

    public XInputCapabilities() {
        this.type = 0;
        this.subType = 0;
        this.flags = 0;
        this.gamepad = new XInputGamepad();
        this.vibration = new XInputVibration(0, 0);
    }

    public int type() {
        return type;
    }

    public int subType() {
        return subType;
    }

    public int flags() {
        return flags;
    }

    public XInputGamepad gamepad() {
        return gamepad;
    }

    public XInputVibration vibration() {
        return vibration;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj == this) return true;
        if (obj == null || obj.getClass() != this.getClass()) return false;
        var that = (XInputCapabilities) obj;
        return this.type == that.type &&
                this.subType == that.subType &&
                this.flags == that.flags &&
                Objects.equals(this.gamepad, that.gamepad) &&
                Objects.equals(this.vibration, that.vibration);
    }

    @Override
    public int hashCode() {
        return Objects.hash(type, subType, flags, gamepad, vibration);
    }

    @Override
    public String toString() {
        return "XInputCapabilities[" +
                "type=" + type + ", " +
                "subType=" + subType + ", " +
                "flags=" + flags + ", " +
                "gamepad=" + gamepad + ", " +
                "vibration=" + vibration + ']';
    }
}

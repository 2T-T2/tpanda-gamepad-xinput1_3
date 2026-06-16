package tpanda.gamepad.xinput1_3v;

import java.util.Objects;

public final class XInputState implements tpanda.gamepad.xinput.api.XInputState {
    private int packetNumber;
    private XInputGamepad gamepad;

    public XInputState() {
        this.packetNumber = 0;
        this.gamepad = new XInputGamepad();
    }

    public int packetNumber() {
        return packetNumber;
    }

    public XInputGamepad gamepad() {
        return gamepad;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj == this) return true;
        if (obj == null || obj.getClass() != this.getClass()) return false;
        var that = (XInputState) obj;
        return this.packetNumber == that.packetNumber &&
                Objects.equals(this.gamepad, that.gamepad);
    }

    @Override
    public int hashCode() {
        return Objects.hash(packetNumber, gamepad);
    }

    @Override
    public String toString() {
        return "XInputState[" +
                "packetNumber=" + packetNumber + ", " +
                "gamepad=" + gamepad + ']';
    }
}

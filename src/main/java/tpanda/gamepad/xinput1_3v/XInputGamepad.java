package tpanda.gamepad.xinput1_3v;

import java.util.Objects;

public final class XInputGamepad implements tpanda.gamepad.xinput.api.XInputGamepad {
    private int buttons;
    private short leftTrigger;
    private short rightTrigger;
    private short thumbLX;
    private short thumbLY;
    private short thumbRX;
    private short thumbRY;

    public XInputGamepad() {
        this.buttons = 0;
        this.leftTrigger = 0;
        this.rightTrigger = 0;
        this.thumbLX = 0;
        this.thumbLY = 0;
        this.thumbRX = 0;
        this.thumbRY = 0;
    }

    public int buttons() {
        return buttons;
    }

    public short leftTrigger() {
        return leftTrigger;
    }

    public short rightTrigger() {
        return rightTrigger;
    }

    public short thumbLX() {
        return thumbLX;
    }

    public short thumbLY() {
        return thumbLY;
    }

    public short thumbRX() {
        return thumbRX;
    }

    public short thumbRY() {
        return thumbRY;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj == this) return true;
        if (obj == null || obj.getClass() != this.getClass()) return false;
        var that = (XInputGamepad) obj;
        return this.buttons == that.buttons &&
                this.leftTrigger == that.leftTrigger &&
                this.rightTrigger == that.rightTrigger &&
                this.thumbLX == that.thumbLX &&
                this.thumbLY == that.thumbLY &&
                this.thumbRX == that.thumbRX &&
                this.thumbRY == that.thumbRY;
    }

    @Override
    public int hashCode() {
        return Objects.hash(buttons, leftTrigger, rightTrigger, thumbLX, thumbLY, thumbRX, thumbRY);
    }

    @Override
    public String toString() {
        return "XInputGamepad[" +
                "buttons=" + buttons + ", " +
                "leftTrigger=" + leftTrigger + ", " +
                "rightTrigger=" + rightTrigger + ", " +
                "thumbLX=" + thumbLX + ", " +
                "thumbLY=" + thumbLY + ", " +
                "thumbRX=" + thumbRX + ", " +
                "thumbRY=" + thumbRY + ']';
    }
}

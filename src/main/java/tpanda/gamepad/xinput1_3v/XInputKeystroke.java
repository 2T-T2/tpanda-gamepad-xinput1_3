package tpanda.gamepad.xinput1_3v;

import java.util.Objects;

public final class XInputKeystroke implements tpanda.gamepad.xinput.api.XInputKeystroke {
    private int virtualKey;
    private char unicode;
    private int flags;
    private int userIndex;
    private int hidCode;

    public XInputKeystroke() {
        this.virtualKey = 0;
        this.unicode = 0;
        this.flags = 0;
        this.userIndex = 0;
        this.hidCode = 0;
    }

    public int virtualKey() {
        return virtualKey;
    }

    public char unicode() {
        return unicode;
    }

    public int flags() {
        return flags;
    }

    public int userIndex() {
        return userIndex;
    }

    public int hidCode() {
        return hidCode;
    }

    @Override
    public boolean equals(Object obj) {
        if (obj == this) return true;
        if (obj == null || obj.getClass() != this.getClass()) return false;
        var that = (XInputKeystroke) obj;
        return this.virtualKey == that.virtualKey &&
                Objects.equals(this.unicode, that.unicode) &&
                this.flags == that.flags &&
                this.userIndex == that.userIndex &&
                this.hidCode == that.hidCode;
    }

    @Override
    public int hashCode() {
        return Objects.hash(virtualKey, unicode, flags, userIndex, hidCode);
    }

    @Override
    public String toString() {
        return "XInputKeystroke[" +
                "virtualKey=" + virtualKey + ", " +
                "unicode=" + unicode + ", " +
                "flags=" + flags + ", " +
                "userIndex=" + userIndex + ", " +
                "hidCode=" + hidCode + ']';
    }
}

module test.tpanda.gamepad.xinput1_3v {
    requires tpanda.gamepad.xinput1_3v;
    requires org.junit.jupiter.api;

    exports test.tpanda.gamepad.xinput1_3v;
    opens test.tpanda.gamepad.xinput1_3v;
    uses tpanda.gamepad.xinput.api.XInputProvider;
}

module tpanda.gamepad.xinput1_3v {
    requires transitive tpanda.gamepad.xinput.api;
    exports tpanda.gamepad.xinput1_3v;

    provides tpanda.gamepad.xinput.api.XInputProvider with tpanda.gamepad.xinput1_3v.XInputProvider;
}

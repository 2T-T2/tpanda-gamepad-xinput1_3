package test.tpanda.gamepad.xinput1_3v;

import org.junit.jupiter.api.Test;
import tpanda.gamepad.xinput.api.XInputProvider;

import java.util.ServiceLoader;

public class TestXInputProvider {
    @Test
    public void サービスローダーからの読み込み() {
        assert ServiceLoader.load(XInputProvider.class).stream().anyMatch(it->it.get().getClass().equals(tpanda.gamepad.xinput1_3v.XInputProvider.class));
    }
}

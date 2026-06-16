package test.tpanda.gamepad.xinput1_3v;

import org.junit.jupiter.api.Test;
import tpanda.gamepad.xinput1_3v.Constants;

import java.lang.reflect.InvocationTargetException;
import java.lang.reflect.Method;

public class TestConstants  {
    Constants constants = Constants.INSTANCE;

    @Test
    public void 呼び出しテスト() throws InvocationTargetException, IllegalAccessException {
        // 一通り呼び出せるかテスト(native の load に失敗しないか確認)
        for (Method method : tpanda.gamepad.xinput.api.Constants.class.getMethods()) {
            System.out.println("[TEST] " + method.getName() + ":" + method.invoke(constants));
        }
    }
}
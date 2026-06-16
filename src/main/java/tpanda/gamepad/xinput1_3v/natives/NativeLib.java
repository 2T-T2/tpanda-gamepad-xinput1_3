package tpanda.gamepad.xinput1_3v.natives;

public final class NativeLib {
    private NativeLib() {}

    public static final boolean loadSuccess;

    static {
        boolean loaded;
        try {
            System.loadLibrary(NativeLib.getLibName());
            loaded = true;
        } catch (Throwable ignore) {
            loaded = false;
        }
        loadSuccess = loaded;
    }

    private static String getLibName() {
        String fmtName = "tpanda-gamepad-xinput1_3-jni-win-%s";
        String arch = System.getProperty("os.arch");
        if ("x86_64".equals(arch))
            return fmtName.formatted("x86_64");
        if ("arm64".equals(arch))
            return fmtName.formatted("x86_64");
        if ("x86".equals(arch))
            return fmtName.formatted("x86");

        return fmtName.formatted("x86_64");
    }
}

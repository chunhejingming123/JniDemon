package com.scm.jnidemon;

public class JniKet {
    public static native String testJni();
    static{
        System.loadLibrary("JniDemo");
    }
}

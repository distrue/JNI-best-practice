package org.distrue.engine;

public class Hello {

  static {
    System.loadLibrary("hello");
  }

  private static native void sayHello (String msg);

  public static void hello() {
    sayHello("Native test");
  }
}

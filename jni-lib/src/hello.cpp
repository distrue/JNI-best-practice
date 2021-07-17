#include <jni.h>
#include <stdio.h>
#include "org_distrue_engine_Hello.h"

// using namespace std;

JNIEXPORT void JNICALL
Java_org_distrue_engine_Hello_sayHello(JNIEnv *env, jclass cls, jstring str)
{
  printf("Hello World!");
  return;
}

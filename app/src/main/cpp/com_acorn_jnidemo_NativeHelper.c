//
// Created by Administrator on 2019/9/10.
//
#include <jni.h>
#include "com_acorn_jnidemo_NativeHelper.h"

JNIEXPORT jstring JNICALL Java_com_acorn_jnidemo_NativeHelper_testNdk(JNIEnv *env, jclass type) {

    //测试代码, 没有任何意义
    char* app_key = "5465465416948";

    //生成 Java 中的字符串对象
    //指针的指针
    // env <=> JNINativeInterface** C语言
    return (*env)->NewStringUTF(env, app_key);
}
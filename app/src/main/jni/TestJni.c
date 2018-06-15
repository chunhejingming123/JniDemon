//
// Created by Administrator on 2018/6/13.
//
#include <com_scm_jnidemon_JniKet.h>
JNIEXPORT jstring JNICALL Java_com_scm_jnidemon_JniKet_testJni
  (JNIEnv *env, jclass jc){
  return (*env)->NewStringUTF(env,"luckhaha");
  }

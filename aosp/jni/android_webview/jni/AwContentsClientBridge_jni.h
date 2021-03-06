// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/android_webview/AwContentsClientBridge

#ifndef org_chromium_android_webview_AwContentsClientBridge_JNI
#define org_chromium_android_webview_AwContentsClientBridge_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kAwContentsClientBridgeClassPath[] =
    "org/chromium/android_webview/AwContentsClientBridge";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_AwContentsClientBridge_clazz = NULL;
}  // namespace

namespace android_webview {

// Step 2: method stubs.
static void ProceedSslError(JNIEnv* env, jobject obj,
    jlong nativeAwContentsClientBridge,
    jboolean proceed,
    jint id) {
  DCHECK(nativeAwContentsClientBridge) << "ProceedSslError";
  AwContentsClientBridge* native =
      reinterpret_cast<AwContentsClientBridge*>(nativeAwContentsClientBridge);
  return native->ProceedSslError(env, obj, proceed, id);
}

static void ConfirmJsResult(JNIEnv* env, jobject obj,
    jlong nativeAwContentsClientBridge,
    jint id,
    jstring prompt) {
  DCHECK(nativeAwContentsClientBridge) << "ConfirmJsResult";
  AwContentsClientBridge* native =
      reinterpret_cast<AwContentsClientBridge*>(nativeAwContentsClientBridge);
  return native->ConfirmJsResult(env, obj, id, prompt);
}

static void CancelJsResult(JNIEnv* env, jobject obj,
    jlong nativeAwContentsClientBridge,
    jint id) {
  DCHECK(nativeAwContentsClientBridge) << "CancelJsResult";
  AwContentsClientBridge* native =
      reinterpret_cast<AwContentsClientBridge*>(nativeAwContentsClientBridge);
  return native->CancelJsResult(env, obj, id);
}

static base::subtle::AtomicWord
    g_AwContentsClientBridge_setNativeContentsClientBridge = 0;
static void Java_AwContentsClientBridge_setNativeContentsClientBridge(JNIEnv*
    env, jobject obj, jlong nativeContentsClientBridge) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContentsClientBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContentsClientBridge_clazz,
      "setNativeContentsClientBridge",

"("
"J"
")"
"V",
      &g_AwContentsClientBridge_setNativeContentsClientBridge);

  env->CallVoidMethod(obj,
      method_id, nativeContentsClientBridge);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContentsClientBridge_allowCertificateError =
    0;
static jboolean Java_AwContentsClientBridge_allowCertificateError(JNIEnv* env,
    jobject obj, jint certError,
    jbyteArray derBytes,
    jstring url,
    jint id) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContentsClientBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContentsClientBridge_clazz,
      "allowCertificateError",

"("
"I"
"[B"
"Ljava/lang/String;"
"I"
")"
"Z",
      &g_AwContentsClientBridge_allowCertificateError);

  jboolean ret =
    env->CallBooleanMethod(obj,
      method_id, certError, derBytes, url, id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_AwContentsClientBridge_handleJsAlert = 0;
static void Java_AwContentsClientBridge_handleJsAlert(JNIEnv* env, jobject obj,
    jstring url,
    jstring message,
    jint id) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContentsClientBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContentsClientBridge_clazz,
      "handleJsAlert",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
")"
"V",
      &g_AwContentsClientBridge_handleJsAlert);

  env->CallVoidMethod(obj,
      method_id, url, message, id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContentsClientBridge_handleJsConfirm = 0;
static void Java_AwContentsClientBridge_handleJsConfirm(JNIEnv* env, jobject
    obj, jstring url,
    jstring message,
    jint id) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContentsClientBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContentsClientBridge_clazz,
      "handleJsConfirm",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
")"
"V",
      &g_AwContentsClientBridge_handleJsConfirm);

  env->CallVoidMethod(obj,
      method_id, url, message, id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContentsClientBridge_handleJsPrompt = 0;
static void Java_AwContentsClientBridge_handleJsPrompt(JNIEnv* env, jobject obj,
    jstring url,
    jstring message,
    jstring defaultValue,
    jint id) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContentsClientBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContentsClientBridge_clazz,
      "handleJsPrompt",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
")"
"V",
      &g_AwContentsClientBridge_handleJsPrompt);

  env->CallVoidMethod(obj,
      method_id, url, message, defaultValue, id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord g_AwContentsClientBridge_handleJsBeforeUnload =
    0;
static void Java_AwContentsClientBridge_handleJsBeforeUnload(JNIEnv* env,
    jobject obj, jstring url,
    jstring message,
    jint id) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContentsClientBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContentsClientBridge_clazz,
      "handleJsBeforeUnload",

"("
"Ljava/lang/String;"
"Ljava/lang/String;"
"I"
")"
"V",
      &g_AwContentsClientBridge_handleJsBeforeUnload);

  env->CallVoidMethod(obj,
      method_id, url, message, id);
  base::android::CheckException(env);

}

static base::subtle::AtomicWord
    g_AwContentsClientBridge_shouldOverrideUrlLoading = 0;
static jboolean Java_AwContentsClientBridge_shouldOverrideUrlLoading(JNIEnv*
    env, jobject obj, jstring url) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_AwContentsClientBridge_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_INSTANCE>(
      env, g_AwContentsClientBridge_clazz,
      "shouldOverrideUrlLoading",

"("
"Ljava/lang/String;"
")"
"Z",
      &g_AwContentsClientBridge_shouldOverrideUrlLoading);

  jboolean ret =
    env->CallBooleanMethod(obj,
      method_id, url);
  base::android::CheckException(env);
  return ret;
}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_AwContentsClientBridge_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kAwContentsClientBridgeClassPath).obj()));
  static const JNINativeMethod kMethodsAwContentsClientBridge[] = {
    { "nativeProceedSslError",
"("
"J"
"Z"
"I"
")"
"V", reinterpret_cast<void*>(ProceedSslError) },
    { "nativeConfirmJsResult",
"("
"J"
"I"
"Ljava/lang/String;"
")"
"V", reinterpret_cast<void*>(ConfirmJsResult) },
    { "nativeCancelJsResult",
"("
"J"
"I"
")"
"V", reinterpret_cast<void*>(CancelJsResult) },
  };
  const int kMethodsAwContentsClientBridgeSize =
      arraysize(kMethodsAwContentsClientBridge);

  if (env->RegisterNatives(g_AwContentsClientBridge_clazz,
                           kMethodsAwContentsClientBridge,
                           kMethodsAwContentsClientBridgeSize) < 0) {
    LOG(ERROR) << "RegisterNatives failed in " << __FILE__;
    return false;
  }

  return true;
}
}  // namespace android_webview

#endif  // org_chromium_android_webview_AwContentsClientBridge_JNI

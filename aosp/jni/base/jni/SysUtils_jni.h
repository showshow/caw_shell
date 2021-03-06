// Copyright (c) 2012 The Chromium Authors. All rights reserved.
// Use of this source code is governed by a BSD-style license that can be
// found in the LICENSE file.

// This file is autogenerated by
//     base/android/jni_generator/jni_generator.py
// For
//     org/chromium/base/SysUtils

#ifndef org_chromium_base_SysUtils_JNI
#define org_chromium_base_SysUtils_JNI

#include <jni.h>

#include "base/android/jni_android.h"
#include "base/android/scoped_java_ref.h"
#include "base/basictypes.h"
#include "base/logging.h"

using base::android::ScopedJavaLocalRef;

// Step 1: forward declarations.
namespace {
const char kSysUtilsClassPath[] = "org/chromium/base/SysUtils";
// Leaking this jclass as we cannot use LazyInstance from some threads.
jclass g_SysUtils_clazz = NULL;
}  // namespace

// Step 2: method stubs.

static base::subtle::AtomicWord g_SysUtils_amountOfPhysicalMemoryKB = 0;
static jint Java_SysUtils_amountOfPhysicalMemoryKB(JNIEnv* env) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_SysUtils_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_SysUtils_clazz,
      "amountOfPhysicalMemoryKB",

"("
")"
"I",
      &g_SysUtils_amountOfPhysicalMemoryKB);

  jint ret =
    env->CallStaticIntMethod(g_SysUtils_clazz,
      method_id);
  base::android::CheckException(env);
  return ret;
}

static base::subtle::AtomicWord g_SysUtils_isLowEndDevice = 0;
static jboolean Java_SysUtils_isLowEndDevice(JNIEnv* env) {
  /* Must call RegisterNativesImpl()  */
  DCHECK(g_SysUtils_clazz);
  jmethodID method_id =
      base::android::MethodID::LazyGet<
      base::android::MethodID::TYPE_STATIC>(
      env, g_SysUtils_clazz,
      "isLowEndDevice",

"("
")"
"Z",
      &g_SysUtils_isLowEndDevice);

  jboolean ret =
    env->CallStaticBooleanMethod(g_SysUtils_clazz,
      method_id);
  base::android::CheckException(env);
  return ret;
}

// Step 3: RegisterNatives.

static bool RegisterNativesImpl(JNIEnv* env) {

  g_SysUtils_clazz = reinterpret_cast<jclass>(env->NewGlobalRef(
      base::android::GetClass(env, kSysUtilsClassPath).obj()));
  return true;
}

#endif  // org_chromium_base_SysUtils_JNI

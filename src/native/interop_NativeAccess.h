/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class interop_NativeAccess */

#ifndef _Included_interop_NativeAccess
#define _Included_interop_NativeAccess
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     interop_NativeAccess
 * Method:    initNative
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_interop_NativeAccess_initNative
  (JNIEnv *, jclass);

/*
 * Class:     interop_NativeAccess
 * Method:    createAsyncHandle
 * Signature: (Ljava/lang/Runnable;)J
 */
JNIEXPORT jlong JNICALL Java_interop_NativeAccess_createAsyncHandle
  (JNIEnv *, jclass, jobject);

/*
 * Class:     interop_NativeAccess
 * Method:    closeAsyncHandle
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_interop_NativeAccess_closeAsyncHandle
  (JNIEnv *, jclass, jlong);

/*
 * Class:     interop_NativeAccess
 * Method:    sendAsyncHandle
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_interop_NativeAccess_sendAsyncHandle
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif

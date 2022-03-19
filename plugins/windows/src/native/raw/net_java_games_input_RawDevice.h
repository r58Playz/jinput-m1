/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class net_java_games_input_RawDevice */

#ifndef _Included_net_java_games_input_RawDevice
#define _Included_net_java_games_input_RawDevice
#ifdef __cplusplus
extern "C" {
#endif
#undef net_java_games_input_RawDevice_RI_MOUSE_LEFT_BUTTON_DOWN
#define net_java_games_input_RawDevice_RI_MOUSE_LEFT_BUTTON_DOWN 1L
#undef net_java_games_input_RawDevice_RI_MOUSE_LEFT_BUTTON_UP
#define net_java_games_input_RawDevice_RI_MOUSE_LEFT_BUTTON_UP 2L
#undef net_java_games_input_RawDevice_RI_MOUSE_RIGHT_BUTTON_DOWN
#define net_java_games_input_RawDevice_RI_MOUSE_RIGHT_BUTTON_DOWN 4L
#undef net_java_games_input_RawDevice_RI_MOUSE_RIGHT_BUTTON_UP
#define net_java_games_input_RawDevice_RI_MOUSE_RIGHT_BUTTON_UP 8L
#undef net_java_games_input_RawDevice_RI_MOUSE_MIDDLE_BUTTON_DOWN
#define net_java_games_input_RawDevice_RI_MOUSE_MIDDLE_BUTTON_DOWN 16L
#undef net_java_games_input_RawDevice_RI_MOUSE_MIDDLE_BUTTON_UP
#define net_java_games_input_RawDevice_RI_MOUSE_MIDDLE_BUTTON_UP 32L
#undef net_java_games_input_RawDevice_RI_MOUSE_BUTTON_1_DOWN
#define net_java_games_input_RawDevice_RI_MOUSE_BUTTON_1_DOWN 1L
#undef net_java_games_input_RawDevice_RI_MOUSE_BUTTON_1_UP
#define net_java_games_input_RawDevice_RI_MOUSE_BUTTON_1_UP 2L
#undef net_java_games_input_RawDevice_RI_MOUSE_BUTTON_2_DOWN
#define net_java_games_input_RawDevice_RI_MOUSE_BUTTON_2_DOWN 4L
#undef net_java_games_input_RawDevice_RI_MOUSE_BUTTON_2_UP
#define net_java_games_input_RawDevice_RI_MOUSE_BUTTON_2_UP 8L
#undef net_java_games_input_RawDevice_RI_MOUSE_BUTTON_3_DOWN
#define net_java_games_input_RawDevice_RI_MOUSE_BUTTON_3_DOWN 16L
#undef net_java_games_input_RawDevice_RI_MOUSE_BUTTON_3_UP
#define net_java_games_input_RawDevice_RI_MOUSE_BUTTON_3_UP 32L
#undef net_java_games_input_RawDevice_RI_MOUSE_BUTTON_4_DOWN
#define net_java_games_input_RawDevice_RI_MOUSE_BUTTON_4_DOWN 64L
#undef net_java_games_input_RawDevice_RI_MOUSE_BUTTON_4_UP
#define net_java_games_input_RawDevice_RI_MOUSE_BUTTON_4_UP 128L
#undef net_java_games_input_RawDevice_RI_MOUSE_BUTTON_5_DOWN
#define net_java_games_input_RawDevice_RI_MOUSE_BUTTON_5_DOWN 256L
#undef net_java_games_input_RawDevice_RI_MOUSE_BUTTON_5_UP
#define net_java_games_input_RawDevice_RI_MOUSE_BUTTON_5_UP 512L
#undef net_java_games_input_RawDevice_RI_MOUSE_WHEEL
#define net_java_games_input_RawDevice_RI_MOUSE_WHEEL 1024L
#undef net_java_games_input_RawDevice_MOUSE_MOVE_RELATIVE
#define net_java_games_input_RawDevice_MOUSE_MOVE_RELATIVE 0L
#undef net_java_games_input_RawDevice_MOUSE_MOVE_ABSOLUTE
#define net_java_games_input_RawDevice_MOUSE_MOVE_ABSOLUTE 1L
#undef net_java_games_input_RawDevice_MOUSE_VIRTUAL_DESKTOP
#define net_java_games_input_RawDevice_MOUSE_VIRTUAL_DESKTOP 2L
#undef net_java_games_input_RawDevice_MOUSE_ATTRIBUTES_CHANGED
#define net_java_games_input_RawDevice_MOUSE_ATTRIBUTES_CHANGED 4L
#undef net_java_games_input_RawDevice_RIM_TYPEHID
#define net_java_games_input_RawDevice_RIM_TYPEHID 2L
#undef net_java_games_input_RawDevice_RIM_TYPEKEYBOARD
#define net_java_games_input_RawDevice_RIM_TYPEKEYBOARD 1L
#undef net_java_games_input_RawDevice_RIM_TYPEMOUSE
#define net_java_games_input_RawDevice_RIM_TYPEMOUSE 0L
#undef net_java_games_input_RawDevice_WM_KEYDOWN
#define net_java_games_input_RawDevice_WM_KEYDOWN 256L
#undef net_java_games_input_RawDevice_WM_KEYUP
#define net_java_games_input_RawDevice_WM_KEYUP 257L
#undef net_java_games_input_RawDevice_WM_SYSKEYDOWN
#define net_java_games_input_RawDevice_WM_SYSKEYDOWN 260L
#undef net_java_games_input_RawDevice_WM_SYSKEYUP
#define net_java_games_input_RawDevice_WM_SYSKEYUP 261L
/*
 * Class:     net_java_games_input_RawDevice
 * Method:    nGetName
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_net_java_games_input_RawDevice_nGetName
  (JNIEnv *, jclass, jlong);

/*
 * Class:     net_java_games_input_RawDevice
 * Method:    nGetInfo
 * Signature: (Lnet/java/games/input/RawDevice;J)Lnet/java/games/input/RawDeviceInfo;
 */
JNIEXPORT jobject JNICALL Java_net_java_games_input_RawDevice_nGetInfo
  (JNIEnv *, jclass, jobject, jlong);

#ifdef __cplusplus
}
#endif
#endif

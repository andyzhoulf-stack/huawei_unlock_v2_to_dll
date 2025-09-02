#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>

#ifdef _WIN32
#  ifdef __cplusplus
#    define DLL_EXPORT extern "C" __declspec(dllexport)
#  else
#    define DLL_EXPORT __declspec(dllexport)
#  endif
#else
#  ifdef __cplusplus
#    define DLL_EXPORT extern "C"
#  else
#    define DLL_EXPORT
#  endif
#endif

// rotr32一般做内部工具函数，不导出；如果你需要导出，则加DLL_EXPORT
// uint32_t rotr32(uint32_t value, unsigned int count);
uint32_t rotr32(uint32_t value, unsigned int count); // 内部函数，不导出

DLL_EXPORT int calc201(char* imei, char* resbuf);
DLL_EXPORT int calc2(char* imei, char* resbuf);
DLL_EXPORT void encrypt_1(char* imei, char* resbuf, int version);
DLL_EXPORT void encrypt_2(char* imei, char* resbuf, int version);
DLL_EXPORT void encrypt_3(char* imei, char* resbuf, int version);
DLL_EXPORT void encrypt_4(char* imei, char* resbuf, int version);
DLL_EXPORT void encrypt_5_v2(char* imei, char* resbuf);
DLL_EXPORT void encrypt_6(char* imei, char* resbuf, int mode);
DLL_EXPORT void encrypt_7(char* imei, char* resbuf, int version);
DLL_EXPORT void encrypt_v1(char* imei, char* resbuf, char* pass);

#endif // ENCRYPT_H

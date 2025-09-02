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

#ifdef __cplusplus
extern "C" {
#endif

uint32_t rotr32(uint32_t value, unsigned int count);

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

#ifdef __cplusplus
}
#endif

#endif // ENCRYPT_H

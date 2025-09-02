#ifndef ENCRYPT_H
#define ENCRYPT_H

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
DLL_EXPORT unsigned int rotr32(unsigned int val, int n);

#endif // ENCRYPT_H

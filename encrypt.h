#pragma once
#ifdef _WIN32
#define DLL_EXPORT extern "C" __declspec(dllexport)
#else
#define DLL_EXPORT extern "C"
#endif

DLL_EXPORT void encrypt_1(char* imei, char* resbuf, int version);

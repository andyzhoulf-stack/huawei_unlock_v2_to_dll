#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <cstring>
#include <cstdio> // 新增，支持 printf/sprintf
#include <cstdint> // 如果你用到了 uint32_t

#pragma once

#ifdef _WIN32
#define DLL_EXPORT extern "C" __declspec(dllexport)
#else
#define DLL_EXPORT extern "C"
#endif

// rotr32 实现
inline uint32_t rotr32(uint32_t value, unsigned int count) {
    return (value >> count) | (value << (32 - count));
}

DLL_EXPORT void encrypt_1(char* imei, char* resbuf, int version);

#endif // ENCRYPT_H

#ifndef ENCRYPT_H
#define ENCRYPT_H

#include <cstdint> // for uint32_t

#ifdef _WIN32
#define DLL_EXPORT __declspec(dllexport)
#else
#define DLL_EXPORT
#endif

#ifdef __cplusplus
extern "C" {
#endif

// 32位右旋工具
static inline uint32_t rotr32(uint32_t value, unsigned int count) {
    return (value >> count) | (value << (32 - count));
}

// 出口1：算e630upgrade版本的key
DLL_EXPORT void calc1_flash(const char* imei, char* outbuf);

// 出口2：算hwe620datacard版本的key
DLL_EXPORT void calc1(const char* imei, char* outbuf);

// 出口3：V2算法
DLL_EXPORT void calc2(const char* imei, char* outbuf);

// 出口4：V201算法
DLL_EXPORT void calc201(const char* imei, char* outbuf);

#ifdef __cplusplus
}
#endif

#endif // ENCRYPT_H

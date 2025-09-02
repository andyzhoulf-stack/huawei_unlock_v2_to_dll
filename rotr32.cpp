#include "encrypt.h"
#include <stdint.h>
// 不要再加extern "C"，头文件已经包裹了

uint32_t rotr32(uint32_t value, unsigned int count) {
    return (value >> count) | (value << (32 - count));
}

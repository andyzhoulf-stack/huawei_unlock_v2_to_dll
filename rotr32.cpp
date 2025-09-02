#include "encrypt.h"

uint32_t rotr32(uint32_t value, unsigned int count) {
    return (value >> count) | (value << (32 - count));
}

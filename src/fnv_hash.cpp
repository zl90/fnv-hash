// https://en.wikipedia.org/wiki/Fowler%E2%80%93Noll%E2%80%93Vo_hash_function

#include <string>
#include "fnv_hash.h"
#define FNV_OFFSET_BASIS_64 14695981039346656037
#define FNV_OFFSET_BASIS_32 2166136261
#define FNV_PRIME_64 1099511628211
#define FNV_PRIME_32 16777619

unsigned long long fnv1_64(std::string data)
{
    unsigned long long hash = FNV_OFFSET_BASIS_64;

    for (int i : data)
    {
        hash = hash * FNV_PRIME_64;
        hash = hash ^ i;
    }

    return hash;
}

unsigned int fnv1_32(std::string data)
{
    unsigned int hash = FNV_OFFSET_BASIS_32;

    for (int i : data)
    {
        hash = hash * FNV_PRIME_32;
        hash = hash ^ i;
    }

    return hash;
}

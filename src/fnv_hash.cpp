// https://en.wikipedia.org/wiki/Fowler%E2%80%93Noll%E2%80%93Vo_hash_function

#include <string>
#include "fnv_hash.h"
#include "test_utils.h"

#define FNV_OFFSET_BASIS 14695981039346656037
#define FNV_PRIME 1099511628211

unsigned long long fnvHash(std::string data)
{
    unsigned long long hash = FNV_OFFSET_BASIS;

    for (int i : data)
    {
        hash = hash * FNV_PRIME;
        hash = hash ^ i;
    }

    return hash;
}

void runTests()
{
    expect("test1", fnvHash("hello"), 8883723591023973575);
    expect("test2", fnvHash("world"), 4521841679625769999);
}

int main()
{
    runTests();

    return 0;
}
#include "fnv_hash.h"
#include "test_utils.h"

void runTests()
{
    expect("test1", fnv1_64("hello"), 0x7b495389bdbdd4c7);
    expect("test2", fnv1_64("world"), 0x3ec0cf0cc4a6540f);
    expect("test3", fnv1_32("hello"), 0xb6fa7167);
    expect("test4", fnv1_32("world"), 0x9b8e862f);
}

int main()
{
    runTests();

    return 0;
}

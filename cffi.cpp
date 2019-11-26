#include "cffi.h"
#define MAXSIZE 210
#include <unistd.h>

int32_t get_ncpu()
{
    return sysconf(_SC_NPROCESSORS_ONLN);
}

int main(int argc, char* argv[])
{
    printf("%d\n", get_ncpu());
    return 0;
}
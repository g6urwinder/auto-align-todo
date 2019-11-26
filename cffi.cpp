#include "cffi.h"
#define MAXSIZE 210
#include <unistd.h>

int32_t get_ncpu()
{
    return sysconf(_SC_NPROCESSORS_ONLN);
}

void std_sth()
{
    int i;
    printf("SHIT!!!!\n");
    scanf("%d\n", &i);
}

int32_t get_prompt()
{
    int i = 10;
    std_sth();
    return i;
}

int main(int argc, char* argv[])
{
    printf("%d\n", get_ncpu());
    return 0;
}
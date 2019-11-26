#include <stdint.h>
#include <stddef.h>
#include <stdio.h>
#include <sys/sysctl.h>
#ifndef __CFFI_H__
#define __CFFI_H__ "cffi.h"

#ifdef __cplusplus
extern "C" {
#endif
    int32_t get_ncpu();
#ifdef __cplusplus
}
#endif
#endif
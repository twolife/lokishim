#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define UNUSED __attribute__((__unused__))

void *__builtin_new(size_t size)
{
    return malloc(size);
}

void __builtin_delete(void *ptr)
{
    free(ptr);
}

void *__builtin_vec_new(size_t size)
{
    return malloc(size);
}

void __builtin_vec_delete(void *ptr)
{
    free(ptr);
}

void *set_new_handler__FPFv_v(UNUSED void *f)
{
    return 0;
}

/* Placement new */
void *__nw__FUiPv(UNUSED int size, void *p)
{
    return p;
}

/* CivCTP : make strcpy() work with overlapping inputs */
char *strcpy(char *dest, const char *src)
{
    size_t len = strlen(src);
    char *ret = memmove(dest, src, len+1);
    return ret;
}

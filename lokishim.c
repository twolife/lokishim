#define _GNU_SOURCE

#include <stdio.h>
#include <stdlib.h>

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

void *set_new_handler__FPFv_v(void *f)
{
    return 0;
}

/* Placement new */
void *__nw__FUiPv(int size, void *p)
{
    return p;
}

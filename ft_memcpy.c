#include<stdlib.h>
#include "my_libf.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    size_t i;
    i = 0;
    unsigned char *deet;
    const unsigned char *sr;

    deet = dest;
    sr = src;

    while ( i < n)
    {
        deet[i] = sr[i];
        i++;
    }
    return dest;
}
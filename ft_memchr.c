#include<stdlib.h>
#include "my_libf.h"

void *ft_memchr(const void *b, int c, size_t len)
{
    size_t i;
    i = 0;

    while (i < len)
    {
        if(((unsigned char *)b)[i] == c)
            return ((unsigned char *)b + i);
        i++;
    }
    return(NULL);

}


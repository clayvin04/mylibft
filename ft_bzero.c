#include "my_libf.h"



void ft_bzero(void *s, size_t n)
{
    size_t i;
    unsigned char *str;
    str = s;

    i = 0;

    while (i< n)
    {
        *(str + i) = 0;
        i++;
    }
    

}
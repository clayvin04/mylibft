
#include "my_libf.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t len_d;
    size_t len_s;
    size_t i;
    size_t len_size;


    len_s = 0;
    while (src[len_s])
    {
        len_s++;

    }

    len_d = 0;
    while (dst[len_d] && len_d < size)
    {
        len_d++;

    
    }
    if(len_d >= size)
        return(len_s + size);

    len_size = size - len_d - 1; 
    i = 0; 
    while (src[i] && i< len_size)
    {
        dst[len_d + i] = src[i];
        i++;
        
        
    }
    dst[len_d + i] = '\0';

    return(len_d + len_s);
    
    



}
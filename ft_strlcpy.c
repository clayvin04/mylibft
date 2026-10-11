
#include "my_libf.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;

    i = 0;

    while (src[i])
    {
        i++;
    }
    
    
    j = 0;

    if(size > 0)
    {
        while (j < size -1 && src[j])
        {
            dst[j] = src[j];
            j++;
        }
        
    }
    return i;
    

}

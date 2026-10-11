
#include "my_libf.h"

char	*ft_strnstr(const char *stack, const char *need, size_t len)
{
    size_t i;
    size_t j;
    i = 0;

    if(need[0] == '\0')
        return((char *) stack);

    while (i < len && stack[i])
    {
        j = 0;
        while (need[j] && i + j < len && stack[ i + j] == need[j])
        {
            j++;
        }
        if(need[j] == '\0')
            return((char *)(stack + i));
        i++;
    }
    return(NULL);
    
}
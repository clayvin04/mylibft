
#include "my_libf.h"

char *ft_strrchr(const char *s, int c)
{
    int i;
    int j;
   

    i = 0;
    j = 0;

    while (s[i])
    {
        
        if(*(s + i) == c)
        {
            j = i;
        }
        i++;

    }

    if(*(s + j) == c)
        return ((char *)(s + j));
    if(c == '\0' )
        return((char *) (s + i));
    return NULL;
    
}
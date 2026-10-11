
#include "my_libf.h"

char *ft_substr(char const *s, unsigned int start,size_t len)
{
    size_t i;
    char *result;
    i = 0;
    result = malloc(len + 1);
    if(result == NULL)
        return NULL;
    while (i < len && s[start])
    {
        result[i] = s[start];
        i++;
        start ++;
        
    }
    result[i] = '\0';
    return(result);
    


}
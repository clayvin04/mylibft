
#include "my_libf.h"

static char *ft_strcat(char *dest, const char *src)   
{
    int i;
    int n;
    i = 0;
    while (dest[i])
    {
        i++;
    }
    n = 0;
    while (src[n])
    {
        dest[i + n] = src[n];
        n++;
        
    }
    dest[i + n] = '\0';
    return (dest);


    

}

char *ft_strjoin(char const *s1, char const *s2)
{
    size_t len_s1;
    size_t len_s2;
    size_t total;
    char *result;

    len_s1 = 0;
    while (s1[len_s1])
    {
        len_s1++;
    }
    
    len_s2 = 0;
    while (s2[len_s2])
    {
        len_s2++;
    }

    total = len_s1 + len_s2 +1;
    
    result = malloc(total);
    if( result == NULL)
        return NULL;
    size_t i;
    i = 0;

    while (i <= len_s1)
    {
        result[i] = s1[i];
        i++;
    }

    ft_strcat(result,s2);

    return(result);
    
}

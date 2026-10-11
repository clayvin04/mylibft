
#include "my_libf.h"


void *ft_calloc(size_t nmemb, size_t size)
{
    size_t total;
    char *result;
    size_t i;

    //overflow

    if(nmemb != 0 && size > (size_t)-1 / nmemb )
        return NULL;

    total = nmemb * size;
    result = malloc(total);
    if(result == NULL)
        return NULL;
    i = 0;
    while(i < total)
    {
        result[i] = 0;
        i++;
    }
    return(result);
        


}



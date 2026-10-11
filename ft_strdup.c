
#include "my_libf.h"



char *ft_strcpy(char *destination, const char *source)
{
    size_t i;
    i = 0;
    while (source[i])
    {
        destination[i] = source[i];
        i++;
    }
    destination[i] = '\0';
    return(destination);

}

char *ft_strdup(const char *str)
{
    size_t len;
    char *result;
    len = 0;
    // we can use strlen here if want
    while (*(str + len))
    {
        len++;
    }
    result = malloc(len +1);
    if(result == NULL)
        return NULL;
    ft_strcpy(result,str);
    return(result);
}



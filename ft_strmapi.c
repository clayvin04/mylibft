
#include "my_libf.h"

// and we can use typedef

//typedef char (*t_func)(unsigned int, char);

/*
** Example function that will be passed to ft_strmapi.
** It converts lowercase letters to uppercase.
*/


/*
** t_func = pointer to a function that:
** - receives an unsigned int
** - receives a char
** - returns a char
*/



char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    size_t i ;
    char *res;
    size_t len;
    
    i = 0;
    len = 0;
    
    if (s == NULL || f == NULL)
        return (NULL);

    while (s[len])
    {
        len++;
    }
    
    if(!(res = malloc(len + 1)))
        return NULL;
    while (s[i])
    {
        res[i] = f(i,s[i]);
        i++;
        
    }
    res[i] = '\0';
    return(res);
}


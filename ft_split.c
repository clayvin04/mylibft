
#include "my_libf.h"


static size_t ft_countwords(char const *str, char c)
{

    size_t i;
    size_t count;

    count = 0;
    i = 0;
    while (str[i])
    {
        while(str[i] && str[i] == c)
            i++;
        
        if(str[i])
            count++;
        
        while (str[i] && str[i] != c)
        {
            i++;
        }
        
    }
    return count;
    


}




char **ft_split(char const *s, char c)
{

    char **result;
    size_t i;
    size_t j;
    size_t start;
    size_t len;

    result = malloc(sizeof(char *)* (ft_countwords(s,c) + 1));
    if(result == NULL)
        return (NULL);
    i = 0;
    j = 0;
    while (s[i])
    {
        while(s[i] && s[i] == c)
        {
            i++;

        }
        if(!s[i])
            break;
        
        start = i;
        len = 0;
        while (s[i] && s[i] != c)
        {
            i++;
            len++;
        }

        
        result[j] = ft_substr(s,start,len);
        if(result[j] == NULL)
            return(NULL);
        
        j++;    
    }
    result[j] = NULL;
    return(result);    

}

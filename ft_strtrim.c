
#include "my_libf.h"

char *ft_strtrim(char const *s1, char const *set)
{

    size_t start;
    size_t end;
    size_t i;
    size_t j;
    char *result;


    // finde start

    start = 0;
    while (s1[start])
    {
        j = 0;
        while (set[j] && s1[start] != set[j])
        {
            j++;
        }
        if(set[j] == '\0')
            break;
        start++;
    }

    end = 0;
    while (s1[end])
    {
        end++;
    }

    while(end > start)
    {
        j = 0;
        while (set[j] && s1[end -1] != set[j])
        {
            j++;
        }
        if(set[j] == '\0')
            break;
        end--;
    }

    result = malloc((end - start) +1);
    if(result == NULL)
        return (NULL);

    i = 0;
    while (start < end)
    {
        result[i] = s1[start];
        i++;
        start++;
    }
    result[i] = '\0';
    return(result);
        
}
#include "my_libf.h"


int ft_atoi(const char *str)
{
    int i;
    int sing;
    int result;

    sing = 1;

    i = 0;
    while ((str[i] >= 9 && str[i] <= 13) || str[i] ==  32)
    {
        i++;
    }
    
    if(str[i] == '-')
    {
        sing *= -1;
        i++;
    }

    result = 0;

    while (str[i] >= '0' && str[i] <= '9')
    {
        result = result * 10 + (str[i] - '0');
        i++; 
    }
    return(result * sing);

}


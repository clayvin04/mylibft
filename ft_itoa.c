
#include "my_libf.h"


static size_t ft_nblen(int nb)
{
    size_t len; 
    len = 0;
    if(nb < 0)
        len++;
    if(nb == 0)
        return (1);
    
    while (nb != 0)
    {
        len++;
        nb = nb /10;
        
    }
    return(len);
    
}


char *ft_itoa(int n) 
{

    char *res;
    long nb;
    int len;
    

    nb = n;
    len  = ft_nblen(n);

    res = malloc( len + 1);
    if(res == NULL)
        return NULL;
    
    if(nb < 0)
    {
        res[0] = '-';
        nb = -nb;    
    }

    if(nb == 0 )
    {
        res[0] = '0';
        
    }
    res[len--] = '\0';

    while (nb)
    {
        res[len] = nb % 10 + '0';
        len--;
        nb = nb / 10 ;
    }
    
    return(res);
    
}


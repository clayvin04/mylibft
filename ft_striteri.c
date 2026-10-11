
#include "my_libf.h"

void ft_striteri(char *s, void (*f)(unsigned int,char*))
{
    int i;

    i = 0;

    while (s[i])
    {
        f(i,&s[i]);
        i++;
    }
    

}

void ft_edit(unsigned int i, char *str)
{
    (void)i;
   
    *str = *str + 1;

    
}

#include "my_libf.h"

void ft_putnbr_fd(int n, int fd)
{
    long nb;
    char c;
    nb = n;

    if(nb < 0)
    {
        nb = -nb;
        write(fd,"-",1);

    }

    if (nb > 9)
    {
        ft_putnbr_fd(nb / 10,fd);        
    }
    c = (nb % 10) + '0';
    write(fd,&c,1);

    
}

#include "my_libf.h"


void *memmove(void *dest, const void *src, size_t n)
{
    size_t i;
  
    i = 0;
    unsigned char *deet;
    const unsigned char *sr;

    deet = dest;
    sr = src;

    if(deet > sr)
    {
        i = n;
        while (i > 0)
        {
            i--;
            deet[i] = sr[i];
        }
    }
    else
    {
        i = 0;
        while ( i< n)
        {
            deet[i] = sr[i];
            i++;
        }
        
    }
    return dest;


   
}
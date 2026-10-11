
#include "my_libf.h"

size_t strlen(const char *s)
{
    size_t n;
    n = 0;
    while (s[n])
    {
        n++;
    }
    return (n);
    


}
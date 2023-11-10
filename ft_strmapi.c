#include "libft.h"
char f(unsigned int i, char c)
{
    if(c >= 'a' && c <= 'z')
    {
        if(i % 2 == 0)
            return (c - 32);
        else 
            return (c);
    }
    else
        return (c);
}


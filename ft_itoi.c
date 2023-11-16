#include "libft.h"

int length(long n)
{
    int i;

    i = 0;
    if(n < 0)
    {
        i++;
        n =-n;
    }
    while(n > 0)
    {
        n = n / 10;
        i++;
    }
    return i;
}
char *rslt(char *r)
{
    r[0] = '0';
    return (r);
}
int signe(int n)
{
    if(n < 0)
        return (1);
    else
        return (0);
}
char *ft_itoa(int n)
{
    int len;
    long long nbr;
    char *r;
    int i;

    len = length(n);
    nbr = (long long)n;
    i = signe(n);
    r = malloc(sizeof(char) * (len + 1));
    if(!r)
        return (NULL);
    r[len] = 0;
    if(nbr == 0)
        return (rslt(r));
    if(nbr < 0)
    {
        nbr = -nbr;
        r[0] = '-';
    }

    while(i < len)
    {
        r[--len] = (nbr % 10) + '0';
        nbr/= 10;
    }
    return (r);
}

// int main()
// {
//     int n2 = INT_MAX;
// 	// printf("lengh: %d\n", length(n2));
// 	// printf("send: %d\n", n2);
// 	// // -2147483647 
//     char *str2 = ft_itoa(0);
//     printf("%s\n", str2);
//     free(str2);
//     return 0;
// };
#include<stdlib.h>

int lenght(int n)
{
	int i;

	i = 0;
	while(n > 0)
	{
		n = n / 10;
		i++;
	}
	return i;
}
char *ft_itoa(int n)
{
	int character;
	int sg;
	char *str;
	int i;

	character = 0;
	sg = 1;
	i = 0;

	if(n < 0)
	{
		character++;
		sg = sg * -1;
	}
	character = lenght(n);
	if(!(str = malloc(sizeof(char) * (character + 1))))
		return NULL;
	if(sg < 0)
	{
		str[i] = '-';
		i++;
	}
	while(i < character)
	{
		str[i] = n % 10 + '0';
		n = n / 10;
		i++;
	}
	str[i] = '\0';
	return str;
}

// #include <stdio.h>

// int main()
// {
//     int n1 = 123;
//     int n2 = -456;
//     int n3 = 0;

//     char *str1 = ft_itoa(n1);
//     char *str2 = ft_itoa(n2);
//     char *str3 = ft_itoa(n3);

//     printf("%d -> %s\n", n1, str1);
//     printf("%d -> %s\n", n2, str2);
//     printf("%d -> %s\n", n3, str3);

//     free(str1);
//     free(str2);
//     free(str3);

//     return 0;
// }
	

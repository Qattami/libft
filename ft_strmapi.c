/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 11:57:57 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/11 11:58:00 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char *r;

    i = ft_strlen((char *)s);
    r = malloc(sizeof(char) * i + 1);
    if(!r)
        return (NULL); 
    i = 0;
    while(s[i])
    {
        r[i] = f(i,s[i]);
        i++;
    }
    r[i] = 0;
    return (r);
}

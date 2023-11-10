/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:50:51 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/10 21:50:24 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char *ft_strcat(char *m,char *n)
{
	int l;
	int i;

	l = ft_strlen(m);
	i = 0;
	while(n[i])
	{
		m[l+i] = n[i];
		i++;
	}
	m[l+i]= 0;
	return (m);
}
char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s;
	char	*m;

	s = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	m = malloc(sizeof(char) * (s + 1));
	if (m == NULL)
		return (NULL);
	m = ft_strcat(m, (char *)s1);
	m = ft_strcat(m, (char *)s2);
	return (m);
}

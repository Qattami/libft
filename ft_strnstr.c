/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 16:15:00 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/12 16:31:28 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"
char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	if(*s2 == '\0')
		return ((char*) s1);
	if ( n == 0)
		return (0);
		
	while (s1[i] && i < n)
	{
		j = 0;
		if (s1[i] == s2[j])
		{
			while (s1[i + j] && s2[j] && s1[i + j] == s2[j] && n > j)
				j++;
			if (s2[j] || n == j)
				return ((char *)s1 + i);
		}
		i++;
	}
	return (NULL);
}

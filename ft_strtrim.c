/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:32:36 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/07 17:27:23 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	l;
	int	i;

	l = 0;
	while (s1[l] && ft_strchr(set, s1[l]))
		l++;
	s1 += l;
	i = ft_strlen((char *)s1) + 1;
	while (i > 0 && ft_strchr(set, s1[i]))
		i--;
	s1 = ft_substr(s1, 0, i + 1);
	return ((char *)s1);
}

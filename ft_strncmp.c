/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:21:43 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/09 17:57:05 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if(n == 0)
		return (0);
	if(!s1)
		return(-1);
	else if(!s2)
		return(1);
	while (s1[i] && s2[i] && n - 1 > i && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

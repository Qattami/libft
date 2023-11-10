/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 20:58:59 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/05 16:51:46 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t size)
{
	unsigned char	*s1;

	s1 = (unsigned char *)s;
	while (size > 0)
	{
		*s1 = 0;
		s1++;
		size--;
	}
}

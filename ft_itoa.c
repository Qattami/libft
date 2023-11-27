/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 18:54:07 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/23 17:44:30 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(long n)
{
	int	i;

	i = 0;
	if (n == 0)
		i++;
	if (n < 0)
	{
		i++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

static int	signe(int n)
{
	if (n < 0)
		return (1);
	else
		return (0);
}

char	*ft_itoa(int n)
{
	int			len;
	long long	nbr;
	char		*r;
	int			i;

	len = length(n);
	nbr = (long long)n;
	i = signe(n);
	r = malloc(sizeof(char) * (len + 1));
	if (!r)
		return (NULL);
	r[len] = '\0';
	if (nbr < 0)
	{
		nbr = -nbr;
		r[0] = '-';
	}
	while (i < len)
	{
		r[--len] = (nbr % 10) + '0';
		nbr /= 10;
	}
	return (r);
}

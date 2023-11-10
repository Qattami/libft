/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:58:31 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/05 18:22:34 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int		i;
	char	tab[20];
	int		digit;

	if (n == 0)
		write(fd, "0", 1);
	if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
	}
	i = 0;
	while (n > 0)
	{
		digit = n % 10;
		tab[i] = digit + '0';
		i++;
		n = n / 10;
	}
	while (i > 0)
	{
		i--;
		write(fd, &tab[i], 1);
	}
}

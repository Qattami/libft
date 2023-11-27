/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:14:13 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/10 20:17:06 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*tab;

	if (size && nitems > SIZE_MAX / size)
		return (NULL);
	tab = malloc(size * nitems);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, size * nitems);
	return (tab);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:50:28 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/05 16:08:26 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	c;

	src_len = ft_strlen((char *)src);
	dest_len = ft_strlen(dest);
	if (size < dest_len)
		return (dest_len + src_len);
	c = dest_len;
	while (size > 0 && *src != '\0')
	{
		dest[c] = *src;
		src++;
		c++;
		size--;
	}
	dest[c] = '\0';
	return (dest_len + src_len);
}

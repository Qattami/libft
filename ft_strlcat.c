/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 23:50:28 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/12 15:48:24 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	src_len;
	size_t	dest_len;
	size_t	av_spce;
	size_t	left_space;
	
	src_len = ft_strlen((char *)src);
	dest_len = ft_strlen(dest);
	if(size == 0)
		return (src_len);
	if (size <= dest_len)
		return (size + src_len);
	left_space = size - dest_len - 1;
	if(src_len < left_space)
		av_spce = src_len;
	else
		av_spce = left_space;
	ft_memcpy(dest + dest_len, src ,av_spce);
	dest[dest_len + av_spce] = '\0';
	return (dest_len + src_len);
}

// size_t strlcat(char *dest, const char *src, size_t size) {
//     size_t dest_len = ft_strlen(dest);
//     size_t src_len = ft_strlen(src);

//     if (size <= dest_len) {
//         return dest_len + src_len; // Not enough space, return total length
//     }

//     size_t space_left = size - dest_len - 1; // Reserve space for null terminator
//     size_t copied_chars = src_len < space_left ? src_len : space_left;

//     ft_memcpy(dest + dest_len, src, copied_chars);
//     dest[dest_len + copied_chars] = '\0'; // Null-terminate the result

//     return dest_len + src_len; // Total length of the concatenated string
// }


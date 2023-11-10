/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 21:47:11 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/10 04:00:49 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t src_len = 0;
    
    while (src_len < size && src[src_len] != '\0') {
        dest[src_len] = src[src_len];
        src_len++;
    }

    if (src_len < size) {
        dest[src_len] = '\0';
    } else if (size > 0) {
        dest[size - 1] = '\0';
    }

    while (src[src_len] != '\0') {
        src_len++;
    }
	return (src_len);
}

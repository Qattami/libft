/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 20:17:52 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/09 20:21:05 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <string.h>
#include <stdio.h>    // For printf function

int iTest = 1;

int main(void) {
    
    char src[] = "coucou";
    char dest[10];
    memset(dest, 'A', 10);

    size_t result = ft_strlcpy(dest, src, 1);
    int checkResult = (result == strlen(src) && dest[0] == 0 && dest[1] == 'A');

    if (checkResult) {
        printf("Test passed\n");
    } else {
        printf("Test failed\n");
    }
    return 0;
}


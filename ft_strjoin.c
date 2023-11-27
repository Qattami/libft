/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 08:50:51 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/20 10:26:11 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_copy(char *m, char const *s1, char const *s2)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i])
	{
		m[i] = s1[i];
		i++;
	}
	while (s2[j])
		m[i++] = s2[j++];
	m[i] = '\0';
	return (m);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		s;
	char	*m;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	m = malloc(sizeof(char) * s);
	if (m == NULL)
		return (NULL);
	m = ft_copy(m, s1, s2);
	return (m);
}
// int main ()
// {
// 	char *s1 = "my favorite animal is";
//  	char *s2 = " ";
//  	char *s3 = "the nyancat";
//  	char *tmp = ft_strjoin(s1, s2);
//  	char *res = ft_strjoin(tmp, s3);

// 	printf("%s", tmp);
// }
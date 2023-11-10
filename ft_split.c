/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 21:54:35 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/08 23:15:35 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	check_separator(char c, char s)
{
	if (s == c)
		return (1);
	return (0);
}

int	count_word(char const *str, char charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && check_separator(str[i], charset))
			i++;
		if (str[i])
			count++;
		while (str[i] && !check_separator(str[i], charset))
			i++;
	}
	return (count);
}

char	*malloc_word(char const *str, int i, char charset)
{
	int		j;
	char	*tab;
	int		len;

	len = 0;
	j = i;
	while (str[j] && !check_separator(str[j], charset))
	{
		j++;
		len++;
	}
	tab = malloc(sizeof(char) * (len + 1));
	if (!tab)
		return (NULL);
	j = 0;
	while (j < len)
	{
		tab[j] = str[i];
		i++;
		j++;
	}
	tab[j] = '\0';
	return (tab);
}

char	**ft_split(char const *str, char charset)
{
	char	**tab;
	int		i;
	int		j;

	i = 0;
	j = 0;
	tab = (char **)malloc(sizeof(char *) * (count_word(str, charset) + 1));
	if (!tab)
		return (NULL);
	while (str[i])
	{
		while (str[i] && check_separator(str[i], charset))
			i++;
		if (str[i])
		{
			tab[j] = malloc_word(str, i, charset);
			j++;
		}
		while (str[i] && !check_separator(str[i], charset))
			i++;
	}
	tab[j] = 0;
	return (tab);
}

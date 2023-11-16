/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:26:46 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/16 05:10:54 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
t_list	*ft_lstnew(void *content)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (node == NULL)
		return (NULL);
	node->content = content;
	node->next = NULL;
	return (node);
}
// int main()
// {
// 	int *c = malloc(sizeof(int));
// 	*c = 42;
// 	t_list *node;
// 	node = ft_lstnew(c);
// 	printf("%d",*((int*)node->content));
// 	free(c);
// 	printf("%d",*((int*)node->content));

// 	return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 21:24:51 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/21 09:27:16 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst && *lst && del)
	{
		tmp = *lst;
		while (*lst)
		{
			tmp = tmp->next;
			ft_lstdelone(*lst, del);
			*lst = tmp;
		}
	}
}
// void	free_node(void *ptr)
// {
// 	t_list	*tmp;

// 	tmp = (t_list *)ptr;
// 	free(tmp->content);
// 	free(tmp);
// }

// int main(void)
// {
//     const char *table1[] = {"1","2","3","4","5"};
//     t_list *l = ft_lstnew(ft_strdup(table1[0]));
//     t_list *tmp;
//     for(int i = 1; i < (sizeof(table1) / sizeof(*table1)); i++)
//     {

//         ft_lstadd_back(&l, ft_lstnew(ft_strdup(table1[i])));
//         tmp = ft_lstlast(l);
//         printf("%s \n",(char*)tmp->content);
//     }

//     ft_lstclear(&l, &free_node);
//     return (0);
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:38:18 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/18 03:24:49 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// void print_list(t_list *lst)
// {
//     while (lst != NULL)
//     {
//         printf("%d -> ", *((int *)(lst->content)));
//         lst = lst->next;
//     }
//     printf("NULL\n");
// }
// void del(void *content)
// {
// #if 0
//     free(((int *)(((t_list *)node)->content)));
// #else
//     free((content));
// #endif
// }
void ft_lstdelone(t_list *lst, void (*del)(void *))
{
    if (lst && del)
    {
        del(lst->content);
        free(lst);
    }
}

// int main()
// {
//     int *c = malloc(sizeof(int));

//     *c = 42;
//     t_list *node;
//     node = ft_lstnew(c);
//     print_list(node);
//     ft_lstdelone(node, &del);
//     // print_list(node);
// }
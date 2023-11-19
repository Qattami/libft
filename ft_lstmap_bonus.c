/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 23:07:27 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/19 00:56:08 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
// {
//     t_list *head;
//     t_list *node;

//     if (!lst || (!f) || (!del))
//         retrun(NULL);
//     head = NULL;
//     while (lst)
//     {
//         node = ft_lstnew((f(lst->content)));
//         ft_lstadd_front(head, node);
//         lst = lst->next;
//     }

//     return (head);
// }

int main()
{
    t_list *list;
    char *hada[] = {"1", "2", "3", "4", "5", "6", NULL};
    // list = ft_lstnew(hada[0]);
    for (int i = 0; i < 6; i++)
    {
        printf("%s ", hada[i]);
        // printf("%s ", *=((hada + i) *sizeof(char*)));
    }
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqattami <iqattami@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/18 06:43:26 by iqattami          #+#    #+#             */
/*   Updated: 2023/11/18 22:44:32 by iqattami         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdbool.h>

// void f(void *content)
// {
//     int *str = (int *)content;
//     (*str)++;
// }
void ft_lstiter(t_list *lst, void (*f)(void *))
{
    while (lst && f)
    {
        f(lst->content);
        lst = lst->next;
    }
}
// void addOne(void *p)
// {
//     int *ptr = (int *)p;
//     ++(*ptr);
// }

// void check(bool succes)
// {
// 	if (succes)
// 		printf("OK\n");
// 	else
//         printf("KO\n");
// }

// int main(void)
// {
//     int tab[] = {0, 1, 2, 3};
//     t_list *l = ft_lstnew(tab);
//     for (int i = 1; i < 4; ++i)
//         ft_lstadd_back(&l, ft_lstnew(tab + i));
//     ft_lstiter(l, addOne);
//     t_list *tmp = l;
//     for (int i = 0; i < 4; ++i)
//     {
//         // check(*(int *)tmp->content == i + 1);
//         check(*(int*)tmp->content == i + 1);
//         tmp = (t_list *)tmp->next;
//     }
//     return (0);
// }
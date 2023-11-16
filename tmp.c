#include "libft.h"

void print_list(t_list *lst)
{
    while (lst != NULL)
    {
        printf("%d -> ", *((int *)lst->content));
        lst = lst->next;
    }
    printf("NULL\n");
}

int main()
{
	t_list *node1= malloc(sizeof(t_list));
	
	int *c = malloc(sizeof(int));
	*c = 42;
	node1 = ft_lstnew(c);
	t_list *node2= malloc(sizeof(t_list));
		int *c2 = malloc(sizeof(int));
	*c2 = 43;
	node2 = ft_lstnew(c2);
	
	t_list *node3= malloc(sizeof(t_list));
		int *c3 = malloc(sizeof(int));
	*c3 = 44;
	node3 = ft_lstnew(c3);
	
	t_list *head = 	NULL;

	ft_lstadd_front(&head,node1);
	print_list(head);
	ft_lstadd_front(&head,node2);
	print_list(head);
	ft_lstadd_front(&head,node3);
	print_list(head);
	
	return 0;
}
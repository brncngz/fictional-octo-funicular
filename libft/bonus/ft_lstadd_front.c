

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}

/*
int	main(void)
{
	t_list **linked_list;
	char *cont1 = "hello!";
	char *cont2 = "cool";

	linked_list = (t_list **)calloc(5, sizeof(t_list *));
	linked_list[0] = ft_lstnew(cont1);
	linked_list[1] = ft_lstnew(cont2);

	printf("Content 1 is: %s\n", linked_list[0]->content);
	printf("Content 2 is: %s\n", linked_list[1]->content);
}
*/

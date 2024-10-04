#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if(*lst == NULL)
		*lst = new;
	t_list *tmp = *lst;
	while (tmp->next)
		tmp=tmp->next;
	tmp->next =new; 
}

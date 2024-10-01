#include "libft.h"

t_list  *ft_lstnew(void *content)
{
	t_list *x;
	x = (t_list*)malloc(sizeof(t_list));
	if (!x)
		return 0;
	x->content = content;
	x -> next = NULL;
	return x;
}
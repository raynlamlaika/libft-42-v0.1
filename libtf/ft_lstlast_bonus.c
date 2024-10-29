/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 09:17:31 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/29 10:58:41 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
// void add(t_list **list,t_list *new)
// {
// 	if(!list)
// 		return ;
// 	new->next = *list ;
// 	*list  = new;
// }
// int main()
// {
// 	t_list *ppp = (t_list *)  malloc (sizeof(t_list));
// 	ppp->content = "allo allo";
// 	ppp->next =  NULL;
// 	t_list *vvvv = (t_list *)  malloc (sizeof(t_list));
// 	vvvv->content =" expectation";
// 	vvvv->next =  NULL;
// 	add(&vvvv,ppp);
// 	t_list* tmp = ft_lstlast(vvvv);
// 	printf("%s",(char*)tmp->content);
// }
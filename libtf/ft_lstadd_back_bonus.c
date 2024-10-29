/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 11:02:38 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/29 14:28:25 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*p;

	if (!lst || !new)
		return ;
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	p = *lst;
	while (p->next)
		p = p->next;
	p->next = new;
}
// #include <stdio.h>
// int main ()
// {
// 	t_list *first;
// 	first = (t_list *) malloc (sizeof (t_list));
// 	first->content =  "okey okey";
// 	first->next = NULL;
// 	t_list *sec = (t_list *) malloc(sizeof(t_list));
// 	sec->content = "akl";
// 	sec->next = NULL;
// 	ft_lstadd_back(&first,sec);
// 	t_list *cc = (t_list *) malloc(sizeof(t_list));
// 	cc->content = "rr";
// 	cc->next = NULL;
// 	ft_lstadd_back(&first,cc);
// 	t_list *ee = first;
// 	int i = 0;
// 	while (ee)
// 	{   
// 		printf("%s    ",(char *)ee->content);
// 		ee = ee->next;
// 		i++;
// 		printf("%d   ",i);
// 		if(i>9)
// 			break;
// 	}
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone_bonus.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:30:58 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/29 16:58:56 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return;
	del(lst->content);
	//free(lst);
}
// void *de(void *pp)
// {
// 	if (pp)
// 		free(pp);
	
// }

// #include <stdio.h>
// int main()
// {
// 	t_list	*p = (t_list *) malloc (sizeof(t_list));
// 	p->content = (char)malloc (sizeof(char) * 20);
// 	p->content = "allo bref";
// 	p->next = NULL;

// 	void *(*o)(void *)= de;
// 	ft_lstdelone(p->content,o);
// 	printf("%s",(char *)p->content);
// }
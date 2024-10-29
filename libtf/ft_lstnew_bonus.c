/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/27 15:43:50 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/28 14:29:43 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*p;

	p = (t_list *)malloc(sizeof(t_list));
	if (!p)
		return (0);
	p->content = content;
	p->next = NULL;
	return (p);
}

// #include <stdio.h>
// int main()
// {
//     char* j = "lqirg";
// 	t_list *p = ft_lstnew(j);
//     printf("%s",p->content);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 14:30:32 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/29 11:59:52 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	new->next = *lst;
	new = *lst;
}

// #include <stdio.h>
// int main()
// {
//     t_list *first;
//     first = (t_list *) malloc(sizeof(t_list));
//     if (!first)
//         return 0;
//     first->content = "first";
//     first->next = "lilii";
//     t_list *tania;
//     tania = (t_list *) malloc(sizeof(t_list));
//     if (!tania)
//         return 0;
//     tania->content = "the reall nober one ";
//     tania->next = "lest seee";
//     ft_lstadd_front(&first,tania);
//     t_list* tmp;
//     tmp = tania;
//     while (tmp)
//     {
//         printf("      %s",tmp->content);
//         tmp = tmp->next;
//     }
// }
// int main()
// {
//     t_list *n;
//     n = (t_list *) malloc(sizeof(t_list));
//     n->content = "let's see the first";
//     n->next = NULL;
//     t_list *new;
//     new = (t_list* ) malloc (sizeof(t_list));
//     new->content = "allo allo";
//     new->next =NULL;
//     ft_lstadd_front(&n,new);
//     int i = 0;
//     t_list *tmp = new;
//     while(tmp)
//     {
//         printf("%s",tmp->content);
//         tmp = tmp->next;
//         i++;
//         if (i == 12)
//             break;
//     }
// }
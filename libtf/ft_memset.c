/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 15:32:18 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/29 08:17:59 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	char	*st;
	size_t	i;

	st = (char *) str;
	i = 0;
	if (!str)
		return (0);
	while (i < n)
	{
		st[i] = c;
		i++;
	}
	return (st);
}
// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	int l ;
// 	int p ;
// 	// ft_memset(&p,255,4);
// 	// ft_memset(&p,248,2);
// 	// ft_memset(&p,43,1);

// 	ft_memset(&p,255,4);
// 	ft_memset(&p,250,2);
// 	ft_memset(&p,199,1);

// 	printf(" %d\n",p);
// }
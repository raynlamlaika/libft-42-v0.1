/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 14:15:04 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/27 22:42:43 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	i = size * count;
	p = malloc(i);
	if (!p)
		return (0);
	ft_bzero(p, i);
	return (p);
}

// int  main()
// {
//     char * p = ft_calloc(5000,16);
// }
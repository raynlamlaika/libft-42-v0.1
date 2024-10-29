/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 22:46:21 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/28 19:21:46 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		((unsigned char *)dest)[i] = ((const unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

// #include <stdio.h>
// #include<string.h>
// #include <stdio.h>
// #include <string.h>
// int main() {
// 	// char *p;// if (!dest || !src)// 	return (NULL);
// 	// char *i;
//     // ft_memcpy(p, i, 13); // Safe copy
//     // return 0;

// 	int i = 1337;
// 	int u= 2005;
// 	ft_memcpy(&i,&u,1);
// 	printf("%d",i);
// }
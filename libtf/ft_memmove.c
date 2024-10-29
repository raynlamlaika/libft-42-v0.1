/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 10:30:57 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/28 19:45:17 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t				i;
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dst;
	s = (const unsigned char *) src;
	i = 0;
	if (len == 0 || d == s)
		return (d);
	if (!s || !d)
		return (0);
	if (d > s)
		while (len--)
			d[len] = s[len];
	else
	{
		while (i < len)
		{
			d[i] = s[i];
			i++;
		}
	}
	return (dst);
}
// #include <stdio.h>
// #include <string.h>
// int main() 
// { 
//     char str[100] = "Learningisfun"; 

//     printf("Original string :%s\n ", str);   
//     ft_memmove(str, str + 8,5); 
//     printf("memmove overlap :%s\n ", str); 
//     return 0; 
// }

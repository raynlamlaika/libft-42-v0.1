/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:49:13 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/23 11:14:37 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t			i;
	unsigned char	*st;

	i = 0;
	st = (unsigned char *)str;
	while (i < n)
	{
		if (st[i] == (unsigned char) c)
			return ((void *)&st[i]);
		i++;
	}
	return (0);
}
/*



#include <stdio.h>
#include <string.h>
int main() {
   const char str1[] = "abcdef";
   const char ch = 'd';

   char* result = (char*)memchr(str1, ch, strlen(str1));

   if (result != NULL) {
	   printf("'%c' found at position %ld\n", ch, result - str1);
   } else {
	   printf("'%c' not found in the string\n", ch);
   }

   return 0;
}*/
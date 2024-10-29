/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:15:53 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/23 11:30:01 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*s;

	i = 0;
	p = (unsigned char *) str1;
	s = (unsigned char *) str2;
	while (i < n)
	{
		if (p[i] != s[i])
			return (p[i] - s[i]);
		i++;
	}
	return (0);
}
/*

#include <stdio.h>
#include <string.h>

int main () 
{
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str2, "abcdef", 6);
   memcpy(str1, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 5);

   if(ret > 0) {
	  printf("str2 is less than str1");
   } 
   else if(ret < 0) {
	  printf("str1 is less than str2");
   } 
   else {
	  printf("str1 is equal to str2");
   }
   return(0);
}*/
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 10:01:29 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/23 10:48:56 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t	i;

	i = 0;
	while (i < num && (str1[i] || str2[i]))
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
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
   strcpy(str1, "abcdef");
   strcpy(str2, "abcdEF");

   ret = ft_strncmp(str1, str2, 4);
   if(ret < 0) 
   {
      printf("str1 is less than str2");
   } 
   else if(ret > 0) 
   {
      printf("str2 is less than str1");
   } 
   else 
   {
      printf("str1 is equal to str2");
   }
   return(0);
} */
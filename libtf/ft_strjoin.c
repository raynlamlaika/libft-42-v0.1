/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 20:47:46 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/28 15:56:05 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*caa(char *s1, char *s2, char *ptr)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		ptr[i] = s1[i];
		i++;
	}
	while (*s2)
	{
		ptr[i] = *s2;
		i++;
		s2++;
	}
	ptr[i] = '\0';
	return (ptr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	char	*str2;
	int		i;
	int		o;
	char	*ptr;

	if (!s1 && !s2)
		return (0);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	str1 = (char *) s1;
	str2 = (char *) s2;
	i = ft_strlen(str1);
	o = ft_strlen(str2);
	ptr = (char *) malloc((i + o + 1) * sizeof(char));
	ptr = caa(str1, str2, ptr);
	if (!ptr)
		return (0);
	return (ptr);
}

// #include<stdio.h>
// #include <string.h>
// int main()
// {
// 	char* p;
// 	char* op = "";
// 	char* d  =  ft_strjoin(p,op);
// 	printf("%s",d);
// 	return 0;
// }
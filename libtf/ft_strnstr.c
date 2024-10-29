/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 11:31:08 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/29 17:08:14 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char *big, const char *little)
{
	size_t	i;

	i = 0;
	if (!big)
		return (0);
	if (!little)
		return (1);
	while (little[i] && big[i])
	{
		if (little[i] != big[i])
			return (0);
		i++;
	}
	if (!little[i])
		return (1);
	return (0);
}

char	*ft_strnstr(const char *bigg, const char *little, size_t len)
{
	size_t	i;
	char	*big;
	size_t	p;

	i = 0;
	p = ft_strlen(little);
	big = (char *) bigg;
	if (!*little)
		return ((char *)bigg);
	while (i + p <= len && big[i])
	{
		if (big[i] == little[0])
		{
			if (big[i] == little[0] && check(&big[i], little))
				return (&big[i]);
		}
		i++;
	}
	return (0);
}
// #include<stdio.h>
// int main()
// {
// 	char str[]= "rrayane ki9ra t f 1337 and this is my first year";
// 	char stri[]= "this";
// 	char *p = ft_strnstr(str,stri,100);
// 	puts(p);
// }
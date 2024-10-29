/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 13:55:20 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/27 22:53:42 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	seet(char c, const char*set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*alloc;

	end = ft_strlen(s1);
	start = 0;
	if (!s1 || !set)
		return (0);
	while (s1 && seet(s1[start], set))
		start++;
	while (end > start && seet(s1[end - 1], set))
		end--;
	alloc = (char *) malloc(sizeof(char) * (end - start + 1));
	if (!alloc)
		return (0);
	i = 0;
	while (start < end)
	{
		alloc[i] = s1[start];
		i++;
		start++;
	}
	alloc[i] = '\0';
	return (alloc);
}

// #include <stdio.h>
// #include <string.h>
// int main()
// {
// 	char p[]="...ryane is goone to..";
// 	char set[]="..";
// 	printf("%s",ft_strtrim(p,set));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 20:44:32 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/27 22:53:03 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	size_t			i;
	unsigned int	l;

	i = ft_strlen(s);
	p = (void *) malloc(sizeof(char ) * (i + 1));
	if (!p || !s)
		return (0);
	l = 0;
	while (l < i)
	{
		p[l] = f(l, s[l]);
		l++;
	}
	p[l] = '\0';
	return (p);
}

// #include <stdio.h>
// char f(unsigned int i, char c)
// {
// 	char str;
// 	str = c + 1;
// 	return (str);
// }
// int main()
// {
// 	char str1[] = "abc";
// 	char* str2;
// 	str2 = ft_strmapi(str1, f);
// 	printf("%s\n", str2);
// }
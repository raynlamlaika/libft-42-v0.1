/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 21:52:50 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/27 22:48:57 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	l;

	i = 0;
	l = ft_strlen(s);
	while (i < l)
	{
		f(i, &s[i]);
		i++;
	}
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
// 	ft_striteri(str1, f);
// 	printf("%s\n", str1);
// }
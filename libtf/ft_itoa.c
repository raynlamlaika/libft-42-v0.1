/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 12:46:29 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/28 16:12:06 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	looc(int n)
{
	int	i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		i += 1;
		n = - (1 + n);
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*p;
	size_t	i;
	long	o;

	i = looc(n);
	o = 0;
	p = (char *) malloc(sizeof(char) * (i + 1));
	if (!p)
		return (0);
	if (n == 0)
	{
		p[0] = '0';
		p[1] = '\0';
	}
	if (n < 0)
	{
		o = -n;
		p[0] = '-';
	}
	while (o > 0)
	{
		p[--i] = (o % 10) + '0';
		o /= 10;
	}
	return (p);
}

// #include <stdio.h>
// int main()
// {
// 	long long i = 1070767897 ;
// 	char *p = ft_itoa(i);
// 	printf("%s ",p);
// 	free(p);
// }
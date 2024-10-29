/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 22:00:50 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/28 20:33:31 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	pff(size_t str, char sing)
{
	if (str >= 9223372036854775807)
	{
		if (sing == 1)
			return (-1);
		return (0);
	}
	return ((int)str * sing);
}

int	ft_atoi(const char *str)
{
	int		i;
	int		sing;
	size_t	rs;

	i = 0;
	rs = 0;
	sing = 1;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		rs = rs * 10 + str[i] - '0';
		i++;
	}
	return (pff(rs, sing));
}

// #include <stdio.h>
// int main()
// {
// 	char s[]="--2459";
// 	int i = ft_atoi(s);
// 	printf("%d",i);
// }
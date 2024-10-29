/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 20:07:00 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/26 23:00:33 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	if (!s)
		return ;
	while (i < n)
	{
		((unsigned char *) s)[i] = 0;
		i++;
	}
}
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char *s = NULL;
// 	puts(s);
// 	ft_bzero(s, 5);
// 	for (int i = 0; i < 10; i++) 
// 	{
//         printf("%d ", s[i]);
// 	}
// }
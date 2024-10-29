/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 16:29:32 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/27 10:26:29 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// #include <stdio.h>
// int main()
// {
// 	char str[]="!!";
// 	for(int i = 0; str[i]; i++)
// 	{
// 		if(ft_isalpha(str[i]))
// 		{
// 			puts("great");
// 		}
// 		if(!ft_isalpha(str[i]))
// 			puts("allo allo \n");
// 	}
// }

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:52:48 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/21 18:38:44 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
		return (1);
	return (0);
}
/*


#include<stdio.h>
int main()
{
	char str[]= "123456789kjdbcqkje  !@#$";
	for (int i =0; str[i] ; i++)
	{
		if (ft_isalnum(str[i]))
		{
			puts("tttt");
		}
		if(!ft_isalnum(str[i]))
			puts("pp");
	}
}*/

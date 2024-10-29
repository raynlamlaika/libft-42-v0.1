/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:13:42 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/21 17:23:53 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
/*
#include <stdio.h>
int main()
{
	char str[]= "1234567890gg";
	for (int i=0 ; str[i]; i++)
	{
		if(ft_isdigit(str[i]))
			puts("gret");
		else
			puts("ooh");
	}	
	
}*/

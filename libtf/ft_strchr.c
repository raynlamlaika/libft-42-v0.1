/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 20:54:12 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/22 21:57:17 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int x)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == x)
			return ((char *)&str[i]);
		i++;
	}
	if (x == '\0')
		return ((char *) &str[i]);
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>


#include <stdio.h>
int main()
{
	char myStr[] = "Hello World";
	char *myPtr = strchr(myStr, 'o');
	if (myPtr != NULL) 
		printf("%s", myPtr);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 21:39:11 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/28 19:43:03 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	if (!str)
		return (NULL);
	i = ft_strlen(str);
	if (c == '\0')
		return ((char *)&str[i]);
	while (i > 0)
	{
		if (str[i - 1] == c)
			return ((char *)&str[i - 1]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdio.h>
// int main()
// {
// 	char myStr[] = "hahooawa \n hhna";
// 	char *myPtr = ft_strrchr(myStr, '\n');
// 	printf("%s allo allo", myPtr);
// }
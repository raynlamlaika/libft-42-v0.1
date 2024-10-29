/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:48:27 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/28 16:18:58 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*string;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i)
		return (ft_strdup(""));
	if (i - start < len)
		len = i - start;
	string = (char *)malloc((1 + len) * sizeof(char));
	if (!string)
		return (NULL);
	i = 0;
	while (s[start] && len > 0)
	{
		string[i++] = s[start++];
		len--;
	}
	string[i] = '\0';
	return (string);
}

// #include <stdio.h>
// #include <string.h>n
// int main() 
// {
// 	char str[] = "Hello world hello hello";
// 	int start = 0;
// 	int len = 0;
// 	char* result = ft_substr(str, start, len);
// 	printf("Substring "": %s\n", result);
// 	free(result);
// 	return 0;
// }
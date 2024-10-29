/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 17:15:42 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/27 22:48:42 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char*source)
{
	size_t	i;
	size_t	o;
	char	*sp;

	i = ft_strlen(source);
	o = 0;
	sp = (char *) malloc((i + 1) * sizeof(char));
	while (source[o])
	{
		sp[o] = source[o];
		o++;
	}
	sp[o] = '\0';
	return (sp);
}

// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char source[] = "rayane WWW";
//     char* target = ft_strdup(source); 
//     printf("%s", target);
//     return 0;
// }
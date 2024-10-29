/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rlamlaik <rlamlaik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 21:32:55 by rlamlaik          #+#    #+#             */
/*   Updated: 2024/10/28 20:06:52 by rlamlaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

static size_t	count_word(char const *str, char c)
{
	size_t	i;
	size_t	o;

	o = 0;
	i = 0;
	if (!str)
		return (0);
	while (*str)
	{
		if (*str != c && o == 0)
		{
			o = 1;
			i++;
		}
		else if (*str == c)
			o = 0;
		str++;
	}
	return (i);
}

static size_t	lenght(char const *str, char c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (*str && *str != c)
	{
		i++;
		str++;
	}
	return (i);
}

static char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	srclen;

	i = 0;
	srclen = ft_strlen(src);
	if (!src || !dest)
		return (0);
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

static char	**lines(char const*s, char c, char**p, size_t*index)
{
	size_t	words;

	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != c)
		{
			words = lenght(s, c);
			p[*index] = (char *) malloc(sizeof(char) * (words + 1));
			if (!p)
			{
				while (index > 0)
					free(p[(*index)--]);
				free (p);
				return (0);
			}
			ft_strncpy(p[*index], s, words);
			p[*index][words] = '\0';
			(*index)++;
			s += words;
		}
	}
	return (p);
}

char	**ft_split(char const *s, char c)
{
	size_t	words;
	char	**p;
	size_t	index;

	if (!s)
		return (NULL);
	words = count_word(s, c);
	p = (char **) malloc(sizeof(char *) * (1 + words));
	if (!p)
		return (NULL);
	index = 0;
	p = lines(s, c, p, &index);
	if (!p)
		return (NULL);
	p[index] = NULL;
	return (p);
}

// #include<stdio.h>
// int main()
// {
// 	char months[] = "          ";
// 	char** tokens;
// 	char p;
// 	tokens = ft_split(months,32);
// 	if (tokens)
// 	{
// 		int i;
// 		for (i = 0; *(tokens + i); i++)
// 		{
// 			printf("9wada = [%s]p", *(tokens + i));
// 			free(*(tokens + i));
// 		}
// 		printf("\n");
// 		free(tokens);
// 	}
// 	return 0;
// }
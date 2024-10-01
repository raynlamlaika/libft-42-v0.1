#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t t = ft_strlen(src);
	size_t i = 0;
	size_t j = ft_strlen(dst);
	if (t == '\0')
		return size +t ;
	while ((i+j) < (size - 1 )&& src[i] != '\0')
	{
		dst[i+j] = src[i];
		i++;
	}
	dst[j+i] = '\0';
	return t+j;
}

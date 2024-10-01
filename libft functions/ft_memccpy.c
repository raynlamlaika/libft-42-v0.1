#include "libft.h"

void *ft_memccpy(void *dest_str, const void *src_str, int c, size_t n)
{
    size_t i =0;
    if (!dest_str || !src_str)
		return (NULL);
	i = 0;
    while (i < n)
    {
        *(unsigned char*)(dest_str + i) = *(unsigned char*)(src_str + i);
		if (*(unsigned char*)(src_str + i) == (unsigned char)c)
			return (dest_str + i + 1);
    }
    return dest_str;
}
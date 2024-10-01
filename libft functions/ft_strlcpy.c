#include "libft.h"

size_t  ft_strlen(const char* i)
{
    int t = 0;
    while (i[t])
        t++;
    return t;
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
    if (!dst || !src)
        return 0;

    size_t i = 0;
    while (dstsize > i + 1 && src[i])
    {
        dst[i] = src[i];
        i++;
    }
    if (dstsize > 0)
        dst[i] = '\0';
    return (ft_strlen(src));
}

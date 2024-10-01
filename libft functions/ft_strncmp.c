#include "libft.h"
int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned int i = 0;
    while (i <= n && s1[i] == s2[i])
        i++;
    return(s1[i] - s2 [i]);
}

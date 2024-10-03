#include "libft.h"

char	*ft_strnstr(const char *s, const char *find, size_t slen)
{
 	size_t i = 0;
	size_t j;

	if (*find =='\0')
		return (char *)s;
	while (slen > i)
	{
	      	if(s[i] == find[0])
		{
			j = 0;
			while(slen > (i+j)&&find[j] && s[i] && find[j] == s[i+j])
				j++;
			if(find[j]== '\0')
				return (char *) (s+i);
		}
		i++;
	}
	return 0;
}

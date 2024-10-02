#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr= malloc(1+sizeof(*s)* (len));
	int  i  = 0;
	int j = 0;
	if (!ptr)
		return 0;
	while (s[i])	
	{
		if (i >= len && j < len)
		{
			ptr[j] = s[i];
			j++;
		}

		i++;
	}

	ptr[j] ='\0';
	return ptr;
}
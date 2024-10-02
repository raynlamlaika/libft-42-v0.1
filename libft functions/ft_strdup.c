#include "libft.h"


char *ft_strdup(const char *s)
{
	int i= 0;
	while (s[i])
		i++;
	char *p;
	p = malloc(sizeof(char)*(i +1));
	if (!p)
		return 0;
	int ty = 0;
	while(i> ty)
	{
		p[ty] = s[ty];
		ty++;
	}
	p[ty] = '\0';
	return p;
}

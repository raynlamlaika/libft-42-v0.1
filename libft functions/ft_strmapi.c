#include "libft.h"
char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int len = ft_strlen(s);
	char *sf = (char*) malloc(sizeof(char) * (len +1));
	unsigned int i = 0;
	if(!sf || !f || !s)
		return 0;
	while (s[i])
	{
		sf[i] = f(i,s[i]);
		i++;
	}
	sf[i] ='\0';
	return sf;
}

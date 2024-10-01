#include "libft.h"

char *ft_strrchr(const char *str, int c)
{
	char *ch =(char*) str;
	while (*ch)
		ch++;
	if(*ch == c)
		return ((char*)ch);
	while (*ch != c)
	{
		if(*ch ==c)
			return (char*)ch;
		ch--;
	}
	if(*ch == c)
		return (char*)ch;
	return 0;
}

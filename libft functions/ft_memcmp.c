#include "libft.h"

int ft_memcmp(const void *sf, const void *ss, size_t i)
{
	unsigned char *s1 =(unsigned char*)sf;
	unsigned char *s2 =(unsigned char*)ss;
	size_t n =0;
	while (i--)
	{
		if(*s1 != *s2)
			return s1 -s2;
		s1++;	
		s2++;
	}	
	return 0;
}
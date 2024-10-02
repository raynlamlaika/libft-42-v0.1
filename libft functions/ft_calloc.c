#include "libft.h"

void *ft_calloc (unsigned int num,unsigned  int size)
{
	void *ptr;
	size = num * size;
	ptr = malloc(size);
	if (ptr != NULL)
	{
		unsigned char *p = ptr;
		unsigned int i =0;
		while (i<size)
		{
			p[i]= 0;
			i++;
		}
	}
	return ptr;
}

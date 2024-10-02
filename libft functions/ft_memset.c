#include "libft.h"
void* ft_memset(void *ptr,int x,size_t n)
{
	unsigned char *tmp = (unsigned char*) ptr;
	while(n > 0)
	{
	       *tmp = x;
	        tmp++;
	        n--;
	}
	return ptr;
}
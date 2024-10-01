#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
	size_t i = 0;
	unsigned char *d = (unsigned char*) dest;
	unsigned char *s= (unsigned char*) src;

	if(d =='\0' || s == '\0')
		return 0;

	if(d < s)
		while(i< n)
		{
			d[i] = s[i];
			i++;
		}
	else
	{
		i = n;
		while(i>0)
		{
		     	d[i-1] = s[i-1];
			i--;

		}
	}
	return d;
} 
/*
#include <stdio.h>
int main()
{
	char s[]= "Hello, World!";
	ft_memmove(s+7,s,6);
	printf("%s",s);

}
*/

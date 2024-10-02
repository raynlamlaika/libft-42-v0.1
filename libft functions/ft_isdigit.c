#include "libft.h"

int ft_isdigit(int n)
{
	while(n >= '0' && n <= '9')
		return 1;
	return 0;
}
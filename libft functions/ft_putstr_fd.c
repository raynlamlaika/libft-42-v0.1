#include "libft.h"

void ft_putstr_fd(const char *s, int fd)
{
	if (!s)
		return;
	while (*s)
	{
		write(fd,s,1);
		s++;
	}
}

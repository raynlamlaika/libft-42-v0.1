#include "libft.h"

void my(int n , int fd)
{
	write(fd, &n,1);
}


void ft_putnbr_fd(int n, int fd	)
{
	
    if (n == -2147483648)
    {
        write(fd,"-2147483648", 11);
        return;
    }
    if (n < 0)  // Handle negative numbers
    {
        my('-', fd);
        n = -n;
    }
    if (n >= 10)  // Recursive call to print digits
    {
         ft_putnbr_fd(n / 10, fd);
    }
    
    my(n % 10 + '0', fd); 

}

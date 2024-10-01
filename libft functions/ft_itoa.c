#include "libft.h"

int mall(int n)
{
	unsigned int i =0;
	if (n == 0)
		return 1;
	if(n < 0)
	{
		i +=1;
		n =-(n+1);
	}
	while (n != 0)
	{
		n /= 10;
		i++;
	}
	return i;
}

char *ft_itoa(int un)
{
	char *rs;
	int l = mall(un);
	long long n =un;
	rs = (char*) malloc(sizeof(char)*(l+1));
	if(!rs)
		return 0;
	if(n < 0)
	{
		n = -n;
		rs[0] = '-';
	}
	else
		n = n;
	if(n == 0)
		rs[0] = '0';
	rs[l]='\0';
	while ( n > 0)
	{
		rs[l-1]=(n%10)+'0';
		n = n /10;
		l--;
	}
	return rs;
}

#include "libft.h"
                       
int ft_isalnum(int x)
{
	if((x>= 97 && x<=122)||(x>= 65 && x<= 90)||(x >= 48 && x<=57))
		return 1;
	return 0;
}

/*
#include <stdio.h>

int main() {
    char ch = '/';
    
    if (ft_isalnum(ch)) {
        printf("%c is alphanumeric.\n", ch);
    } else {
        printf("%c is not alphanumeric.\n", ch);
    }
    
    return 0;
}
*/

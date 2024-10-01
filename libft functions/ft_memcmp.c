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
#include <stdio.h>
#include <stdlib.h>

#include <string.h>

// Prototype for ft_memcmp
int ft_memcmp(const void *s1, const void *s2, size_t n);

int main(void)
{
    char str1[] = "Hello, world!";
    char str2[] = "Hello, world!";
    char str3[] = "Hello, 42!";
    int result;

    // Compare identical strings
    result = ft_memcmp(str1, str2, 13);  // Compare 13 characters
    printf("Comparison of str1 and str2: %d\n", result); // Expected: 0

    // Compare different strings
    result = ft_memcmp(str1, str3, 13);  // Compare 13 characters
    printf("Comparison of str1 and str3: %d\n", result); // Expected: Non-zero value

    // Compare strings with a limited number of characters (e.g., 7 characters)
    result = ft_memcmp(str1, str3, 7);  // Compare first 7 characters
    printf("Comparison of str1 and str3 (first 7 characters): %d\n", result); // Expected: 0 (since "Hello, " is the same in both)

    return 0;
}

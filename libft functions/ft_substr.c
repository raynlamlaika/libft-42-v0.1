#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char *ptr= malloc(1+sizeof(*s)* (len));
	int  i  = 0;
	int j = 0;
	if (!ptr)
		return 0;
	while (s[i])	
	{
		if (i >= len && j < len)
		{
			ptr[j] = s[i];
			j++;
		}

		i++;
	}

	ptr[j] ='\0';
	return ptr;

}
/*
#include <stdio.h>


int main(void)
{
    char *file_path = "welcom to 1337";
    char *file_name;
    file_name = ft_substr(file_path, 0, 7);

    printf("Extracted file name: %s\n", file_name);

    // Free the allocated memory
    free(file_name);

    return 0;
}
*/

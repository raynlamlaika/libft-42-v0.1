#include "libft.h"
#include <stdlib.h>
	
char *ft_strdup(const char *s)
{
        int i= 0;
        while (s[i])
                i++;
        char *p;
        p = malloc(sizeof(char)*(i +1));
        if (!p)
                return 0;
        int ty = 0;
        while(i> ty)
        {
                p[ty] = s[ty];
                ty++;
        }
        p[ty] = '\0';
        return p;
}

int len(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return i;
}


char *ft_strjoin(char const *s1, char const *s2)
{
	if(!s1 && !s2)
		return 0;
	if(!s1)
		return ft_strdup(s2);
	if(!s2)
		return ft_strdup(s1);

	char* s= (char*)s1;
	char* ss = (char*)s2;
	int len2 = len(ss);  
        int len1= len(s);
        
	char *out = (char *)malloc(sizeof(char)*(len1+len2)+1);
        int p =0;
	if(!out)
		return 0;
	while(p < len1)
        {
                out[p]= s[p];
		p++;
	}
        int o = 0;
        while(o< len2)
        {
                out[p] = ss[o];
		o++;
		p++;
	}
	out[p] =='\0';
	return out;

}

/*
#include <stdio.h>
int main() {
    char *s1 = "Hello, ";
    char *s2 = "World!";
    
    char *result = ft_strjoin(s1, s2);
    if (result) {
        printf("%s\n", result); // Output: Hello, World!
        free(result); // Don't forget to free the allocated memory
    }

    return 0;
}
*/



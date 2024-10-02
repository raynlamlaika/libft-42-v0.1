#include "libft.h"
#include <stdio.h>
int countW(char const *s, char c)
{
	int i=0;
	int w=0;
	while (*s)
	{
		if (*s != c && w == 0)
		{
			w=1;
			i++;
		}
		else if(*s == c)
			w =0;	
		s++;
	}
	return i;
}

int worldL(char const *s,char c)
{
	int l=0;
	while(s[l] && s[l] != c)
		l++;
	return l;
}

char *wordC(char const *s,int c)
{
	int i= 0;
	char *w = (char*)malloc(sizeof(char)*(c+1));
	if(!w)
		return 0;
	while(i < c)
	{
		w[i] =s[i];
		i++;
	}
	w[i] = '\0';
	return w;
}

char **ft_split(char const *s, char c)
{
	char **ws;
	int lenS= countW(s,c);
	int j= 0;
	ws = (char**) malloc(sizeof(char*)*(lenS+1));
	if (!ws)
		return 0;
	 
    while (*s)
    {
        // Skip delimiters
        while (*s && *s == c)
            s++;
        if (*s)
        {
            int len = worldL(s, c);       // Get word length
            ws[j] = wordC(s, len);        // Copy the word
            if (!ws[j])                   // Handle malloc failure
            {
                while (j-- > 0)
                    free(ws[j]);
                free(ws);
                return NULL;
            }
            j++;
            s += len; // Move pointer past the word
        }
    }
    ws[j] = NULL; // Null-terminate the array
    return ws;
}
#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
void	*ft_calloc(size_t count, size_t size);
int		ft_isascii(int c);  // Note: changed from ft_isacssi to ft_isascii
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
char	*ft_itoa(int n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_putchar(char c);
char	*ft_strchr(const char *s, int c);
int		ft_stnrcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *s);
char	*ft_strrchr(const char *s, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);
char **ft_split(char const *s, char c);
int ft_isalnum(int x);
void *memcpy(void *dest, const void *src, size_t n);


typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

t_list	*ft_lstnew(void *content);



#endif

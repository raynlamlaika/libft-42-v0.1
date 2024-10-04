#ifndef LIBFT_H
#define LIBFT_H

#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    void            *content;
    struct s_list   *next;
}   t_list;

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
int ft_memcmp(const void *sf, const void *ss, size_t i);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
char *ft_substr(char const *s, unsigned int start, size_t len);
void *ft_memmove(void *dest, const void *src, size_t n);
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
void ft_lstadd_front(t_list **lst, t_list *new);
void ft_putchar_fd(char c, int fd);
void ft_putstr_fd(const char *s, int fd);
void ft_putnbr_fd(int n, int fd	);
t_list	*ft_lstnew(void *content);
char    *ft_strnstr(const char *s, const char *find, size_t slen);
void ft_lstadd_back(t_list **lst, t_list *new);
t_list *ft_lstlast(t_list *lst);
int ft_lstsize(t_list *lst);
void ft_putendl_fd(char *s, int fd);
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));

#endif

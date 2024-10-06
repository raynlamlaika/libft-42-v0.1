CC = gcc
AR = ar rcs
NAME = libft.a
FLAGC = -Wall -Werror -Wextra
SRC = ft_isdigit.c ft_memcpy.c ft_split.c ft_strrchr.c ft_atoi.c ft_isprint.c ft_memmove.c\
	ft_strchr.c ft_substr.c ft_bzero.c ft_itoa.c ft_memset.c ft_strdup.c\
	ft_tolower.c ft_calloc.c ft_lstadd_front.c  ft_putchar.c ft_strlcat.c\
	ft_toupper.c ft_isacssi.c  ft_lstnew.c ft_putchar_fd.c ft_strlcpy.c ft_isalnum.c  ft_memccpy.c\
	ft_putnbr_fd.c ft_strlen.c ft_isalpha.c ft_memcmp.c ft_putstr_fd.c ft_strncmp.c ft_strnstr.c\
	ft_lstadd_back.c ft_lstlast.c ft_lstsize.c ft_putendl_fd.c ft_strmapi.c ft_strjoin.c

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
	@echo "hamdolah sf ra tmas7o"
re : fclean all

.PHONY: all fclean

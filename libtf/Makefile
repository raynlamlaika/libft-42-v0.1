CC = cc #so we do strat with variables that hold several things such naem targetes compalier ...

CFLAGS = -Wall -Wextra -Werror

AR = ar rcs

NAME = libft.a

HEADER = libft.h

BONUS =${*_bomus.c}

#OBJS = ${BONUS:.c=.o}

SRC = ft_isalnum.c ft_isdigit.c ft_strlen.c ft_isalpha.c	ft_isprint.c ft_bzero.c	ft_isascii.c ft_memset.c ft_memcpy.c ft_memmove.c \
	 ft_strlcpy.c ft_strlcat.c ft_calloc.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c ft_atoi.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	 ft_strnstr.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strnstr.c ft_split.c ft_itoa.c ft_strmapi.c ft_strtrim.c ft_striteri.c ft_putchar_fd.c \
	 ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
	
OBJ = ${SRC:.c=.o}

all: ${NAME}

${NAME}: ${OBJ} ${HEADER}
	${AR} ${NAME} ${OBJ}

# %.o: %.c 
# 	${CC} ${FLAGS} -c $< -o $@ #$@ is an automatic variable that contains the target name.

# bonus : ${OBJS}
# 	${AR} ${NAME} ${OBJS}

clean:
	rm -f ${OBJ}  #eand as last dance you should put the cmd' gcc -Wall -Wextra -Werror test.c -L. -lft -o test_program' to work with libft

fclean: clean
	rm -f clean $(OBJ) $(NAME) 

re: fclean all

.PHONY: clean
NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror

AR = ar rcs
RM = rm -f

# Source files
SRCS = ft_isdigit.c ft_memccpy.c ft_putstr_fd.c  ft_strncmp.c \
		ft_atoi.c ft_isprint.c ft_memcpy.c ft_strchr.c ft_strrchr.c\
		ft_bzero.c ft_itoa.c ft_memset.c ft_strdup.c ft_tolower.c\
		ft_calloc.c ft_lstadd_front.c ft_putchar.c ft_strlcat.c ft_toupper.c\
		ft_isacssi.c ft_lstnew.c ft_putchar_fd.c ft_strlcpy.c ft_isalpha.c \
		ft_putnbr_fd.c ft_strlen.c ft_split.c ft_isalnum.c ft_memmove.c

OBJS = $(SRCS:.c=.o)

# Add a test file (main.c)
TEST_SRCS = main.c  # This is your test file
TEST_OBJS = $(TEST_SRCS:.c=.o)
TEST_EXE = test_libft  # Name of the test executable

# Default rule to build the library
all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Rule to clean up object files
clean:
	$(RM) $(OBJS) $(TEST_OBJS)

# Rule to clean up object files and the library
fclean: clean
	$(RM) $(NAME) $(TEST_EXE)

# Rule to rebuild everything
re: fclean all

# Rule to compile and run the test program
test: $(NAME) $(TEST_OBJS)
	$(CC) $(CFLAGS) -o $(TEST_EXE) $(TEST_OBJS) -L. -lft
	./$(TEST_EXE)

.PHONY: all clean fclean re test

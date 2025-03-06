NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strcmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_strdup.c ft_calloc.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_strtrim.c ft_itoa.c ft_split.c ft_printf.c print_string.c print_num.c

BONUS = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)

HEADERS = libft.h
# Default rule to compile the program
all: $(NAME)
# Rule to link the object files into the executable
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
# Rule to compile the source files into object files
.c.o:
	$(CC) $(CFLAGS) -c $< -o ${<:.c=.o}

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(NAME) $(BONUS_OBJS)
	ar rcs $(NAME) $(BONUS_OBJS)

.PHONY: all clean fclean re bonus

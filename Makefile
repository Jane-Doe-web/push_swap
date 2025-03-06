NAME = push_swap
CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -I$(SOURCES_DIR) -I$(LIBFT_DIR)
LIBFT_DIR = libft
SOURCES_DIR = sources

SRCS = $(SOURCES_DIR)/main.c $(SOURCES_DIR)/cleaning.c
OBJS = $(SRCS:.c=.o)

LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(LIBFT):
	make -C $(LIBFT_DIR) bonus

$(NAME): $(OBJS) $(LIBFT)
	$(CC) $(CFLAGS) $(OBJS) -L$(LIBFT_DIR) -lft -o $(NAME)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@ 

clean:
		make -C $(LIBFT_DIR) clean
		rm -f $(OBJS)

fclean: clean
		rm -f $(NAME) $(LIBFT)

re: fclean all

re_bonus: fclean

.PHONY: all clean fclean re

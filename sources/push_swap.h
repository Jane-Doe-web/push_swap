#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct s_stack_node
{
	int	nbr;
	int	index;

	struct	s_stack_node *next;
}	t_stack_node;
#endif
#include "push_swap.h"

void	check_input (char *str)
{
	int	i;

	i = 0;
	if (str[i] == '+' || str[i == '-'])
		i++;
	while (str[i])
	{
		if (ft_is_digit(str[i]))
			i++;
		else
		{
			ft_printf("Error\n");
			exit (1);
		}
	}
}

void	init_stack_a(t_stack_node *a, char **args)
{
	int	i;
	
	i = 0;
	while (args[i])
	{
		check_input (args[i]);
		i++;
	}

}

int	main(int argc, char* argv[])
{
	t_stack_node *a;
	t_stack_node *b;
	char	*args;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return(1);
	else if (argc == 2)
		args = ft_split(argv[1], ' ');
	else if (argc > 2)
		args = argv + 1;
	init_stack_a(&a, args);
	if (!stack_sorted(a))
	{
		if (stack_len(a) == 2)
			sa(&a);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else....
	}
	free_stack(&a);	
}
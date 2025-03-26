/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esteudle <esteudle@student.42berlin.d      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/25 17:34:29 by esteudle          #+#    #+#             */
/*   Updated: 2025/03/25 19:05:57 by esteudle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "push_swap.h"

void	check_doubles(char **args, int flag)
{
	int		i;
	int		j;
	char	*temp1;
	char	*temp2;

	i = 0;
	while (args[i])
	{
		temp1 = args[i];
		while (*temp1 == '0')
			temp1++;
		j = i + 1;
		while (args[j])
		{
			temp2 = args[j];
			while (*temp2 == '0')
				temp2++;
			if (!ft_strcmp(temp1, temp2))
				error_handler("Error\n", args, flag);
			j++;
		}
		i++;
	}
}

//check if the string has only digits, skip - +
int	check_if_digit(char **arr, int need_to_free)
{
	int	i;
	int	j;

	if (arr[0] == NULL)
	{
		free_args(arr);
		exit(1);
	}
	i = 0;
	while (arr[i])
	{
		j = 0;
		if (arr[i][0] == '-' || arr[i][0] == '+')
			j++;
		if (!arr[i][j])
			error_handler("Error\n", arr, need_to_free);
		while (arr[i][j])
		{
			if (!ft_isdigit(arr[i][j]))
				error_handler("Error\n", arr, need_to_free);
			j++;
		}
		i++;
	}
	return (0);
}

long	ft_atol(const char *nptr, t_list **a, char **args, int flag)
{
	long	number;
	int		i;

	number = 0;
	i = 0;
	if (nptr[i] == '-' || nptr[i] == '+')
		i++;
	while (nptr[i] == '0')
		i++;
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = number * 10 + (nptr[i] - '0');
		i++;
	}
	if (nptr[0] == '-')
		number = -number;
	if (number > INT_MAX || number < INT_MIN)
	{
		if (flag)
			free_args(args);
		free_stack_nodes(a);
	}
	return (number);
}

// create nodes, copy and convert the str to int, give index -1 by default
void	init_stack_a(t_list **a, char**args, int flag)
{
	int		i;
	t_list	*new;

	i = 0;
	*a = ft_lstnew(ft_atol(args[i], a, args, flag), -1);
	i++;
	while (args[i])
	{
		new = ft_lstnew(ft_atol(args[i], a, args, flag), -1);
		ft_lstadd_back(a, new);
		i++;
	}
}
//testing function
/*void    print_stack(t_list *a)
{
    while (a)
    {
        ft_printf("%d ", a->nbr);
        a = a->next;
    }
    ft_printf("\n");
}*/

int	main(int argc, char *argv[])
{
	t_list	*a;
	char	**args;
	int		flag;

	flag = 0;
	a = NULL;
	if (argc == 1 || (argc == 2 && !argv[1][0]))
		return (1);
	if (argc == 2)
	{
		args = ft_split(argv[1], ' ');
		flag = 1;
	}
	else
		args = argv + 1;
	check_if_digit(args, flag);
	check_doubles(args, flag);
	init_stack_a(&a, args, flag);
	if (flag)
		free_args(args);
	if (stack_sorted(&a) || ft_lstsize(a) == 1)
		clear_and_exit(&a);
	push_swap(&a);
	ft_lstclear(&a);
}

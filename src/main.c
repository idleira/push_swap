/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:36:03 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/08/02 05:29:25 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* choose a sorting method depending on the number of values to be sorted */
static void	push_swap(t_stack **a_stack, t_stack **b_stack, int stack_size)
{
	if (stack_size == 2 && !is_sorted(*a_stack))
		sa(a_stack);
	else if (stack_size == 3)
		sort_3(a_stack);
	else if (stack_size > 3 && !is_sorted(*a_stack))
		sort(a_stack, b_stack);
}

/* check if a stack is sorted */
int	is_sorted(t_stack *stack)
{
	while (stack->next != NULL)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	main(int argc, char **argv)
{
	t_stack	*a_stack;
	t_stack	*b_stack;
	int		size;

	if (argc <= 1)
	{
		write(1, "ERROR: Single argument provided\n", 32);
		return (0);
	}
	else if (argc == 2)
		argv = ft_split(argv[1], ' ');
	else
		argv = argv + 1;
	if (!check_input(argv))
		error_exit(NULL, NULL);
	b_stack = NULL;
	a_stack = fill_stack(argv);
	size = stack_size(a_stack);
	assign_index(a_stack, size + 1);
	push_swap(&a_stack, &b_stack, size);
	free_stack(&a_stack);
	free_stack(&b_stack);
	return (0);
}

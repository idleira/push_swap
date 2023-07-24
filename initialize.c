/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initialize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:34:51 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/24 18:49:12 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* fll a_stack with provided values */
t_stack	*fill_stack(int ac, char **argv)
{
	t_stack		*a_stack;
	long int	nb;
	int			i;

	a_stack = NULL;
	nb = 0;
	i = 1;
	while (i < ac)
	{
		nb = ft_atoi(argv[i]);
		if (nb > INT_MAX || nb < INT_MIN)
			error_exit(&a_stack, NULL);
		if (i == 1)
			a_stack = new_stack((int)nb);
		else
			add_bottom(&a_stack, stack_new((int) nb));
		i++;
	}
	return (a_stack);
}

/* assign index to each value in stack A */
void	assign_index(t_stack *a_stack, int stack_size)
{
	t_stack	*ptr;
	t_stack	*highest;
	int		value;

	while (--stack_size > 0)
	{
		ptr = a_stack;
		value = INT_MIN;
		highest = NULL;
		while (ptr)
		{
			if (ptr->value == INT_MIN && ptr->index == 0)
				ptr->index = 1;
			if (ptr->value > value && ptr->index == 0)
			{
				value = ptr->value;
				highest = ptr;
				ptr = a_stack;
			}
			else
				ptr = ptr->next;
		}
		if (highest != NULL)
			highest->index = stack_size;
	}
}

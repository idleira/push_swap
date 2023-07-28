/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 10:36:41 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/28 13:37:27 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* sort a stack of 3 in 2 or fewer moves (by index rather than value) */
void	sort_3(t_stack **stack)
{
	int		highest;

	if (is_sorted(*stack))
		return ;
	highest = find_highest_index(*stack);
	if ((*stack)->index == highest)
		ra(stack);
	else if ((*stack)->next->index == highest)
		rra(stack);
	if ((*stack)->index > (*stack)->next->index)
		sa(stack);
}

/* return highest index in a stack */
static int	find_highest_index(t_stack *stack)
{
	int		index;

	index = stack->index;
	while (stack)
	{
		if (stack->index > index)
			index = stack->index;
		stack = stack->next;
	}
	return (index);
}

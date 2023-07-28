/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:36:16 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/28 14:09:39 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* push all elements A to B, except three last */
static void	push_all_save_three(t_stack **a_stack, t_stack **b_stack)
{
	int	size;
	int	pushed;
	int	i;

	size = stack_size(*a_stack);
	pushed = 0;
	i = 0;
	while (size > 6 && i < size && pushed < size / 2)
	{
		if ((*a_stack)->index <= size / 2)
		{
			pb(a_stack, b_stack);
			pushed++;
		}
		else
			ra(a_stack);
		i++;
	}
	while (size - pushed > 3)
	{
		pb(a_stack, b_stack);
		pushed++;
	}
}

/* shift stack a until the lowest value is at the top */
static void	shift_stack(t_stack **a_stack)
{
	int	lowest_pos;
	int	size;

	size = stack_size(*a_stack);
	lowest_pos = get_lowest_index_position(a_stack);
	if (lowest_pos > size / 2)
	{
		while (lowest_pos < size)
		{
			rra(a_stack);
			lowest_pos++;
		}
	}
	else
	{
		while (lowest_pos > 0)
		{
			ra(a_stack);
			lowest_pos--;
		}
	}
}

/* sort more than 3 arguments */
void	sort(t_stack **a_stack, t_stack **b_stack)
{
	push_all_save_three(a_stack, b_stack);
	sort_3(a_stack);
	while (*b_stack)
	{
		get_target_position(a_stack, b_stack);
		calculate_cost(a_stack, b_stack);
		cheapest_move(a_stack, b_stack);
	}
	if (!is_sorted(*a_stack))
		shift_stack(a_stack);
}

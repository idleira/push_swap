/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   position.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:52:30 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/31 11:36:33 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* assign position to each element of stack:top to bottom, ascending */
static void	get_position(t_stack **stack)
{
	t_stack	*temp;
	int		i;

	temp = *stack;
	i = 0;
	while (temp)
	{
		temp->pos = i;
		temp = temp->next;
		i++;
	}
}

/* get current position of lowest index within a stack */
int	get_lowest_index_position(t_stack **stack)
{
	t_stack	*temp;
	int		lowest_index;
	int		lowest_pos;

	temp = *stack;
	lowest_index = INT_MAX;
	get_position(stack);
	lowest_pos = temp->pos;
	while (temp)
	{
		if (temp->index < lowest_index)
		{
			lowest_index = temp->index;
			lowest_pos = temp->pos;
		}
		temp = temp->next;
	}
	return (lowest_pos);
}

static int	get_target(t_stack **a, int b_idx,
								int target_idx, int target_pos)
{
	t_stack	*temp_a;

	temp_a = *a;
	while (temp_a)
	{
		if (temp_a->index > b_idx && temp_a->index < target_idx)
		{
			target_idx = temp_a->index;
			target_pos = temp_a->pos;
		}
		temp_a = temp_a->next;
	}
	if (target_idx != INT_MAX)
		return (target_pos);
	temp_a = *a;
	while (temp_a)
	{
		if (temp_a->index < target_idx)
		{
			target_idx = temp_a->index;
			target_pos = temp_a->pos;
		}
		temp_a = temp_a->next;
	}
	return (target_pos);
}

void	get_target_position(t_stack **a, t_stack **b)
{
	t_stack	*temp_b;
	int		target_pos;

	temp_b = *b;
	get_position(a);
	get_position(b);
	target_pos = 0;
	while (temp_b)
	{
		target_pos = get_target(a, temp_b->index, INT_MAX, target_pos);
		temp_b->target_pos = target_pos;
		temp_b = temp_b->next;
	}
}

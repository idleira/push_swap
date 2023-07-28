/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cost.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:36:00 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/28 13:34:30 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* find element in B with cheapest cost and move to A */
void	cheapest_move(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*temp;
	int		cheapest;
	int		cost_a;
	int		cost_b;

	temp = *b_stack;
	cheapest = INT_MAX;
	while (temp)
	{
		if (abs_val(temp->cost_a) + abs_val(temp->cost_b) < abs_val(cheapest))
		{
			cheapest = abs_val(temp->cost_b) + abs_val(temp->cost_a);
			cost_a = temp->cost_a;
			cost_b = temp->cost_b;
		}
		temp = temp->next;
	}
	move(a_stack, b_stack, cost_a, cost_b);
}

/* calculate cost of moving each element of B to correct position in A */
void	calculate_cost(t_stack **a_stack, t_stack **b_stack)
{
	t_stack	*temp_a;
	t_stack	*temp_b;
	int		size_a;
	int		size_b;

	temp_a = *a_stack;
	temp_b = *b_stack;
	size_a = stack_size(temp_a);
	size_b = stack_size(temp_b);
	while (temp_b)
	{
		temp_b->cost_b = temp_b->pos;
		if (temp_b->pos > size_b / 2)
			temp_b->cost_b = (size_b - temp_b->pos) * -1;
		temp_b->cost_a = temp_b->target_pos;
		if (temp_b->target_pos > size_a / 2)
			temp_b->cost_a = (size_a - temp_b->target_pos) * -1;
		temp_b = temp_b->next;
	}
}

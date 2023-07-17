/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:52:32 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/17 18:33:52 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

/* swap the top 2 elements on the stack; do nothing if only 1 or no elements */
static void	swap(t_stack *stack)
{
	int	temp_value;
	int	temp_index;

	if (!stack || !(stack->next))
		return ;
	temp_value = stack->value;
	stack->value = stack->next->value;
	stack->next->value = temp_value;
	temp_index = stack->index;
	stack->index = stack->next->index;
	stack->next->index = temp_index;
}

/* swap A */
void	sa(t_stack **a_stack)
{
	swap(*a_stack);
	ft_putstr("sa\n");
}

/* swap B */
void	sb(t_stack **b_stack)
{
	swap(*b_stack);
	ft_putstr("sb\n");
}

/* sa and sb at the same tine */
void	ss(t_stack **a_stack, t_stack **b_stack)
{
	swap(*a_stack);
	swap(*b_stack);
	ft_putstr("ss\n");
}

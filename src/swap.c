/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:52:32 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/27 13:02:11 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <unistd.h>

/* swap the top 2 elements on the stack; do nothing if only 1 or no elements */
static void	swap(t_stack *stack)
{
	int	temp;

	if (stack == NULL || stack->next == NULL)
		return ;
	temp = stack->value;
	stack->value = stack->next->value;
	stack->next->value = temp;
	temp = stack->index;
	stack->index = stack->next->index;
	stack->next->index = temp;
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

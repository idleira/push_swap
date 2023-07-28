/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_rotate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 22:31:57 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/27 13:04:14 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* bring the bottom element of a stack to the top */
static void	rev_rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*tail;
	t_stack	*before_tail;

	tail = get_last_element(*stack);
	before_tail = get_second_to_last(*stack);
	temp = *stack;
	*stack = tail;
	(*stack)->next = temp;
	before_tail->next = NULL;
}

/* reverse rotate a */
void	rra(t_stack **a_stack)
{
	rev_rotate(a_stack);
	ft_putstr("rra\n");
}

/* reverse rotate b */
void	rrb(t_stack **b_stack)
{
	rev_rotate(b_stack);
	ft_putstr("rrb\n");
}

/* rra and rrb at the same time */
void	rrr(t_stack **a_stack, t_stack **b_stack)
{
	rev_rotate(a_stack);
	rev_rotate(b_stack);
	ft_putstr("rrr\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 22:33:44 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/27 13:03:54 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* send the top element of the stack to the bottom */
static void	rotate(t_stack **stack)
{
	t_stack	*temp;
	t_stack	*tail;

	temp = *stack;
	*stack = (*stack)->next;
	tail = get_last_element(*stack);
	temp->next = NULL;
	tail->next = temp;
}

/* rotate a */
void	ra(t_stack **a_stack)
{
	rotate(a_stack);
	ft_putstr("ra\n");
}

/* rotate b */
void	rb(t_stack **b_stack)
{
	rotate(b_stack);
	ft_putstr("rb\n");
}

/* ra and rb at the same time*/
void	rr(t_stack **a_stack, t_stack **b_stack)
{
	rotate(a_stack);
	rotate(b_stack);
	ft_putstr("rr\n");
}

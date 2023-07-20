/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:25:07 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/20 22:52:48 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* push the top element of src stack to the top of dest stack */
static void	push(t_stack **source, t_stack **destination)
{
	t_stack	*temp;

	if (!*source)
		return ;
	temp = (*source)->next;
	(*source)->next = *destination;
	*destination = *source;
	*source = temp;
}

/* push top b to a */
void	pa(t_stack **a_stack, t_stack **b_stack)
{
	push(b_stack, a_stack);
	ft_putstr("pa\n");
}

/* push top a to b */
void	pb(t_stack **a_stack, t_stack **b_stack)
{
	push(a_stack, b_stack);
	ft_putstr("pb\n");
}

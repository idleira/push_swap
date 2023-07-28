/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 18:25:07 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/27 13:02:11 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* push the top element of src stack to the top of dest stack */
static void	push(t_stack **src, t_stack **dest)
{
	t_stack	*temp;

	if (*src == NULL)
		return ;
	temp = (*src)->next;
	(*src)->next = *dest;
	*dest = *src;
	*src = temp;
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

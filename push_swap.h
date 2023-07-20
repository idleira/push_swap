/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:48:23 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/20 22:58:43 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>
# include <stdio.h>

typedef struct s_stack
{
	int				value;
	int				index;
	int				pos;
	int				target_pos;
	int				cost_a;
	int				cost_b;
	struct s_stack	*next;
}	t_stack;

void		ft_putstr(char *str);

t_stack		*get_last_element(t_stack *stack);
t_stack		*get_second_to_last(t_stack *stack);

static void	push(t_stack **source, t_stack **destination);
void		pa(t_stack **a_stack, t_stack **b_stack);
void		pb(t_stack **a_stack, t_stack **b_stack);

static void	swap(t_stack *stack);
void		sa(t_stack **a_stack);
void		sb(t_stack **b_stack);
void		ss(t_stack **a_stack, t_stack **b_stack);

static void	rotate(t_stack **stack);
void		ra(t_stack **a_stack);
void		rb(t_stack **b_stack);
void		rr(t_stack **a_stack, t_stack **b_stack);

static void	rev_rotate(t_stack **stack);
void		rra(t_stack **a_stack);
void		rrb(t_stack **b_stack);
void		rrr(t_stack **a_stack, t_stack **b_stack);

#endif
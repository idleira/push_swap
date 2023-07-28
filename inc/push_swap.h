/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:48:23 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/28 13:37:02 by ibeliaie         ###   ########.fr       */
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

/* input check */

int			check_input(char **argv);

int			is_sign(char c);
int			is_digit(char c);
int			compare_nbr_str(const char *s1, const char *s2);

/* initialize */

t_stack		*fill_stack(int argc, char **argv);
void		assign_index(t_stack *a_stack, int stack_size);

/* cost */

void		cheapest_move(t_stack **a_stack, t_stack **b_stack);
void		calculate_cost(t_stack **a_stack, t_stack **b_stack);

/* operations */

void		pa(t_stack **a_stack, t_stack **b_stack);
void		pb(t_stack **a_stack, t_stack **b_stack);

void		sa(t_stack **a_stack);
void		sb(t_stack **b_stack);
void		ss(t_stack **a_stack, t_stack **b_stack);

void		ra(t_stack **a_stack);
void		rb(t_stack **b_stack);
void		rr(t_stack **a_stack, t_stack **b_stack);

void		rrr(t_stack **a_stack, t_stack **b_stack);
void		rra(t_stack **a_stack);
void		rrb(t_stack **b_stack);

/* stack manipilations */
t_stack		*new_stack(int value);
t_stack		*get_last_element(t_stack *stack);
t_stack		*get_second_to_last(t_stack *stack);

int			stack_size(t_stack	*stack);
void		add_bottom(t_stack **stack, t_stack *new);

/* utility */
int			abs_val(int nb);
void		ft_putstr(char *str);
long int	ft_atoi(const char *str);
void		free_stack(t_stack **stack);

void		error_exit(t_stack **a_stack, t_stack **b_stack);

/* sorting */

void		sort_3(t_stack **stack);
int			is_sorted(t_stack *stack);
void		sort(t_stack **a_stack, t_stack **b_stack);

int			get_lowest_index_position(t_stack **stack);
void		get_target_position(t_stack **a_stack, t_stack **b_stack);
void		move(t_stack **a, t_stack **b, int cost_a, int cost_b);

#endif
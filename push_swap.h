/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:48:23 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/24 18:47:25 by ibeliaie         ###   ########.fr       */
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

/* utility */

void		free_stack(t_stack **stack);
void		ft_putstr(char *str);
int			is_sorted(t_stack *stack);
int			stack_size(t_stack	*stack);
void		add_bottom(t_stack **stack, t_stack *new);
void		error_exit(t_stack **stack_a, t_stack **stack_b);
t_stack		*new_stack(int value);
t_stack		*get_last_element(t_stack *stack);
t_stack		*get_second_to_last(t_stack *stack);

/* operations */

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

/* sorting */

void		sort_3(t_stack **stack);
static int	highest_index(t_stack *stack);

/* input */

int			is_sign(char c);
int			is_digit(char c);
int			compare_nbr_str(const char *s1, const char *s2);

static int	duplicates(char **argv);
static int	arg_is_zero(char *argv);
static int	arg_is_number(char *argv);
int			correct_input(char **argv);

#endif
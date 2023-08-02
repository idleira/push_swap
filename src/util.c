/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 22:56:51 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/08/02 05:06:12 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* return absolute value of a number */
int	abs_val(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}

/* print given string to standart output */
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

/* free each element in a given stack and set the stack pointer to NULL */
void	free_stack(t_stack **stack)
{
	t_stack	*temp;

	if (!stack || !(*stack))
		return ;
	while (*stack)
	{
		temp = (*stack)->next;
		free(*stack);
		*stack = temp;
	}
	*stack = NULL;
}

/* write error to the standard output after freeing */
void	error_exit(t_stack **a_stack, t_stack **b_stack)
{
	if (a_stack == NULL || *a_stack != NULL)
		free_stack(a_stack);
	if (b_stack == NULL || *b_stack != NULL)
		free_stack(b_stack);
	write(2, "Error\n", 6);
	exit (1);
}

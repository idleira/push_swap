/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:05:54 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/28 13:21:56 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* check if arguments are all numbers, without duplicates */
int	check_input(char **argv)
{
	int	i;
	int	nb_zeros;

	nb_zeros = 0;
	i = 1;
	while (argv[i])
	{
		if (!arg_is_number(argv[i]))
			return (0);
		nb_zeros += arg_is_zero(argv[i]);
		i++;
	}
	if (nb_zeros > 1)
		return (0);
	if (have_duplicates(argv))
		return (0);
	return (1);
}

/* check argument is a 0 */
static int	arg_is_zero(char *argv)
{
	int	i;

	i = 0;
	if (is_sign(argv[i]))
		i++;
	while (argv[i] && argv[i] == '0')
		i++;
	if (argv[i] != '\0')
		return (0);
	return (1);
}

/* check if argument is a number */
static int	arg_is_number(char *argv)
{
	int	i;

	i = 0;
	if (is_sign(argv[i]) && argv[i + 1] != '\0')
		i++;
	while (argv[i] && is_digit(argv[i]))
		i++;
	if (argv[i] != '\0' && !is_digit(argv[i]))
		return (0);
	return (1);
}

/* check if argument list has duplicate numbers */
static int	have_duplicates(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 1;
		while (argv[j])
		{
			if (j != i && compare_nbr_str(argv[i], argv[j]) == 0)
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

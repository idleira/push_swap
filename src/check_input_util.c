/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input_util.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibeliaie <ibeliaie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 18:05:57 by ibeliaie          #+#    #+#             */
/*   Updated: 2023/07/27 13:06:29 by ibeliaie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sign(char c)
{
	return (c == '+' || c == '-');
}

int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

/* compare 2 strings of digits to check if they are the same or not */
int	compare_nbr_str(const char *s1, const char *s2)
{
	int	i;
	int	j;

	i = 0;
	j = i;
	if (s1[i] == '+')
	{
		if (s2[j] != '+')
			i++;
	}
	else
	{
		if (s2[j] == '+')
			j++;
	}
	while (s1[i] != '\0' && s2[j] != '\0' && s1[i] == s2[j])
	{
		i++;
		j++;
	}
	return ((unsigned char)s1[i] - (unsigned char)s2[j]);
}

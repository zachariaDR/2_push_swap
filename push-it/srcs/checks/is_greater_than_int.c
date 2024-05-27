/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_greater_than_int.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:32:47 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 16:32:49 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* a function to check if the argument is greater than an int */
static int	is_greater(char *arg)
{
	return (ft_atoi(arg) < INT_MIN || ft_atoi(arg) > INT_MAX);
}

int	is_greater_than_int(char **av, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		if (is_greater(av[i]))
			return (1);
	return (0);
}

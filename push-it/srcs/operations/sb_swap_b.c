/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:34:41 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 16:34:43 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* sb: swap b - swap the first 2 elements at the top of stack b.
 * (do nothing if there is only one of no elements). */
void	sb_swap_b(t_stack *b, int flag)
{
	int	tmp;

	if (is_empty(b))
		return ;
	tmp = b->top->data;
	b->top->data = b->top->bellow->data;
	b->top->bellow->data = tmp;
	if (!flag)
		ft_putstr("sb\n");
}

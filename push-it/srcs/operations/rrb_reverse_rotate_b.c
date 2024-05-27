/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb_reverse_rotate_b.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:34:09 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 16:34:11 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* rrb: reverse rotate b - shift down all elements of stack b by 1.
 * the last one becomes the first one. */
void	rrb_reverse_rotate_b(t_stack *b, int flag)
{
	push_elem(b, new_elem(b->bottom->data));
	poop_elem(b);
	if (!flag)
		ft_putstr("rrb\n");
}

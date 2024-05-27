/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:33:38 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 16:33:39 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ra: rotate a - shift up all elements of stack a by 1.
 * the first element becomes the last one. */
void	ra_rotate_a(t_stack *a, int flag)
{
	push_elem_bottom(a, new_elem(a->top->data));
	pop_elem(a);
	if (!flag)
		ft_putstr("ra\n");
}

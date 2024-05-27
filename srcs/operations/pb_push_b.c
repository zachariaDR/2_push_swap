/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_push_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:33:32 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 16:33:34 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* pb: push b - take the first element of top of a and put it at the top of b.
 * (do nothing if a emepty). */
void	pb_push_b(t_stack *a, t_stack *b)
{
	if (is_empty(a))
		return ;
	push_elem(b, new_elem(a->top->data));
	pop_elem(a);
	ft_putstr("pb\n");
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_chep_moves.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:57:53 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 16:14:17 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_chep_moves(t_stack *a, t_stack *b, int push, int near)
{
	if (half(*a, push) == 0 && cost_to_top_up(*a, push) == cost_to_top_up(*b, near))
		rr_n(a, b, push);
	else if(half(*a, push) == 1 && cost_to_top_down(*a, push) == cost_to_top_down(*b, near))
		rrr_n(a, b, push);
	else
	{
		if (half(*a, push) == 0 && half(*b, near) == 0)
		{
			if (cost_to_top_up(*a, push) > cost_to_top_up(*b, near))
				(rr_n(b, a, push), ra_n(a, near));
			else
				(rr_n(b, a, push), rb_n(b, near));
		}
		else if(half(*a, push) == 1 && half(*b, near) == 1)
		{
			if (cost_to_top_down(*a, push) > cost_to_top_down(*b, near))
				(rrr_n(b, a, push), rra_n(a, near));
			else
				(rrr_n(b, a, push), rrb_n(b, near));
		}
		else if(half(*a, push) == 0 && half(*b, near) == 1)
			(ra_n(a, push), rrb_n(b, near));
		else if(half(*a, push) == 1 && half(*b, near) == 0)
			(ra_n(a, push), rrb_n(b, near));
	}
}

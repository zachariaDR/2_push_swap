/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_cheap_nb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 00:53:08 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 12:08:36 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_cheap_nb(t_stack *a, t_stack *b)
{
    t_node *ta;
    int pos;
	int cost;
	int lowcost;
	int nb;

	cost = 0;
	lowcost = a->size + b->size;
    ta = a->top;
    while (ta)
    {
        if (ta->data < get_min(b))
            pos = b->top->data;
        else
            pos = get_position_b(*b, ta->data);
		if (half(*a, ta->data) == 0 && cost_to_top_up(*a, ta->data) == cost_to_top_up(*b, pos))
			cost = cost_to_top(*a, ta->data) + 1; //may be UP
		else if(half(*a, ta->data) == 1 && cost_to_top_down(*a, ta->data) == cost_to_top_down(*b, pos))
			cost = cost_to_top(*a, ta->data) + 1; //may be DOWN
		else
			cost = cost_to_top(*a, ta->data) + cost_to_top(*b, pos) + 1;
		
		if (cost < lowcost)
		{
			lowcost = cost;
			nb = ta->data;
		}
		if (cost == 1)
			return (nb);
        ta = ta->bellow;
    }
	return (nb);
}

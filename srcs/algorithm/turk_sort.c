/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   turk_sort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 02:42:02 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 15:49:43 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	turk_sort(t_stack *a, t_stack *b)
{
	int push;
	int near;
	if (is_sorted(*a))
		return ;
	pb_push_b(a, b);
	pb_push_b(a, b);
	//printf("\n--STEP 1 --\n");
	//ft_print_stack(*a, 'A');
	//ft_print_stack(*b, 'B');
	//int i = 2;
	while(a->size > 3)
	{
		//printf("\n--STEP %d --\n", i++);
		push = find_cheap_nb(a, b);
		near = get_position_b(*b, push);
		do_chep_moves(a, b, push, near);
		pb_push_b(a, b);
		//printf("push-->%d above %d\n", push, near);
		//ft_print_stack(*a, 'A');
		//ft_print_stack(*b, 'B');
		//printf("\n________________________________\n");
	}
	sort_three(a);
	//printf("\n-- sort 3 start --\n");
	//ft_print_stack(*a, 'A');
	//ft_print_stack(*b, 'B');
	while(b->size > 0)
	{
		//printf("\n--STEP %d --\n", i++);
		near = get_position_a(*a, b->top->data);
		make_elem_top(a, near);
		//printf("push-->%d above %d\n", b->top->data, near);
		pa_push_a(a, b);
		//ft_print_stack(*a, 'A');
		//ft_print_stack(*b, 'B');
	}
	make_elem_top(a, get_min(a));
	//ft_print_stack(*a, 'A');
	//ft_print_stack(*b, 'B');
}

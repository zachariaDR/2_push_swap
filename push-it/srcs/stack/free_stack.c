/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:35:00 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 16:35:02 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* free_stack: a function to free everything before exiting */
void	free_stack(t_stack *stack)
{
	while (!is_empty(stack))
		pop_elem(stack);
	free(stack);
}

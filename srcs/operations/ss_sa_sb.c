/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_sa_sb.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 16:34:46 by zadriouc          #+#    #+#             */
/*   Updated: 2024/05/27 16:34:48 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ss: swap a and swap b at the same time. */
void	ss_sa_sb(t_stack *a, t_stack *b)
{
	sa_swap_a(a, true);
	sb_swap_b(b, true);
	ft_putstr("ss\n");
}

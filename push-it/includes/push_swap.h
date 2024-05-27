/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:12:46 by ael-khni          #+#    #+#             */
/*   Updated: 2024/05/27 12:01:49 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

/* -------- COLORS -------- */
# define RED "\033[0;31m"
# define GREEN "\033[0;32m"
# define YELLOW "\033[0;33m"
# define END "\033[0m"

enum e_bool{false, true};

typedef struct s_node
{
	int				data;
	struct s_node	*above;
	struct s_node	*bellow;
}	t_node;

typedef struct s_stack
{
	t_node	*top;
	t_node	*bottom;
	int		size;
}	t_stack;

/* ---- Stack Functions ---- */
t_stack	*stack_init(void);
t_node	*new_elem(int data);
void	push_elem(t_stack *stack, t_node *elem);
void	push_elem_bottom(t_stack *stack, t_node *elem);
void	pop_elem(t_stack *stack);
void	poop_elem(t_stack *stack);
void	free_stack(t_stack *stack);
void	ft_print_stack(t_stack a, char c);
int		is_elem_exist(t_stack a, int elem);

/* ---- Operations Functions ---- */
void	sa_swap_a(t_stack *a, int flag);
void	sb_swap_b(t_stack *b, int flag);
void	ss_sa_sb(t_stack *a, t_stack *b);
void	pa_push_a(t_stack *a, t_stack *b);
void	pb_push_b(t_stack *a, t_stack *b);
void	ra_rotate_a(t_stack *a, int flag);
void	rb_rotate_b(t_stack *a, int flag);
void	rr_ra_rb(t_stack *a, t_stack *b);
void	rra_reverse_rotate_a(t_stack *a, int flag);
void	rrb_reverse_rotate_b(t_stack *a, int flag);
void	rrr_rra_rrb(t_stack *a, t_stack *b);

/* ---- Checks Functions ---- */
void	get_input(t_stack *a, t_stack *b, char **av, int size);
void	put_error(char *msg);
int		is_sorted(t_stack stack);
int		is_empty(t_stack *stack);
int		is_duplicates(char **args, int size);
int		is_greater_than_int(char **av, int size);
int		is_integer(char **av, int size);

/* ---- Utils Functions ---- */
void	ft_putstr(char *str);
void	ft_swap(int *a, int *b);
long	ft_atoi(const char *str);
int		ft_strcmp(const char *s1, const char *s2);

/* ---- Algorithm Functions ---- */
void	sort_three(t_stack *a);
void	naive_sort(t_stack *a, t_stack *b);
void	turk_sort(t_stack *a, t_stack *b);

int		get_min(t_stack *stack);
int		get_max(t_stack *stack);
int 	half(t_stack x, int elem);
int		get_elem_index(t_stack a, int elem);
int 	cost_to_top(t_stack x, int elem);
int		cost_to_top_down(t_stack x, int elem);
int		cost_to_top_up(t_stack x, int elem);
void	do_chep_moves(t_stack *a, t_stack *b, int push, int near);
int		find_cheap_nb(t_stack *a, t_stack *b);
int		get_position_a(t_stack a, int elem);
int		get_position_b(t_stack b, int elem);
void		make_elem_top(t_stack *a, int near);
void	push_to_stack_a(t_stack *a, t_stack *b);
void	ra_n(t_stack *a, int elem);
void	rb_n(t_stack *b, int elem);
void	rra_n(t_stack *a, int elem);
void	rrb_n(t_stack *b, int elem);
void	rr_n(t_stack *a, t_stack *b, int elem);
void	rrr_n(t_stack *a, t_stack *b, int elem);

#endif
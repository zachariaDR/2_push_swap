/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 09:42:38 by ael-khni          #+#    #+#             */
/*   Updated: 2024/05/27 13:25:15 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <time.h>

#define MIN 0
#define MAX 499
#define RANGE (MAX - MIN + 1)

void shuffle(int *array, int n)
{
	int i;

	i = n - 1;
    while (i > 0) 
	{
        int j = rand() % (i + 1);
        int temp = array[i];
        array[i] = array[j];
        array[j] = temp;
		i--;
    }
}

// int	main(int ac, char **av)
// {
// 	t_stack	*a;
// 	t_stack	*b;

// 	if (ac == 1)
// 		exit (EXIT_FAILURE);
// 	a = stack_init();
// 	b = stack_init();
// 	get_input(a, b, av + 1, ac - 1);
// 	if (a->size == 3)
// 		sort_three(a);
// 	else if (a->size == 5)
// 		naive_sort(a, b);
// 	else
// 		turk_sort(a, b);
// 	free_stack(a);
// 	free_stack(b);
// 	exit (EXIT_SUCCESS);
// }

int main(void)
{
	int numbers[RANGE];
	int i;
	t_stack *a;
	t_stack *b;	

	a = stack_init();
	b = stack_init();

	i = -1;
	while (++i < RANGE)
        numbers[i] = MIN + i;
		
	srand(time(NULL));
	shuffle(numbers, RANGE);

	i = -1;
	while (++i < RANGE)
        push_elem(a, new_elem(numbers[i]));
		
	// push_elem(a, new_elem(2));
	// push_elem(a, new_elem(4));
	// push_elem(a, new_elem(1));
	// push_elem(a, new_elem(3));
	// push_elem(a, new_elem(5));
	

	// ft_print_stack(*a, 'A');
	// ft_print_stack(*b, 'B');
	if(!is_sorted(*a))
		turk_sort(a, b);
	// ft_print_stack(*a, 'A');
	// ft_print_stack(*b, 'B');
	
	// if (is_sorted(*a))
	// 	printf("\n--| stack is SUCCESSFULLY SORTED !! |--\n");
	// else
	// 	printf("\n--| stack is NOT SORTED !! |--\n");
		
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   large_numbers.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 22:19:42 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/03 03:32:16 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	max_nbr(t_slist *stack)
{
	int		max;

	max = stack->number;
	while (stack)
	{
		if (stack->number > max)
			max = stack->number;
		stack = stack->next;
	}
	return (max);
}

int	max_nbr_place(t_slist *stack_b)
{
	int		i;
	int		max;

	i = 0;
	max = max_nbr(stack_b);
	while (stack_b)
	{
		if (stack_b->number == max)
			return (i);
		i++;
		stack_b = stack_b->next;
	}
	return (i);
}

void	sort_b(t_slist **stack_a, t_slist **stack_b)
{
	int		size;

	size = ft_lstsize(*stack_b) - 1;
	while (*stack_b)
	{
		if ((*stack_b)->index == size && size >= 0)
		{
			pa(stack_a, stack_b, 0);
			size--;
		}
		else if (max_nbr_place(*stack_b) <= size / 2)
			rb(stack_b, 0);
		else if (max_nbr_place(*stack_b) > size / 2)
			rrb(stack_b, 0);
	}
}

static int    bad_distribution(t_slist *stack)
{
    t_slist            *ptr;
    int                diff_count;
    int                diff;
    int                size;

    size = ft_lstsize(stack);
    diff_count = 0;
    ptr = stack;
    while (ptr && ptr->next)
    {
        diff = ptr->index - ptr->next->index;
        if (diff == 2 || diff == 3 || diff == 4)
            diff_count++;
        ptr = ptr->next;
    }
    if (diff_count * 10 >= size * 6)
        return (1);
    return (0);
}

void	big_numbers(t_slist **stack_a, t_slist **stack_b, int div)
{
	int		i;
	int		j;
	
	i = 0;
	index_by_ascending_order(stack_a);
	while (*stack_a)
	{
		j = ft_lstsize(*stack_a) / div;
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b, 0);
			i++;
		}
		else if ((*stack_a)->index <= i + j)
		{
			pb(stack_a, stack_b, 0);
			rb(stack_b, 0);			
			i++;
		}
		else if (bad_distribution(*stack_a))
            rra(stack_a, 0);
		else
			ra(stack_a, 0);
	}
	sort_b(stack_a, stack_b);
}

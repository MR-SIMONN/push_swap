/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_nums.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/14 22:19:42 by moel-hai          #+#    #+#             */
/*   Updated: 2025/02/25 03:38:09 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	num_max(t_slist *stack)
{
	int		max;

	max = stack->number;
	while (stack)
	{
		if (max < stack->number)
			max = stack->number;
		stack = stack->next;
	}
	return (max);
}

int	max_index(t_slist *stack_b)
{
	int		max;
	int		index;

	max = num_max(stack_b);
	index = 0;
	while (stack_b)
	{
		if (max == stack_b->number)
			return (index);
		index++;
		stack_b = stack_b->next;
	}
	return (index);
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
		else if (max_index(*stack_b) > size / 2)
			rrb(stack_b, 0);
		else if (max_index(*stack_b) <= size / 2)
			rb(stack_b, 0);
	}
}

void	big_numbers(t_slist **stack_a, t_slist **stack_b, int div)
{
	int		i;
	int		j;

	i = 0;
	index_by_ascending_order(stack_a);
	while (*stack_a)
	{
		j = ft_lstsize(*stack_a) / div;// 25
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
		else
			ra(stack_a, 0);
	}
	sort_b(stack_a, stack_b);
}

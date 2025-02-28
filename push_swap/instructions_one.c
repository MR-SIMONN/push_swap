/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_one.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 04:01:12 by moel-hai          #+#    #+#             */
/*   Updated: 2025/02/28 01:11:45 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_slist **stack_a, int i)
{
	t_slist	*j;

	if (!(*stack_a))
		return ;
	else if ((*stack_a)->next == NULL)
		return ;
	j = *stack_a;
	*stack_a = (*stack_a)->next;
	j->next = (*stack_a)->next;
	(*stack_a)->next = j;
	if (i == 0)
		write(1, "sa\n", 3);
}

void	sb(t_slist **stack_b, int i)
{
	t_slist	*j;

	if (!(*stack_b))
		return ;
	else if ((*stack_b)->next == NULL)
		return ;
	j = *stack_b;
	*stack_b = (*stack_b)->next;
	j->next = (*stack_b)->next;
	(*stack_b)->next = j;
	if (i == 0)
		write(1, "sb\n", 3);
}

void	ss(t_slist **stack_a, t_slist **stack_b, int i)
{
	sa(stack_a, 1);
	sb(stack_b, 1);
	if (i == 0)
		write(1, "ss\n", 3);
}

void	pa(t_slist **stack_a, t_slist **stack_b, int i)
{
	t_slist	*j;

	if (!(*stack_b))
		return ;
	j = *stack_b;
	*stack_b = (*stack_b)->next;
	j->next = NULL;
	ft_lstadd_front(stack_a, j);
	if (i == 0)
		write(1, "pa\n", 3);
}

void	pb(t_slist **stack_a, t_slist **stack_b, int i)
{
	t_slist	*j;

	if (!(*stack_a))
		return ;
	j = (*stack_a);
	*stack_a = (*stack_a)->next;
	j->next = NULL;
	ft_lstadd_front(stack_b, j);
	if (i == 0)
		write(1, "pb\n", 3);
}

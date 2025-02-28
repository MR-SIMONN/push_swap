/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operations_two.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 04:01:30 by moel-hai          #+#    #+#             */
/*   Updated: 2025/02/28 03:44:59 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_slist **stack_a, int i)
{
	t_slist		*p;

	if (!(*stack_a))
		return ;
	else if ((*stack_a)->next == NULL)
		return ;
	p = *stack_a;
	ft_lstlast(*stack_a)->next = p;
	*stack_a = p->next;
	p->next = NULL;
	if (i == 0)
		write(1, "ra\n", 3);
}

void	rb(t_slist **stack_b, int i)
{
	t_slist		*p;

	if (!(*stack_b))
		return ;
	else if (!((*stack_b)->next))
		return ;
	p = *stack_b;
	ft_lstlast(*stack_b)->next = p;
	*stack_b = p->next;
	p->next = NULL;
	if (i == 0)
		write(1, "rb\n", 3);
}

void	rr(t_slist **stack_a, t_slist **stack_b, int i)
{
	ra(stack_a, 1);
	rb(stack_b, 1);
	if (i == 0)
		write(1, "rr\n", 3);
}

void	rra(t_slist **stack_a, int i)
{
	t_slist		*j;
	t_slist		*a;

	if (!(*stack_a))
		return ;
	else if ((*stack_a)->next == NULL)
		return ;
	a = *stack_a;
	j = lstbeforelast(*stack_a);
	*stack_a = j->next;
	j->next->next = a;
	j->next = 0;
	if (i == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_slist **stack_b, int i)
{
	t_slist		*j;
	t_slist		*a;

	if (!(*stack_b) || (*stack_b)->next == NULL)
		return ;
	a = *stack_b;
	j = lstbeforelast(*stack_b);
	*stack_b = j->next;
	j->next->next = a;
	j->next = 0;
	if (i == 0)
		write(1, "rrb\n", 4);
}

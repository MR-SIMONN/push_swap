/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_two_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:00:43 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/08 13:25:47 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_list **stack_a, int i)
{
	t_list		*p;

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

void	rb(t_list **stack_b, int i)
{
	t_list		*p;

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

void	rr(t_list **stack_a, t_list **stack_b)
{
	ra(stack_a, 1);
	rb(stack_b, 1);
	write(1, "rr\n", 3);
}

void	rra(t_list **stack_a, int i)
{
	t_list		*j;
	t_list		*p;

	if (!(*stack_a) || (*stack_a)->next == NULL)
		return ;
	p = *stack_a;
	j = next_to_last(*stack_a);
	*stack_a = j->next;
	j->next->next = p;
	j->next = 0;
	if (i == 0)
		write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b, int i)
{
	t_list		*j;
	t_list		*p;

	if (!(*stack_b) || (*stack_b)->next == NULL)
		return ;
	p = *stack_b;
	j = next_to_last(*stack_b);
	*stack_b = j->next;
	j->next->next = p;
	j->next = 0;
	if (i == 0)
		write(1, "rrb\n", 4);
}

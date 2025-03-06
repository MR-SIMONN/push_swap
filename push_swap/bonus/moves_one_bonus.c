/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_one_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 10:00:11 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/06 07:52:07 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_list **stack_a, int i)
{
	t_list	*p;

	if (!(*stack_a))
		return ;
	else if ((*stack_a)->next == NULL)
		return ;
	p = *stack_a;
	*stack_a = (*stack_a)->next;
	p->next = (*stack_a)->next;
	(*stack_a)->next = p;
	if (i == 0)
		write(1, "sa\n", 3);
}

void	pa(t_list **stack_a, t_list **stack_b, int i)
{
	t_list	*j;

	if (!(*stack_b))
		return ;
	j = *stack_b;
	*stack_b = (*stack_b)->next;
	j->next = NULL;
	ft_lstadd_front(stack_a, j);
	if (i == 0)
		write(1, "pa\n", 3);
}

void	pb(t_list **stack_a, t_list **stack_b, int i)
{
	t_list	*p;

	if (!(*stack_a))
		return ;
	p = *stack_a;
	*stack_a = (*stack_a)->next;
	p->next = NULL;
	ft_lstadd_front(stack_b, p);
	if (i == 0)
		write(1, "pb\n", 3);
}

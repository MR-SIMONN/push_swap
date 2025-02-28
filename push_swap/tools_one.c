/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 03:46:26 by moel-hai          #+#    #+#             */
/*   Updated: 2025/02/28 01:12:31 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	normal_indexing(t_slist *s)
{
	int		i;

	i = 0;
	while (s)
	{
		s->index = i;
		i++;
		s = s->next;
	}
}

t_slist	*min_node(t_slist **stack)
{
	int			first_time;
	t_slist		*head;
	t_slist		*min;

	first_time = 1;
	head = *stack;
	min = NULL;
	while (head)
	{
		if ((head->index == -1) && (first_time || head->number < min->number))
		{
			min = head;
			first_time = 0;
		}
		head = head->next;
	}
	return (min);
}

void	index_by_ascending_order(t_slist **s)
{
	int			i;
	t_slist		*head;

	i = 0;
	head = min_node(s);
	while (head)
	{
		head->index = i++;
		head = min_node(s);
	}
}

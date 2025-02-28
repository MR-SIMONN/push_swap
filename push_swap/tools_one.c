/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_one.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 03:46:26 by moel-hai          #+#    #+#             */
/*   Updated: 2025/02/28 03:34:45 by moel-hai         ###   ########.fr       */
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
	t_slist		*p;
	t_slist		*min;

	first_time = 1;
	p = *stack;
	min = NULL;
	while (p)
	{
		if ((p->index == -1) && (first_time || p->number < min->number))
		{
			min = p;
			first_time = 0;
		}
		p = p->next;
	}
	return (min);
}

void	index_by_ascending_order(t_slist **s)
{
	int			i;
	t_slist		*p;

	i = 0;
	p = min_node(s);
	while (p)
	{
		p->index = i++;
		p = min_node(s);
	}
}

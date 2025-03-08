/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   moves_list_stuff_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/07 15:30:20 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/08 10:43:19 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	free_moves(t_moves *s)
{
	t_moves	*p;

	while (s)
	{
		p = s->next;
		free (s->str);
		free(s);
		s = p;
	}
}

t_moves	*ft_moveslast(t_moves *lst)
{
	t_moves	*p;

	if (!lst)
		return (NULL);
	p = lst;
	while (p)
	{
		if (p-> next == NULL)
			return (p);
		p = p-> next;
	}
	return (p);
}

t_moves	*ft_moves_new(char *content)
{
	t_moves	*s;

	s = (t_moves *)malloc(sizeof(t_moves));
	if (!s)
    {
        free(content);
        errors(1);
    }
	s->str = ft_strdup(content);
	s->next = NULL;
	return (s);
}
void	ft_movesadd_back(t_moves **lst, t_moves *new)
{
	t_moves	*p;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	p = ft_moveslast(*lst);
	p->next = new;
}

void    make_moves(t_moves **moves, char *str)
{
	ft_movesadd_back(moves, ft_moves_new(str));
}

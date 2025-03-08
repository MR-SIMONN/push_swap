/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools_bonus.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 09:59:07 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/07 09:48:11 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	errors(int i)
{
	if (i == 1)
	{
		write(2, "Error\n", 6);
		exit (1);
	}
	exit (0);
}

void	free_stack(t_list *s)
{
	t_list	*p;

	while (s)
	{
		p = s->next;
		free(s);
		s = p;
	}
}

void	free_all(char **str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

t_list	*next_to_last(t_list *lst)
{
	while (lst)
	{
		if (!lst->next->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}

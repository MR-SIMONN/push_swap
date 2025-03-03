/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 03:46:01 by moel-hai          #+#    #+#             */
/*   Updated: 2025/02/28 19:45:59 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	duplicated_check(t_slist *stack_a)
{
	int			i;
	int			j;
	t_slist		*p;

	while (stack_a)
	{
		i = stack_a->number;
		j = 0;
		p = stack_a;
		while (p)
		{
			if (i == p->number)
				j++;
			if (j > 1)
				errors(1);
			p = p->next;
		}
		stack_a = stack_a->next;
	}
}

void	only_digits_check(char *s)
{
	int	i;

	i = 0;
	if (s[0] == '-' || s[0] == '+')
		i++;
	while (s[i])
	{
		if (!ft_isdigit(s[i]))
			errors(1);
		i++;
	}
}

void	is_it_valid(char *s)
{
	long	nb;
	int		i;
	char	**str;

	str = ft_split(s, ' ');
	i = 0;
	while (str[i])
	{
		nb = ft_atoi(str[i]);
		if (nb > INT32_MAX || nb < INT32_MIN)
			errors(1);
		only_digits_check(str[i]);
		i++;
	}
	free_all(str);
}

void	parsing(char **av)
{
	int		i;
	int		j;
	int		nbr;

	i = 1;
	while (av[i])
	{
		if (ft_strlen(av[i]) == 0)
			errors(1);
		is_it_valid(av[i]);
		nbr = 0;
		j = 0;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]))
				nbr = 1;
			j++;
		}
		if (nbr == 0)
			errors(1);
		i++;
	}
}

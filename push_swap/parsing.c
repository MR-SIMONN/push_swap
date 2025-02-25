/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 03:46:01 by moel-hai          #+#    #+#             */
/*   Updated: 2025/02/25 03:46:02 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

void	duplicated_check(t_slist *nums)
{
	int			i;
	int			j;
	t_slist		*head;
	t_slist		*tmp_list;

	head = nums;
	while (nums)
	{
		i = nums->number;
		j = 0;
		tmp_list = nums;
		while (tmp_list)
		{
			if (i == tmp_list->number)
				j++;
			if (tmp_list->number == i && j >= 2)
				errors(1);
			tmp_list = tmp_list->next;
		}
		nums = nums->next;
	}
	nums = head;
}

void	ft_check(char *s)
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
		ft_check(str[i]);
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
		is_it_valid(av[i]);
		nbr = 0;
		j = 0;
		if (ft_strlen(av[i]) == 0)
			errors(1);
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

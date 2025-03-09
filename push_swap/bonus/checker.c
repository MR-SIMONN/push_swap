/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 08:37:32 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/09 11:42:53 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"
#include "get_next_line/get_next_line.h"

int	is_sorted(t_list	*s)
{
	while (s)
	{
		if (s->next && s->number > s->next->number)
			return (0);
		s = s->next;
	}
	return (1);
}

t_list	*make_stack(char **av)
{
	int		i;
	char	*str;
	t_list	*result;
	char	**tmp;

	i = 1;
	str = NULL;
	result = NULL;
	while (av[i])
	{
		str = ft_strjoin(str, av[i]);
		if (av[i + 1])
			str = ft_strjoin(str, " ");
		i++;
	}
	tmp = ft_split(str, ' ');
	if (!tmp)
		return (free(str), NULL);
	i = 0;
	while (tmp[i])
	{
		ft_lstadd_back(&result, ft_lstnew(ft_atoi(tmp[i]), -1));
		i++;
	}
	return (free(str), free_all(tmp), result);
}

void	do_move(t_list **stack_a, t_list **stack_b, t_moves *moves)
{
	t_moves	*p;

	p = moves;
	while (moves)
	{
		apply_it(stack_a, stack_b, moves->str);
		moves = moves->next;
	}
	free_moves(p);
}

void	read_moves(t_list **stack_a, t_list **stack_b)
{
	int		i;
	char	*line;
	t_moves	*moves;

	i = 0;
	line = get_next_line(0);
	moves = NULL;
	while (line)
	{
		if (is_a_move(line))
		{
			free_stacks(stack_a, stack_b);
			free(line);
			errors(1);
		}
		if (*line != '\n' && *line != '\0')
			make_moves(&moves, line);
		free(line);
		line = get_next_line(0);
	}
	if (moves)
		do_move(stack_a, stack_b, moves);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	stack_a = NULL;
	stack_b = NULL;
	if (ac == 1)
		return (0);
	parsing(av);
	stack_a = make_stack(av);
	duplicated_check(stack_a);
	read_moves(&stack_a, &stack_b);
	if (is_sorted(stack_a) && ft_lstsize(stack_b) == 0)
	{
		free_stack(stack_a);
		write(1, "OK\n", 3);
		exit(0);
	}
	else
	{
		free_stacks(&stack_a, &stack_b);
		write(1, "KO\n", 3);
		exit(1);
	}
}

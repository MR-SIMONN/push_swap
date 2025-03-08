/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 08:37:32 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/08 09:15:48 by moel-hai         ###   ########.fr       */
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
	while (moves)
	{
		if ((ft_strcmp(moves->str, "sa\n") == 0))
			sa(stack_a, 1);
		else if ((ft_strcmp(moves->str, "pa\n") == 0))
			pa(stack_a, stack_b, 1);
		else if ((ft_strcmp(moves->str, "pb\n") == 0))
			pb(stack_a, stack_b, 1);
		else if ((ft_strcmp(moves->str, "ra\n") == 0))
			ra(stack_a, 1);
		else if ((ft_strcmp(moves->str, "rb\n") == 0))
			rb(stack_b, 1);
		else if ((ft_strcmp(moves->str, "rra\n") == 0))
			rra(stack_a, 1);
		else if ((ft_strcmp(moves->str, "rrb\n") == 0))
			rrb(stack_b, 1);
		else
		{
			free_stacks(*stack_a, *stack_b);
			free_moves(moves);
			errors(1);
		}
	}
	free_moves(moves);
}

void	read_moves(t_list **stack_a, t_list **stack_b)
{
	int	i;
	char	*line;
	t_moves	*moves;

	i = 0;
	line = get_next_line(0);
	moves = NULL;
	while (line)
	{
		make_moves(&moves, line);
		free(line);
		line = get_next_line(0);
	}
	do_move(stack_a, stack_b, moves);
}

int	main(int ac, char **av)
{
	t_list	*stack_a;
	t_list	*stack_b;

	
	if (ac == 1)
		return (0);
	if (ac > 1)
	{
		parsing(av);
		stack_a = make_stack(av);
		duplicated_check(stack_a);
		read_moves(&stack_a, &stack_b);
		if (is_sorted(stack_a) && ft_lstsize(stack_b) == 0)
		{
			free_stacks(stack_a, stack_b);
			write(1, "OK\n", 3);
			exit(0);
		}
		else
		{
			free_stacks(stack_a, stack_b);
			write(1, "KO\n", 3);
			exit(1);
		}
	}
}

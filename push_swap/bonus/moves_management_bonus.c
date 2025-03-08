/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_a_move_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 13:57:35 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/08 14:00:33 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int is_a_move(char *line)
{
    		if ((ft_strcmp(line, "sa\n") == 0))
			return (0);
		else if ((ft_strcmp(line, "sb\n") == 0))
			return (0);
		else if ((ft_strcmp(line, "ss\n") == 0))
			return (0);
		else if ((ft_strcmp(line, "pa\n") == 0))
			return (0);
		else if ((ft_strcmp(line, "pb\n") == 0))
			return (0);
		else if ((ft_strcmp(line, "ra\n") == 0))
			return (0);
		else if ((ft_strcmp(line, "rb\n") == 0))
			return (0);
		else if ((ft_strcmp(line, "rr\n") == 0))
			return (0);
		else if ((ft_strcmp(line, "rra\n") == 0))
			return (0);
		else if ((ft_strcmp(line, "rrb\n") == 0))
			return (0);
		else if ((ft_strcmp(line, "rrr\n") == 0))
			return (0);
		else
            return (1);
}
void	apply_it(t_list **stack_a, t_list **stack_b, char *str)
{
			if ((ft_strcmp(str, "sa\n") == 0))
			sa(stack_a, 1);
		else if ((ft_strcmp(str, "sb\n") == 0))
			sb(stack_b, 1);
		else if ((ft_strcmp(str, "ss\n") == 0))
			ss(stack_a, stack_b);
		else if ((ft_strcmp(str, "pa\n") == 0))
			pa(stack_a, stack_b, 1);
		else if ((ft_strcmp(str, "pb\n") == 0))
			pb(stack_a, stack_b, 1);
		else if ((ft_strcmp(str, "ra\n") == 0))
			ra(stack_a, 1);
		else if ((ft_strcmp(str, "rb\n") == 0))
			rb(stack_b, 1);
		else if ((ft_strcmp(str, "rr\n") == 0))
			rr(stack_a,stack_b);
		else if ((ft_strcmp(str, "rra\n") == 0))
			rra(stack_a, 1);
		else if ((ft_strcmp(str, "rrb\n") == 0))
			rrb(stack_b, 1);
		else if ((ft_strcmp(str, "rrr\n") == 0))
			rrr(stack_a, stack_b);
}

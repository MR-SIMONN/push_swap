/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_two.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 04:01:22 by moel-hai          #+#    #+#             */
/*   Updated: 2025/02/25 04:01:23 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "push_swap.h"

void	rrr(t_slist **stack_a, t_slist **stack_b, int i)
{
	rra(stack_a, 1);
	rrb(stack_b, 1);
	if (i == 0)
		write(1, "rrr\n", 4);
}

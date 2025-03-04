/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 03:46:14 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/04 00:44:46 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "libft.h"

void	duplicated_check(t_slist *nums);
void	sa(t_slist **stack_a, int i);
void	pa(t_slist **stack_a, t_slist **stack_b, int i);
void	pb(t_slist **stack_a, t_slist **stack_b, int i);
void	ra(t_slist **stack_a, int i);
void	rb(t_slist **stack_b, int i);
void	errors(int i);
void	parsing(char **av);
void	free_all(char **str);
void	sort_it(t_slist **stack_a, t_slist **stack_b);
int		is_sorted(t_slist	*s);
void	rra(t_slist **stack_a, int i);
void	rrb(t_slist **stack_b, int i);
void	large_numbers(t_slist **stack_a, t_slist **stack_b, int div);
t_slist	*lstbeforelast(t_slist *lst);
void	index_by_ascending_order(t_slist **stack);
t_slist	*min_node(t_slist **stack);
void	sort_three(t_slist **stack_a);
void	sort_four(t_slist **stack_a, t_slist **stack_b);
int		min_place(t_slist *stack, int min_node);
void	sort_five(t_slist **stack_a, t_slist **stack_b);
int		min_nbr_index(t_slist *stack, int in);
void	normal_indexing(t_slist *stack);
void	free_stack(t_slist *st);

#endif

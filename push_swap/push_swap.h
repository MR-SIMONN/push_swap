/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 03:46:14 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/05 02:12:40 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include "libft.h"

void	duplicated_check(t_list *nums);
void	sa(t_list **stack_a, int i);
void	pa(t_list **stack_a, t_list **stack_b, int i);
void	pb(t_list **stack_a, t_list **stack_b, int i);
void	ra(t_list **stack_a, int i);
void	rb(t_list **stack_b, int i);
void	errors(int i);
void	parsing(char **av);
void	free_all(char **str);
void	sort_it(t_list **stack_a, t_list **stack_b);
int		is_sorted(t_list	*s);
void	rra(t_list **stack_a, int i);
void	rrb(t_list **stack_b, int i);
void	large_numbers(t_list **stack_a, t_list **stack_b, int div);
t_list	*lstbeforelast(t_list *lst);
void	index_by_ascending_order(t_list **stack);
t_list	*min_node(t_list **stack);
void	sort_three(t_list **stack_a);
void	sort_four(t_list **stack_a, t_list **stack_b);
int		min_place(t_list *stack, int min_node);
void	sort_five(t_list **stack_a, t_list **stack_b);
int		min_nbr_index(t_list *stack, int in);
void	normal_indexing(t_list *stack);
void	free_stack(t_list *st);

#endif

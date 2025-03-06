/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/05 08:35:00 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/06 07:56:14 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <limits.h>

typedef struct s_list
{
	int				number;
	struct s_list	*next;
	int				index;
}	t_list;

void	sa(t_list **stack_a, int i);
void	pa(t_list **stack_a, t_list **stack_b, int i);
void	pb(t_list **stack_a, t_list **stack_b, int i);
void	ra(t_list **stack_a, int i);
void	rb(t_list **stack_b, int i);
void	rra(t_list **stack_a, int i);
void	rrb(t_list **stack_b, int i);
void	parsing(char **av);
void	duplicated_check(t_list *nums);
void	errors(int i);
int		is_sorted(t_list	*s);
t_list	*next_to_last(t_list *lst);
void	free_stack(t_list *st);
void	free_all(char **str);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_isdigit(int c);
long	ft_atoi(const char *str);
size_t	ft_strlen(const char *str );
char	*ft_strdup(const char *s1);
t_list	*ft_lstnew(int content, int i);
int		ft_lstsize(t_list *lst);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
t_list	*ft_lstlast(t_list *lst);
char	*ft_strjoin(char const *s1, char const *s2);
char	**ft_split(char const *s, char c);

#endif

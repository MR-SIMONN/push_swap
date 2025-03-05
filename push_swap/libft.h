/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 03:45:43 by moel-hai          #+#    #+#             */
/*   Updated: 2025/03/05 02:13:00 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_list
{
	int				number;
	struct s_list	*next;
	int				index;
}	t_list;

int			ft_isdigit(int c);
long long	ft_atoi(const char *str);
size_t		ft_strlen(const char *str );
char		*ft_strdup(const char *s1);
t_list		*ft_lstnew(int content, int i);
int			ft_lstsize(t_list *lst);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstadd_back(t_list **lst, t_list *new);
t_list		*ft_lstlast(t_list *lst);
char		*ft_strjoin(char const *s1, char const *s2);
char		**ft_split(char const *s, char c);

#endif

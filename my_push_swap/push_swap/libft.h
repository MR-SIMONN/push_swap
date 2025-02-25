/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 03:45:43 by moel-hai          #+#    #+#             */
/*   Updated: 2025/02/25 03:45:44 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <fcntl.h>
# include <stdio.h>

typedef struct s_slist
{
	int				number;
	struct s_slist	*next;
	int				index;
}	t_slist;

int			ft_isdigit(int c);
long long	ft_atoi(const char *str);
size_t		ft_strlen(const char *str );
char		*ft_strdup(const char *s1);
char		*ft_substr(char const *s, unsigned int start, size_t len);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memmove(void *dst, const void *src, size_t len);
t_slist		*ft_lstnew(int content, int i);
int			ft_lstsize(t_slist *lst);
void		ft_lstadd_front(t_slist **lst, t_slist *new);
void		ft_lstadd_back(t_slist **lst, t_slist *new);
t_slist		*ft_lstlast(t_slist *lst);
char		*ft_strjoin(char const *s1, char const *s2);
char		**ft_split(char const *s, char c);

#endif

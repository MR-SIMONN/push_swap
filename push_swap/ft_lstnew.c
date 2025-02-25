/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 04:33:45 by moel-hai          #+#    #+#             */
/*   Updated: 2025/02/25 04:33:47 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_slist	*ft_lstnew(int content, int i)
{
	t_slist	*s;

	s = (t_slist *)malloc(sizeof(t_slist));
	if (!s)
		return (0);
	s->number = content;
	s->index = i;
	s->next = NULL;
	return (s);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: moel-hai <moel-hai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 04:33:35 by moel-hai          #+#    #+#             */
/*   Updated: 2025/02/25 04:33:37 by moel-hai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_slist	*ft_lstlast(t_slist *lst)
{
	t_slist	*p;

	if (!lst)
		return (NULL);
	p = lst;
	while (p)
	{
		if (p-> next == NULL)
			return (p);
		p = p-> next;
	}
	return (p);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstfind.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <acoulomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 15:43:33 by acoulomb          #+#    #+#             */
/*   Updated: 2018/05/04 15:43:35 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstfind(const t_list *lst, void *data,
							int (*f_cmp)(const void *d1, const void *d2))
{
	t_list *iter;

	iter = (t_list*)lst;
	while (iter)
	{
		if ((*f_cmp)(iter->content, data) == 0)
		{
			return (iter);
		}
		iter = iter->next;
	}
	return (NULL);
}

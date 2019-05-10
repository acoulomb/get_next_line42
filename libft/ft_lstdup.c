/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <acoulomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 15:43:25 by acoulomb          #+#    #+#             */
/*   Updated: 2018/05/04 15:43:27 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstdup(const t_list *link)
{
	t_list *new;

	if (link == NULL)
		return (NULL);
	new = ft_lstnew(link->content, link->content_size);
	if (new == NULL)
		return (NULL);
	return (new);
}

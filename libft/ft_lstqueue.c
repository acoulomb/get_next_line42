/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstqueue.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <acoulomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/04 15:43:59 by acoulomb          #+#    #+#             */
/*   Updated: 2018/05/04 15:44:01 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstqueue(t_list **alst, t_list *new)
{
	if (alst)
	{
		while (*alst)
			alst = &(*alst)->next;
		*alst = new;
	}
}

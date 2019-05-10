/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acoulomb <acoulomb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/23 15:56:03 by acoulomb          #+#    #+#             */
/*   Updated: 2018/05/04 14:37:10 by acoulomb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "./libft/libft.h"
# include <unistd.h>

# define BUFF_SIZE 100

typedef struct	s_multifd
{
	int		fd;
	char	buf[BUFF_SIZE + 1];
	size_t	ibuf;
}				t_multifd;

int				get_next_line(const int fd, char **line);

#endif

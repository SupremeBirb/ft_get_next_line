/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 12:39:53 by lelee             #+#    #+#             */
/*   Updated: 2019/08/31 00:51:08 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_GET_NEXT_LINE_H
# define FT_GET_NEXT_LINE_H
# define BUFF_SIZE 32
# define FD_LIMIT 8192
# define GNL_MACRO 	char buff[BUFF_SIZE + 1]; int ret; char *tmp; char *ch; 

# include "libft/libft.h"
# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

int				get_next_line(const int fd, char **line);

#endif

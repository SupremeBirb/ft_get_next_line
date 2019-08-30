/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lelee <lelee@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 12:40:07 by lelee             #+#    #+#             */
/*   Updated: 2019/08/29 23:00:07 by lelee            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int				get_next_line(const int fd, char **line)
{
	static char **str[FD_LIMIT];
	int			size;
	char		buf[BUFF_SIZE + 1];
	char		*temp;

	// ft_memset(buf, 0, BUFF_SIZE);
	if (fd < 0 || !line || fd > FD_LIMIT - 1 || read(fd, buf, 0) == -1)
		return (-1);
	temp = ft_strnew(0);
	while ((size = read(fd, buf, BUFF_SIZE)) > 0) //  Reading whole file
	{
		buf[size] = '\0';
		temp = ft_strjoin(temp, buf);
	}
	if (!str[fd])
		str[fd] = ft_strsplit(temp, '\n');
	return ((*line = *str[fd]++) ? 1 : 0);
}

int read_line()

int	get_next_line(const int fd, char **line)
{
	static char *str[FD_LIMIT];
	int size;
	char buff[BUFF_SIZE + 1];
	char *tmp;

	if (fd < 0 || !line || fd > FD_LIMIT || read(fd, buff, 0) == -1)
		return (-1);
	return (read_line(&str[fd], fd, line));
}

// int			main(int ac, char **av)
// {
// 	int		fd;
// 	char	*str;
// 	int		tst;

// 	if (ac != 2)
// 	{
// 		ft_putendl("Usage: ./gnl filename");
// 		return (0);
// 	}
// 	fd = open(av[1], O_RDONLY);
// 	while ((tst = get_next_line(fd, &str)) > 0)
// 		printf("String: %s\n", str);
// 	return (0);
// }

/*
** 	read:
** 	-   From the file indicated by the file descriptor fd, the read() function
** 		reads cnt bytes of input into the memory area indicated by buf. A
** 		successful read() updates the access time for the file.
**
** 	Syntax in C language
** 		--- size_t read (int fd, void* buf, size_t cnt);
**
** 	Parameters
** 		- fd: file descripter
** 		- buf: buffer to read data from
** 		- cnt: length of buffer
**
** 	Returns: How many bytes were actually read
** 		- return Number of bytes read on success
** 		- return 0 on reaching end of file
** 		- return -1 on error
** 		- return -1 on signal interrupt
**
** 	Important points:
** 	- 	buf needs to point to a valid memory location with length not
**		smaller than the specified size because of overflow.
**
** 	-	fd should be a valid file descriptor returned from open() to
**		perform read operation because if fd is NULL then read
**		should generate error.
**
** 	- 	cnt is the requested number of bytes read, while the return value
**		is the actual number of bytes read. Also, some times read system call
**		should read less bytes than cnt.
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.t      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 21:45:18 by hsari             #+#    #+#             */
/*   Updated: 2025/07/10 21:45:18 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>

// static void *gnl_left(char *left, ssize_t read_size, char *ft_read, size_t i)
// {
	
// }

char	*get_next_line(int fd)
{
	char	*ft_read;
	char	*line;
	static char	*left = NULL; 
	ssize_t	read_size;
	size_t		i;
	
	ft_read = malloc(sizeof(char) * BUFFER_SIZE + 1);
	if (!ft_read)
		return (NULL);
	line = left;
	read_size = 1;
	while (ft_strchr('\n', line) == NULL && read_size > 0)
	{
		read_size = read(fd, ft_read, BUFFER_SIZE);
		i = 0;
		while (ft_read[i] && ft_read[i] != '\n' && i < read_size)
			i++;
		if (ft_read[i] == '\n')
			i++;
		line = ft_strjoin(line, ft_read, i);
	}
	if (!ft_strchr('\n', left) && BUFFER_SIZE > read_size)
	{
		left = NULL;
	}
	 else 
		left = ft_substr(ft_read, i, ft_strlen(ft_read) - 1);
	if (!left)
		return (NULL);
	return (line);
}


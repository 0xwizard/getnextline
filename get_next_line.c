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

char	*get_next_line(int fd)
{
	char	*ft_read;
	char	*line;
	static char	*left = NULL;
	ssize_t	read_size;
	ssize_t		i;
	
	if (fd < 0 && BUFFER_SIZE <= 0)
		return (NULL);
	ft_read = calloc(sizeof(char), BUFFER_SIZE + 1);
	if (!ft_read)
		return (NULL);
	line = left;
	read_size = 1;
	while (!ft_strchr('\n', line) && read_size > 0)
	{
		read_size = read(fd, ft_read, BUFFER_SIZE);
		line = ft_strjoin(line, ft_read, read_size);
	}
	i = 0;
	while (line[i] && line[i] != '\n')
		i++;
	if (line[i] == '\n')
		i++;
	left = ft_substr(line, i, ft_strlen(line) - 1);
	line[i] = '\0';
	if (*line == '\0')
		return (NULL);
	return (line);
}

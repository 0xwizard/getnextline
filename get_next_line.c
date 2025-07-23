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
#include <stdlib.h>

void	next_line(char **line, char **left)
{
	int i;

	i = 0;
	while ((*line)[i] && (*line)[i] != '\n')
		i++;
	if ((*line)[i] == '\n')
	{
		i++;
		free(*left);
		(*left) = ft_substr((*line), i, ft_strlen((*line)) - 1);
		(*line)[i] = '\0';
	}
	else
	{
		free(*left);
		(*left) = NULL;
	}
	if ((*line) && (*line)[0] == '\0')
	{
		free(*line);
		(*line) = NULL;
	}
}

char	*get_next_line(int fd)
{
	char		*ft_read;
	char		*line;
	char		*temp;
	static char	*left;
	ssize_t		read_size;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	ft_read = ft_calloc(sizeof(char), (BUFFER_SIZE + 1));
	if (!ft_read)
		return (NULL);
	line = ft_substr(left, 0, ft_strlen(left) - 1);
	read_size = 1;
	while (!ft_strchr('\n', line) && read_size > 0)
	{
		read_size = read(fd, ft_read, BUFFER_SIZE);
		temp = ft_strjoin(line, ft_read, read_size);
		if (line != left)
			free(line);
		line = temp;
	}
	free(ft_read);
	next_line(&line, &left);
	return (line);
}

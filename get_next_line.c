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
	int		i;
	
	ft_read = malloc(sizeof(char) * BUFFER_SIZE);
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
	left = ft_substr(ft_read, i, ft_strlen(ft_read) - 1);
	return (line);
}

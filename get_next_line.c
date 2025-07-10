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

char	*get_next_line(int fd)
{
	char	*ft_read;
	ssize_t	read_size;
	int		i;
	int		j;

	ft_read = malloc(sizeof(char *) * BUFFER_SIZE);
	if (!ft_read)
		return (NULL);
	read_size = read(fd, *ft_read, BUFFER_SIZE);
	i = 0;
	while (ft_read[i] != '\n' && i < read_size)
		i++;
	if (ft_read == '\n')
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.t      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 17:33:35 by hsari             #+#    #+#             */
/*   Updated: 2025/07/10 17:33:36 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 420
# endif

# include <stdlib.h>
# include <unistd.h>

int		ft_strlen(const char *p);
char	*ft_strjoin(char *s1, char *s2, size_t index);
char	*ft_strchr(char c, char *p);
char	*ft_substr(char *p, size_t start, size_t end);
char	*get_next_line(int fd);
void	*ft_calloc(size_t nmemb, size_t size);
void    next_line(char **line, char **left);

#endif

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hsari <hsari@student.42istanbul.com.t      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 21:52:23 by hsari             #+#    #+#             */
/*   Updated: 2025/07/10 21:52:23 by hsari            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// strjoin - substr -- strlen -- strchr 

int	ft_strlen(const char *p)
{
	int	i;
	if (!p)
		return (0);
	i = 0;
	while (p[i])
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2, size_t index)
{
	char	*new;
	int		i;
	int		j;

	new = malloc(ft_strlen(s1) + index + 1); // +2 \n - '\0' ?
	if (!new)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] && j < index)
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0'; // i+1 null 
	if (s1)
		free(s1);
	return (new);
}
char *ft_strchr(char c, char *p)
{
	int i;

	i = 0;
	if (!p)
		return (NULL);
	while(p[i])
	{
		if (p[i] == c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}

char *ft_substr(char *p, size_t start, size_t end)
{
	char *new;
	int i; 
	
	new = malloc(sizeof(char) * (end - start + 1));
	end = ft_strlen(p) - 1;
	if (!new)
		return (NULL);
	i = 0;
	while (p[start] && start <= end)
	{
		new[i] = p[start];
		start++;
		i++;
	}
	new[i] = '\0';
	return (new);
}

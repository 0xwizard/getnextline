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

#include "get_next_line_bonus.h"

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
	size_t	i;
	size_t	j;

	new = ft_calloc(ft_strlen(s1) + index + 2, 1);
	if (!new)
		return (NULL);
	i = 0;
	while (s1 && s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2 && s2[j] && j < index)
	{
		new[i] = s2[j];
		i++;
		j++;
	}
	new[i] = '\0';
	return (new);
}
char	*ft_strchr(char c, char *p)
{
	int	i;

	i = 0;
	if (!p)
		return (NULL);
	while (p[i])
	{
		if (p[i] == c)
			return (&p[i]);
		i++;
	}
	return (NULL);
}

char	*ft_substr(char *p, size_t start, size_t end)
{
	char	*new;
	size_t	i;

	if (!p || !p[start])
		return (NULL);
	new = ft_calloc(sizeof(char) , (end - start + 2));
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

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	char	*str;
	size_t	i;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	str = (char *)ptr;
	i = 0;
	while (i < nmemb * size)
	{
		str[i] = '\0';
		i++;
	}
	return (ptr);
}

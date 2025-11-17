/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:16:02 by paapahid          #+#    #+#             */
/*   Updated: 2025/11/13 23:12:41 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static size_t	ft_strlen_gnl(const char *str, char c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	*ft_strdup_gnl(char *str, char c)
{
	char	*dup;
	int		i;
	int		len;

	if (!str)
	{
		dup = malloc(1);
		if (!dup)
			return (NULL);
		dup[0] = '\0';
		return (dup);
	}
	len = ft_strlen_gnl(str, c);
	dup = malloc(len * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

int	ft_complete_line(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strjoin(char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	size_t	i;
	char	*res;

	len1 = ft_strlen_gnl(s1, '\0');
	len2 = ft_strlen_gnl(s2, '\0');
	i = 0;
	res = realloc(s1, len1 + len2 + 1);
	if (!res)
	{
		if (s1)
			free(s1);
		return (NULL);
	}

	if (len2 > 0)
	{
		while (i < len2)
		{
			res[len1 + i] = s2[i];
			i++;
		}
	}
	res[len1 + len2] = '\0';
	return (res);
}



char	*ft_getline_gnl(char **str)
{
	char	*line;
	char	*rest;
	size_t	len;
	size_t	i;

	if (!str || !*str)
		return (NULL);
	i = 0;
	len = ft_strlen_gnl(*str, '\n');
	line = malloc(len + 2);
	if (!line)
		return (NULL);
	while (i < len)
	{
		line[i] = (*str)[i];
		i++;
	}
	if ((*str)[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	rest = ft_strdup_gnl(*str + i, '\0');
	if (!rest)
	{
		free(*str);
		*str = NULL;
		return (line);
	}
	free(*str);
	*str = rest;
	if (*str && **str == '\0')
	{
		free(*str);
		*str = NULL;
	}
	return (line);
}


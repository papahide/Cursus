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

static size_t	ft_strlen(char *str, char c)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

static char	*ft_strdup(char *str, char c)
{
	char	*dup;
	int		i;
	int		len;

	if (!str)
		return (NULL);
	len = ft_strlen(str, c);
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

char	*ft_strjoin(char *s1, char *s2)
{
	size_t	i;
	size_t	j;
	char	*joined;

	i = 0;
	j = 0;
	joined = malloc(ft_strlen(s1, '\0') + ft_strlen(s2, '\0') + 1);
	if (!joined)
		return (NULL);
	while (i < ft_strlen(s1, '\0'))
	{
		joined[i] = s1[i];
		i++;
	}
	while (j < ft_strlen(s2, '\0'))
	{
		joined[i + j] = s2[j];
		j++;
	}
	joined[i + j] = '\0';
	if (s1)
		free(s1);
	return (joined);
}

char	*ft_getline(char **str)
{
	char	*line;
	char	*rest;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(*str, '\n');
	line = malloc(len + 2);
	if (!line)
		return (NULL);
	while (i < len)
	{
		line[i] = (*str)[i];
		i++;
	}
	if ((*str)[i] && (*str)[i] == '\n')
	{
		line[i] = '\n';
		i++;
	}
	line[i] = '\0';
	rest = ft_strdup(*str + i, '\0');
	free(*str);
	*str = rest;
	if (*str && **str == '\0')
	{
		free(*str);
		*str = NULL;
	}
	return (line);
}

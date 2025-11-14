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

static int	ft_strlen(char *str, char c)
{
	int	i;

	i = 0;
	if (!str) 
		return (0);
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

char *ft_strdup(char *str, char c)
{
	char	*dup;
	int		i;
	int		size;

	if (!str)
		return (NULL);
	i = 0;
	size = ft_strlen(str, c);
	dup = malloc(size * sizeof(char) + 1);
	while (str[i] && str[i] != c)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return(dup);
}

int	ft_complete_line(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (!str) 
		return (0);
	while (str[i])
	{
		if (str[i] == '\n')
			return (1);
		i++;
	}
	if (j == 0)
		return (0);
}

char *ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*joined;

	i = 0;
	j = 0;
	joined = malloc(ft_strlen(s1, '\0') + ft_strlen(s2, '\0') + 1);
	while (s1[i])
	{
		joined[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		joined[i + j] = s2[j];
		j++; 
	}
	joined[i + j] = '\0';
	free(s1);
	return (joined);
}

char *ft_getline(char *str)
{
	char	*line;
	char	*rest;
	int		i;

	i = 0;
	line = malloc(ft_strlen(str, '\n') * sizeof(char) + 2);
	while (str[i] != '\n')
	{
		line[i] = str[i];
		i++;
	}
	line[i] = '\n';
	i++;
	line[i] = '\0';
	rest = ft_strdup(&str[i], '\0');
	free(str);
	return (line);
}

char *ft_newline(int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*line;

	if (!fd)
    return (NULL);
	return (line);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:16:04 by paapahid          #+#    #+#             */
/*   Updated: 2025/11/13 22:56:32 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_line_len(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while(str[i] && str[i] != '\n')
		i++;
	if (str[i] != '\n')
		i++;
	return(i);
}

char *ft_strjoin(char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*joined;

	i = 0;
	j = 0;
	joined = malloc(ft_line_len(s1) + ft_line_len(s2) + 1);
	if (!joined)
		return ;
	if (s1)
	{
		while (s1[i])
		{
			joined[j] = s1[i];
			j++;
			i++;
		}
		free(s1);
	}
	i = 0;
	while (s2[i] && s2[i] != '\n')
	{
		joined[j] = s2[i];
		j++;
		i++;
	}
	joined[j] = '\0';
	return (joined);
}

int	ft_line_end(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] != '\n')
		return (0);
	else
		return (1);
}



char *ft_newl(int fd)
{
	char	buffer[BUFFER_SIZE + 1];
	char	*line;
	int		i;
	int		len;
	int		line_end;
	int		r;

	i = 0;
	line_end = 1;
	line = NULL;
	while (line_end != 0)
	{
		if ()
		r = read(fd, buffer, BUFFER_SIZE);
		if (r < 0)
			return NULL;
		line_end = ft_line_end(buffer);
		if (r == 0)
			line_end = 0;
		buffer[r] = '\0';
		line = ft_strjoin(line, buffer);
	}
	return (line);
}



char	*get_next_line(int fd)
{
	static char	*rest;
	char		*line;
	int			l;

	if (fd < 0)
		return (NULL);
	if (!rest)
		return (ft_newline(fd, rest));
	// Resto tiene línea incompleta = 0
	// Resto tiene línea completa = 1
	l = ft_complete_line(rest);
	if (l == 0)
	{
		line = ft_strjoin(rest, ft_newline(fd, rest));
	}
	else
		line = ft_getline(rest);
	return (line);
}



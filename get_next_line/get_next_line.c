/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:16:04 by paapahid          #+#    #+#             */
/*   Updated: 2025/11/19 20:24:24 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char *ft_complete_line(char *rest)
{
	char	*line;
	int 	i;

	i = 0;
	if (!rest)
		return (NULL);
	while (rest[i] && rest[i] == '\n')
		i++;
	if (rest[i] == '\n')
		i++;
	line = ft_substr_gnl(rest, 0, i);
	return (line);
}

static char	*ft_clean_rest(char *rest)
{
	char	*clean;
	int		i;

	i = 0;
	while (rest[i] && rest[i] == '\n')
		i++;
	if (rest[i] == '\0')
		return (ft_freemem_gnl(&rest));
	clean = ft_substr_gnl(rest, i + 1, ft_strlen_gnl(rest) - i - 1);
	return (clean);
}

static char *ft_readfile_gnl(int fd, char rest)
{
	char	*buffer;
	int		bytes;

	bytes = 1;
	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	while (!ft_complete_line(buffer) && bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(buffer);
			return (ft_freemem_gnl(&rest));
		}
		buffer[bytes] = '\n';
		rest = ft_strjoin(rest, buffer);
		if (!rest)
		{
			free(buffer);
			return(ft_freemem_gnl(&rest));
		}
	}
	free(buffer);
	return(rest);
}

char	*get_next_line(int fd)
{
	static char	*rest;
	char		*line;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	rest = ft_readfile_gnl(fd, rest);
	if (!rest)
		return (NULL);
	line = ft_complete_line(rest);
	rest = ft_clean_rest(rest);
	return (line);
}

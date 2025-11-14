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

char	*get_next_line(int fd)
{
	static char	*rest;
	char		*buffer;
	char		*line;
	int			bytes;

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	buffer = malloc(BUFFER_SIZE +1);
	if (!buffer)
		return (NULL);
	bytes = 1;
	while (!ft_complete_line(rest) && bytes > 0)
	{
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes < 0)
		{
			free(buffer);
			if (rest)
			{
				free(rest);
				rest = NULL;
			}
			return (NULL);
		}
		buffer[bytes] = '\0';
		if (bytes > 0)
			rest = ft_strjoin(rest, buffer);
		if (!rest && bytes > 0)
		{
			free(buffer);
			return (NULL);
		}
	}
	free(buffer);
	if (!rest || !*rest)
	{
		if (rest)
		{
			free(rest);
			rest = NULL;
		}
		return (NULL);
	}
	line = NULL;
	line = ft_getline(&rest);
	return (line);
}

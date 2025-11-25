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
#include <fcntl.h>

static char	*ft_strchr(const char *s, int c)
{
	unsigned char	j;

	if (!s)
		return (NULL);
	j = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == j)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && j == '\0')
		return ((char *)s);
	else
		return (NULL);
}

static char	*ft_complete_line(char *rest)
{
	char	*line;
	int		i;

	i = 0;
	if (!rest)
		return (NULL);
	while (rest[i] && rest[i] != '\n')
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
	int		j;

	i = 0;
	j = 0;
	while (rest[j])
		j++;
	while (rest[i] && rest[i] != '\n')
		i++;
	if (rest[i] == '\n')
		i++;
	if (rest[i] == '\0')
		return (free(rest), NULL);
	clean = malloc(j - i + 1);
	if (!clean)
		return (free(rest), NULL);
	clean = ft_substr_gnl(rest, i, j - i);
	free(rest);
	return (clean);
}

static char	*ft_readfile_gnl(int fd, char *rest)
{
	char	*buffer;
	int		bytes;

	buffer = NULL;
	bytes = 1;
	while ((bytes > 0) && (!ft_strchr(rest, '\n')))
	{
		buffer = malloc(BUFFER_SIZE + 1);
		if (!buffer)
			return (NULL);
		bytes = read(fd, buffer, BUFFER_SIZE);
		if (bytes <= 0)
		{
			free(buffer);
			buffer = NULL;
			break ;
		}
		if (bytes >= 0 && bytes < BUFFER_SIZE + 1)
			buffer[bytes] = '\0';
		rest = ft_strjoin_gnl(rest, buffer);
		free(buffer);
	}
	return (rest);
}

char	*get_next_line(int fd)
{
	static char	*rest = NULL;
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

int main(void)
{
	int fd = open("gnlTester/files/big_line_no_nl", O_RDONLY);
	char *line;
	while ((line = get_next_line(fd)) != NULL)
	{
		printf("%s \n", line);
		free(line);
	}
	close(fd);
}
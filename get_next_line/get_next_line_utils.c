/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:16:02 by paapahid          #+#    #+#             */
/*   Updated: 2025/11/19 20:27:27 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(const char *str)
{
	size_t	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup_gnl(char *str)
{
	size_t	len;
	char	*dup;
	int		i;

	len = ft_strlen_gnl(str);
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
	free(str);
	return (dup);
}

char	*ft_strjoin_gnl(char *s1, const char *s2)
{
	size_t	len1;
	size_t	len2;
	int		i;
	int		j;
	char	*str;

	len1 = ft_strlen_gnl(s1);
	len2 = ft_strlen_gnl(s2);
	i = -1;
	j = -1;
	str = malloc(len1 + len2 +1);
	if (!str)
		return (NULL);
	while(s1[++i])
		str[i] = s1[i];
	while(s2[++j])
		str[i + j] = s2[j];
	str[i + j] = '\0';
	if (s1)
		free(s1);
	return (str);
}

char	*ft_substr_gnl(char *str, unsigned int start, size_t len)
{
	size_t	strlen;
	char	*sub;
	int		i;

	i = 0;
	strlen = ft_strlen_gnl(str);
	if (!str || start >= len)
		return (ft_strdup_gnl(""));
	if (len > strlen - start)
		len = strlen - start;
	sub = malloc(len + 1);
	if (!sub)
		return (NULL);
	while (i < len)
	{
		sub[i] = str[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

char *ft_freemem_gnl(char **str)
{
	free(str);
	*str = NULL;
	return (NULL);
}


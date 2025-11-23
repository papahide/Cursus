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

// char	*ft_strdup_gnl(char *str)
// {
// 	size_t	len;
// 	size_t	i;
// 	char	*dup;

// 	len = ft_strlen_gnl(str);
// 	dup = malloc(len * sizeof(char) + 1);
// 	if (!dup)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		dup[i] = str[i];
// 		i++;
// 	}
// 	dup[i] = '\0';
// 	free(str);
// 	return (dup);
// }

// char	*ft_substr_gnl(char *str, unsigned int start, size_t len)
// {
// 	size_t	strlen;
// 	size_t	i;
// 	char	*sub;

// 	i = 0;
// 	strlen = ft_strlen_gnl(str);
// 	if (!str || start >= len)
// 		return (ft_strdup_gnl(""));
// 	if (len > strlen - start)
// 		len = strlen - start;
// 	sub = malloc(len + 1);
// 	if (!sub)
// 		return (NULL);
// 	while (i < len)
// 	{
// 		sub[i] = str[start + i];
// 		i++;
// 	}
// 	sub[i] = '\0';
// 	return (sub);
// }

#include "get_next_line.h"

int	ft_strlen_gnl(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcpy_gnl(char *src, int start, char *dest)
{
	int	i;

	i = start;
	if (!src)
		return (NULL);
	while (src[i] && src[i] != '\n')
	{
		dest[i] = src[i];
		i++;
	}
	if (src[i] == '\n')
		dest[i++] = '\n';
	return (dest);
}

char	*ft_strjoin_gnl(char *s1, const char *s2)
{
	int		len1;
	int		len2;
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
	while (++i < len1)
		str[i] = s1[i];
	while (++j < len2)
		str[j + i] = s2[j];
	str[i + j] = '\0';
	if (s1)
		free(s1);
	return (str);
}

char	*ft_freemem_gnl(char **str)
{
	if (str && *str)
	{
		free(*str);
		*str = NULL;
	}
	return (NULL);
}

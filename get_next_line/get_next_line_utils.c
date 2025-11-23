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

char	*ft_strdup_gnl(char *str)
{
	size_t	len;
	size_t	i;
	char	*dup;

	if (!str)
		return (NULL);
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
	return (dup);
}

char	*ft_substr_gnl(char *str, unsigned int start, size_t len)
{
	char		*sub;
	size_t		i;

	if (!str)
		return (NULL);
	i = ft_strlen_gnl(str);
	if (start >= i || len == 0)
		return (ft_strdup_gnl(""));
	i = 0;
	if (len > ft_strlen_gnl(str) - start)
		len = ft_strlen_gnl(str) - start;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (str[start] && i < len)
	{
		sub[i] = str[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}


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

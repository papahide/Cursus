/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:32:26 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 20:15:30 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	w_count(const char *s, char c)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			while (s[i] && s[i] == c)
				i++;
		}
		else
		{
			n++;
			while (s[i] && (s[i] != c))
				i++;
		}
	}
	return (n);
}

size_t	w_len(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	return (i);
}

int	get_start(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] == c)
	{
		i++;
	}
	return (i);
}

char	**ft_freemem(char **s, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(s[j]);
		j++;
	}
	free(s);
	return (NULL);
}

char	**ft_split(const char *s, char c)
{
	char		**r;
	int			n_words;
	int			i;
	size_t		len;

	if (!s)
		return (NULL);
	n_words = w_count(s, c);
	r = malloc((n_words + 1) * sizeof(char *));
	if (!r)
		return (NULL);
	i = 0;
	while (i < n_words)
	{
		while (*s && *s == c)
			s++;
		len = w_len(s, c);
		r[i] = ft_substr(s, 0, len);
		if (!r[i])
			return (ft_freemem(r, i));
		s += len;
		i++;
	}
	r[i] = NULL;
	return (r);
}

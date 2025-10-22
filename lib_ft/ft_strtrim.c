/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:14:59 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 20:16:35 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_start(const char *s1, const char *set)
{
	int	start;
	int	i;
	int	stop;

	start = 0;
	i = 0;
	while (s1[start])
	{
		i = 0;
		stop = 1;
		while (set[i])
		{
			if (s1[start] == set[i])
			{
				start++;
				stop = 0;
			}
			i++;
		}
		if (stop == 1)
			return (start);
	}
	return (start);
}

static int	ft_end(const char *s1, const char *set)
{
	int	end;
	int	i;
	int	stop;

	end = 0;
	while (s1[end])
		end++;
	end--;
	while (end >= 0)
	{
		i = 0;
		stop = 1;
		while (set[i])
		{
			if (s1[end] == set[i])
			{
				end--;
				stop = 0;
			}
			i++;
		}
		if (stop == 1)
			return (end);
	}
	return (end);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;
	size_t	len;
	int		i;

	start = ft_start(s1, set);
	end = ft_end(s1, set);
	len = 0;
	i = start;
	while (end >= i)
	{
		i++;
		len++;
	}
	str = ft_substr(s1, start, len);
	return (str);
}

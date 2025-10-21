/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:14:39 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 20:16:28 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	join(char *dst, const char *src, int j)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	return (j);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		j;
	char	*str;
	size_t	len;

	j = 0;
	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	j = join(str, s1, j);
	j = join(str, s2, j);
	str[j] = '\0';
	return (str);
}

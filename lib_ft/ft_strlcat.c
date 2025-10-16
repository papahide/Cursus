/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:33:53 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/16 19:28:14 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_src;
	size_t	size_dst;

	i = 0;
	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	j = size_dst;
	if (size == 0)
		return (size + size_src);
	if (j >= size)
		return (size + size_src);
	else
	{
		while (src[i] != '\0' && ((j + i + 1) < size))
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		if (size > j)
			dst[j] = '\0';
	}
	return (size_dst + size_src);
}

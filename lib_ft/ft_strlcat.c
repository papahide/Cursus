/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:33:53 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/19 20:14:26 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	size_src;
	size_t	size_dst;

	i = 0;
	size_src = ft_strlen(src);
	size_dst = ft_strlen(dst);
	j = size_dst;
	if (size == 0 || (j >= size))
		return (size + size_src);
	else
	{
		while (src[i] != '\0' && ((size_dst + i + 1) < size))
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

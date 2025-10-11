/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:33:53 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/11 21:21:05 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	strlcat(char *dst, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_dst;
	unsigned int	size_src;

	i = 0;
	j = 0;
	while (dst[j] != '\0')
	{
		j++;
	}
	size_dst = j;
	while (*str || ((j + i) < size))
}

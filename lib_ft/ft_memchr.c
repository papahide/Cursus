/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:36:39 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 15:36:41 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	j;
	size_t			i;

	j = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i != n)
	{
		if (str[i] == j)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

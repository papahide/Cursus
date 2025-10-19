/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:33:51 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/17 17:47:50 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	unsigned char	j;

	j = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == j)
			return ((char *)s);
		s++;
	}
	if (*s == '\0' && j == '\0')
		return ((char *)s);
	else
		return (NULL);
}

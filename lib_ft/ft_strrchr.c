/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:39:57 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 15:39:59 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	j;
	unsigned int	i;
	unsigned int	l;

	j = (unsigned char)c;
	i = 0;
	l = 0;
	while (s[i] != '\0')
	{
		if (s[i] == j)
			l = i;
		i++;
	}
	if (s[i] == '\0' && s[l] == j)
		return ((char *)&s[l]);
	else if (j == '\0')
		return ((char *)&s[i]);
	else
		return (NULL);
}

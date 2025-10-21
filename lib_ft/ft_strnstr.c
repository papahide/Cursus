/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:39:33 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 15:39:35 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *h, const char *n, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n[0] == '\0')
		return ((char *)h);
	while (h[i] && i < l)
	{
		j = 0;
		while (n[j] && (i + j) != l && h[i + j] == n[j])
		{
			j++;
		}
		if (n[j] == '\0')
			return ((char *)&h[i]);
		i++;
	}
	return (NULL);
}

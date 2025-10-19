/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:58:54 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/17 17:48:22 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *h, char *n, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n[0] == '\0')
		return (h);
	while (i < l)
	{
		j = 0;
		while (n[j] && ((i + j) != l) && (h[i + j] == n[j]))
		{
			j++;
		}
		if (n[j] == '\0')
			return (&h[i]);
		i++;
	}
	return (NULL);
}

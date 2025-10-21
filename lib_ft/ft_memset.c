/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:37:38 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 15:37:41 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	i = 0;
	p = (unsigned char *)dest;
	while (i < n)
	{
		p[i] = (unsigned char)c;
		i++;
	}
	return (dest);
}

/*
int	main(void)
{
	char	buffer[10];
	char	*result;
	int		i;

	result = ft_memset(buffer, 'A', 10);
	i = 0;
	while (i < 10)
	{
		write(1, &result[i], 1);
		i++;
	}
	return (0);
}
*/

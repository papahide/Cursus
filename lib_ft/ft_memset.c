/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavelapahidean <pavelapahidean@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:16:09 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/13 19:19:37 by pavelapahid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*p;
	unsigned char	j;

	i = 0;
	p = (unsigned char *)dest;
	j = (unsigned char)c;
	if (dest == NULL || n == 0)
		return (0);
	while (i < n)
	{
		p[i] = j;
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:37:07 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 15:37:09 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	i = 0;
	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

/*
int main(void)
{
	char src[10] = "abcdef";
	char dst1[10];
	char dst2[10];

	ft_memcpy(dst1, src, 4);
	memcpy(dst2, src, 4);

	printf("ft_memcpy: %s\n", dst1);
	printf("memcpy   : %s\n", dst2);
}
*/

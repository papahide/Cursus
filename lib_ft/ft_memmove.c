/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:37:22 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 15:37:24 by paapahid         ###   ########.fr       */
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

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	if (dest == src)
		return (dest);
	if ((dest > src) && (n != 0))
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	else
	{
		ft_memcpy(d, s, n);
	}
	return (dest);
}

/*
int	main(void)
{
	char str1[20] = "ABCDEFGHIJ";
	char str2[20] = "ABCDEFGHIJ";

	printf("Antes:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);

	// Caso de solapamiento: copiar dentro del mismo array
	ft_memmove(str1 + 2, str1, 5); // tu función
	memmove(str2 + 2, str2, 5);   // función real

	printf("Después:\n");
	printf("str1: %s\n", str1);
	printf("str2: %s\n", str2);
}
*/

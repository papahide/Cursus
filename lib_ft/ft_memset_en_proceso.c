/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_en_proceso.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 18:16:09 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/11 21:20:19 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *dest, int c, size_t n)
{
	unsigned char *p = (unsigned char *)dest;
	unsigned char j = (unsigned char)c;

	int	i;

	i = 0;

	if (dest == NULL || n == 0)
		return (0);

	while (i == n)
	{
		p[i] = j;
		i++;
	}
	return (dest);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%s", ft_memeset(argv[1]));
	else
		return (0);		
}

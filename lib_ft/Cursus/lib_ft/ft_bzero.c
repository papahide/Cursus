/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:02:40 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/17 17:47:16 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*z;

	z = s;
	i = 0;
	{
		while (i < n)
		{
			z[i] = '\0';
			i++;
		}
	}
	return ;
}

/*
int	main(void)
{
	char	buffer[10] = "Hola123";

	ft_bzero (buffer, 4);
	for (int i = 0; i < 10; i++)
		printf("%d ", buffer[i]);
	return (0);
}
*/
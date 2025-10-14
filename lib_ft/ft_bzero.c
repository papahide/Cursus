/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pavelapahidean <pavelapahidean@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:02:40 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/14 11:51:41 by pavelapahid      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

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
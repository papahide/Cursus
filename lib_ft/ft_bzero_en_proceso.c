/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:02:40 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/11 19:14:09 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		s[i] = '0';
		i++;
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 3)
		printf(bzero(argv[1], argv[2]));
	else
		printf("error");
}

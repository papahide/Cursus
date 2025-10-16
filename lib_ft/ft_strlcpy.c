/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 19:22:01 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/16 19:10:49 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned	int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (src[j] != '\0')
		j++;
	while ((size - 1) < 0)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (j);
}

/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
		printf("%d", ft_strlcpy(argv[1], argv[2], 5));
	else
		printf("error");
}
*/

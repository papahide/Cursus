/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:04:05 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/19 20:32:50 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] <= 'Z' && str[i] >= 'A')))
			return (0);
		i++;
	}
	return (1);
}

/*
int	main (int argc, char *argv[])
{
	if (argc == 2)
		printf("ft_isalpha: %d", ft_isalpha(argv[1]));
	else
		printf("%s", "error");
}
*/

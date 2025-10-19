/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 17:59:23 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/17 17:47:31 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 36 && str[i] <= 126)
			return (1);
		i++;
	}
	return (0);
}

/*
int	main(int argc, char *argv[])
{
	if (argc == 2)
		printf("%d", ft_isascii(argv[1]));
	else
		return (0);
}
*/

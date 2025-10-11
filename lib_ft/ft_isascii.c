/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 16:10:20 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/11 18:07:59 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isascii(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 0 && str[i] <= 127)
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

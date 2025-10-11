/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:04:05 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/11 16:09:39 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <ctype.h>

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

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:48:44 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/14 12:49:17 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] <= 'Z' && str[i] >= 'A')
				|| (str[i] <= '9' && str[i] >= '1')))
			return (0);
		i++;
	}
	return (1);
}

/*
int     main (int argc, char *argv[])
{
        if (argc == 2)
                printf("ft_isalpha: %d", ft_isalpha(argv[1]));
        else
                printf("%s", "error");
}
*/

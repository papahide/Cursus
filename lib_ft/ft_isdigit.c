/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:40:14 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/11 16:09:40 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= '1' && str[i] <= '9'))
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

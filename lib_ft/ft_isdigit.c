/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:35:23 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 15:35:25 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	char	dg;

	dg = (char)c;
	if (dg >= '0' && dg <= '9')
		return (1);
	else
		return (0);
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

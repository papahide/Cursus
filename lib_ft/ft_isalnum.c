/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:34:36 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 15:34:38 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == 1) || (ft_isdigit(c) == 1))
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

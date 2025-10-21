/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:35:07 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 15:35:08 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	char	asc;

	asc = (char)c;
	if (asc >= 0 && asc <= 127)
		return (1);
	else
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

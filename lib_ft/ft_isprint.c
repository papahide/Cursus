/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:35:46 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 15:35:49 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	char	p;

	p = (char)c;
	if (p >= 32 && p <= 126)
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

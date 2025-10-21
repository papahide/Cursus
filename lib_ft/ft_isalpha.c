/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 15:34:50 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 15:34:52 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	char	ch;

	ch = (char)c;
	if ((ch >= 'a' && ch <= 'z') || (ch <= 'Z' && ch >= 'A'))
		return (1);
	else
		return (0);
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

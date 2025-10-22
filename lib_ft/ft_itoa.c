/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 20:16:53 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 20:16:55 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_intlen(int n)
{
	int		len;
	long	num;

	num = (long)n;
	len = 0;
	if (num <= 0)
	{
		num = -num;
		len++;
	}
	while (num)
	{
		num /= 10;
		len++;
	}
	return (len);
}

static char	*ft_charfill(char *str, long n, int len)
{
	str[len] = '\0';
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	while (n)
	{
		len--;
		str[len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	len;

	len = ft_intlen(n);
	str = (char *)malloc(len + 1 * sizeof(char));
	if (!str)
		return (NULL);
	return (ft_charfill(str, n, len));
}

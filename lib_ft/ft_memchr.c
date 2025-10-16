/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:26:20 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/16 22:35:34 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	j;
	size_t			i;


	j = (unsigned char)c;
	str = (unsigned char *)s;
	i = 0;
	while (i != n)
	{
		if (str[i] == j)
			return (&str[i]);
		i++;
	}
	return (NULL);
}

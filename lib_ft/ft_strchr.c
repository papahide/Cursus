/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:33:51 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/16 22:20:14 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	unsigned char	j;

	j = (unsigned char)c;
	while (*s != '\0')
	{
		if (*s == j)
			return (s);
		s++;
	}
	if (*s == '\0' && j == '\0')
		return (s);
	else
		return (NULL);
}



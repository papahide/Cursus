/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 21:12:47 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/16 22:57:32 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (str1[i] && (i != n) && (str1[i] == str2[i]))
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (str1[i] - str2[i]);
}

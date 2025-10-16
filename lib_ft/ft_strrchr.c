/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:05:09 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/16 22:23:27 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	j;
	unsigned int	i;
	unsigned int	l;

	j = (unsigned char)c;
	i = 0;
	l = 0;
	while (s[i] != '\0')
	{
		if (s[i] == j)
			l = i;
		i++;
	}
	if (s[i] == '\0' && s[l] == j)
		return (&s[l]);
	else if (j == '\0')
		return (&s[i]);
	else
		return (NULL);
}

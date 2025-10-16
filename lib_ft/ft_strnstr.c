/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 22:58:54 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/16 23:21:10 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

char	*strnstr(const char *h, const char *n, size_t l)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (n[0] == '\0')
		return (h);
	while (i < l)
	{
		j = 0;
		while (n[j] && ((i + j) != l) && (h[i + j] == n[j]))
		{
			j++;
		}
		if (n[j] == '\0')
			return (&h[i]);
		i++;
	}
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 16:40:03 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/21 16:40:07 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*sub;
	size_t		i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	if (start >= i || len == 0)
		return (ft_strdup(""));
	i = 0;
	if (len > ft_strlen(s) - start)
		len = ft_strlen(s) - start;
	sub = malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	while (s[start] && i < len)
	{
		sub[i] = s[start];
		i++;
		start++;
	}
	sub[i] = '\0';
	return (sub);
}

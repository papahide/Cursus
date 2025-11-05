/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/30 17:18:33 by paapahid          #+#    #+#             */
/*   Updated: 2025/10/30 17:28:00 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*clear;
	t_list	*tmp;
	
	if (!*lst)
		return ;
	if (!del)
		return ;
	clear = *lst;
	while (clear)
	{
		tmp = clear->next;
		del(clear->content);
		free(clear);
		clear = tmp;
	}
	*lst = NULL;
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: paapahid <paapahid@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/28 21:18:36 by paapahid          #+#    #+#             */
/*   Updated: 2025/11/05 13:15:26 by paapahid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFFER_SIZE 2000

# include <stdio.h>
# include <unistd.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*ft_strdup(char *str);


#endif
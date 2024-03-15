/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/01 21:42:06 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/09/04 17:53:17 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

static void	update_buff(char **p_line, char **p_buff, size_t *p_index)
{
	if (*p_index == BUFFER_SIZE)
	{
		*p_line = ft_strjoin_gnl(*p_line, *p_buff);
		*p_buff = ft_strnew_gnl(BUFFER_SIZE);
		*p_index = 0;
	}
}

static char	*end_check(char **p_line, char **p_buff)
{
	if (*p_line[0] || *p_buff[0])
		return (ft_strjoin_gnl(*p_line, *p_buff));
	free(*p_line);
	free(*p_buff);
	return (NULL);
}

char	*get_next_line(int fd)
{
	char	*buff;
	char	*line;
	size_t	i;

	if (fd < 0 || BUFFER_SIZE < 1)
		return (NULL);
	i = 0;
	buff = ft_strnew_gnl(BUFFER_SIZE);
	line = ft_strnew_gnl(BUFFER_SIZE);
	if (!buff || !line)
		return (NULL);
	while (1)
	{
		update_buff(&line, &buff, &i);
		if (read(fd, &buff[i], 1) > 0)
		{
			if (buff[i] == '\n')
				return (ft_strjoin_gnl(line, buff));
			i ++;
		}
		else
			break ;
	}
	return (end_check(&line, &buff));
}

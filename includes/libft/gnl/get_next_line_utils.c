/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 02:20:07 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/08/23 22:19:56 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen_gnl(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat_gnl(char *dst, char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dst[i])
		i ++;
	while (src[j])
	{
		dst[i] = src[j];
		i ++;
		j ++;
	}
	dst[i] = '\0';
	return (dst);
}

char	*ft_strnew_gnl(size_t size)
{
	char	*strnew;
	size_t	i;

	i = 0;
	strnew = (char *)malloc((size + 1) * sizeof(char));
	if (!strnew)
		return (NULL);
	while (i <= size)
		strnew[i++] = '\0';
	return (strnew);
}

char	*ft_strjoin_gnl(char *s1, char *s2)
{
	char	*new_str;

	if (!s1 || !s2)
		return (NULL);
	new_str = ft_strnew_gnl(ft_strlen_gnl(s1) + ft_strlen_gnl(s2));
	if (!new_str)
		return (NULL);
	ft_strcat_gnl(new_str, s1);
	ft_strcat_gnl(new_str, s2);
	free(s1);
	free(s2);
	return (new_str);
}

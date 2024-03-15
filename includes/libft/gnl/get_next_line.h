/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 11:12:43 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/08/23 22:17:17 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 24
# endif

# include <stdlib.h>
# include <unistd.h>

size_t	ft_strlen_gnl(char *str);
char	*ft_strcat_gnl(char *dst, char *src);
char	*ft_strnew_gnl(size_t size);
char	*ft_strjoin_gnl(char *s1, char *s2);

char	*get_next_line(int fd);
#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:16:49 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/12 20:32:45 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_strclr(char *s)
{
	if (!s)
		return ;
	ft_bzero(s, ft_strlen(s));
}

// int main (int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	char	*str = argv[1];
// 	printf("%s\tavant ft_strclr\n", str);
// 	ft_strclr(str);
// 	printf("%s\tligne vide si OK.", str);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:59:52 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/12 20:41:35 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	int		i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

// int main(int argc, char **argv)
// {
// 	if (argc != 3)
// 		return (0);
// 	printf("%d\n", strcmp(argv[1], argv[2]));
// 	printf("%d", ft_strcmp(argv[1], argv[2]));
// 	return (0);
// }
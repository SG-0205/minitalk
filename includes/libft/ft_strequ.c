/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:06:27 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/12 20:44:34 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_strequ(const char *s1, const char *s2)
{
	if (!s1 || !s2)
		return (-1);
	if (ft_strcmp(s1, s2) == 0)
		return (1);
	else
		return (0);
}

// int main(int argc, char **argv)
// {
// 	if (argc != 3)
// 		return (1);
// 	printf("%d\tstrcmp\n", strcmp(argv[1], argv[2]));
// 	printf("%d\tft_strcmp\n", strcmp(argv[1], argv[2]));
// 	printf("%d\tft_streq\n", ft_strequ(argv[1], argv[2]));
// 	return (0);
// }
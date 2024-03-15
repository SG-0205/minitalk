/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 21:27:36 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/12 20:43:39 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

int	ft_strnequ(const char *s1, const char *s2, size_t n)
{
	if (!s1 || !s2)
		return (-1);
	if (ft_strncmp(s1, s2, n) == 0)
		return (1);
	else
		return (0);
}

// int main(int argc, char **argv)
// {
// 	if (argc != 4)
// 		return (1);
// 	printf("%d\tstrncmp\n", strncmp(argv[1], argv[2], ft_atoi(argv[3])));
// 	printf("%d\tft_strncmp\n", ft_strncmp(argv[1], argv[2], ft_atoi(argv[3])));
// 	printf("%d\tft_strneq\n", ft_strnequ(argv[1], argv[2], ft_atoi(argv[3])));
// 	return (0);
// }
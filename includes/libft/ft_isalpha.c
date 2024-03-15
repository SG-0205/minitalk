/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:08:56 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/03/20 22:16:19 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a'))
		return (1024);
	else
		return (0);
}

// int main (int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (666);
// 	printf("%d\t ft_isalpha\n", ft_isalpha(argv[1][0]));
// 	printf("%d\t isalpha", isalpha(argv[1][0]));
// 	return (0);
// }
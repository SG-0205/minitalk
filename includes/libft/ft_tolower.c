/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:40:51 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/03/20 22:18:02 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_tolower(int c)
{
	if (c <= 'Z' && c >= 'A')
		return ((c + 32));
	else
		return (c);
}

// int main (int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (666);
// 	printf("%d\t ft_tolower\n", ft_tolower(argv[1][0]));
// 	printf("%d\t tolower", tolower(argv[1][0]));
// 	return (0);
// }
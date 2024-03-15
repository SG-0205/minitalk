/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:26:48 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/12 15:37:37 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_isprint(int c)
{
	if ((c > 31) && (c < 127))
		return (16384);
	else
		return (0);
}

// int main (int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (666);
// 	printf("%d\t ft_isprint\n", ft_isprint(argv[1][0]));
// 	printf("%d\t isprint", isprint(argv[1][0]));
// 	return (0);
// }
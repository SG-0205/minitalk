/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 21:34:25 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/03/20 22:18:09 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <ctype.h>
#include "libft.h"

int	ft_toupper(int c)
{
	if (c <= 'z' && c >= 'a')
		return ((c - 32));
	else
		return (c);
}

// int main (int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (666);
// 	printf("%d\t ft_isalnum\n", ft_toupper(argv[1][0]));
// 	printf("%d\t isalnum", toupper(argv[1][0]));
// 	return (0);
// }
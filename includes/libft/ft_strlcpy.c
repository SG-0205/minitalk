/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 19:41:18 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/09 00:46:23 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

int	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int	len;

	len = 0;
	if (size == 0)
		return (ft_strlen(src));
	while (*(src + len) && --size)
		*dst++ = *(src + len++);
	*dst = '\0';
	while (*(src + len))
		++len;
	return (len);
}

// int	main(int argc, char **argv)
// {
// 	if (argc != 4)
// 		return (1);
// 	char *dst;
// 	char *src;

// 	dst = (char *)malloc(8*sizeof(char));
// 	src = (char *)malloc(5*sizeof(char));
// 	dst = argv[1];
// 	src = argv[2];
// 	printf("Taille source -> %d\nDST -> %s", 
//ft_strlcpy(dst, src, ft_atoi(argv[3])), dst);
// 	// printf("%d", strlcpy(dst, src, 3));
// }
//
//	WAR MACHINE
// void	ft_print_result(int n)
// {
// 	char c;

// 	if (n >= 10)
// 		ft_print_result(n / 10);
// 	c = n % 10 + '0';
// 	write (1, &c, 1);
// }

// int		main(int argc, const char *argv[])
// {
// 	char	*dest;
// 	int		arg;

// 	alarm(5);
// 	if (!(dest = (char *)malloc(sizeof(*dest) * 15)) || argc == 1)
// 		return (0);
// 	memset(dest, 0, 15);
// 	memset(dest, 'r', 6);
// 	if ((arg = atoi(argv[1])) == 1)
// 	{
// 		ft_print_result(ft_strlcpy(dest, "lorem", 15));
// 		write(1, "\n", 1);
// 		write(1, dest, 15);
// 	}
// 	else if (atoi(argv[1]) == 2)
// 	{
// 		ft_print_result(ft_strlcpy(dest, "", 15));
// 		write(1, "\n", 1);
// 		write(1, dest, 15);
// 	}
// 	else if (atoi(argv[1]) == 3)
// 	{
// 		ft_print_result(ft_strlcpy(dest, "lorem ipsum", 3));
// 		write(1, "\n", 1);
// 		write(1, dest, 15);
// 	}
// 	else if (atoi(argv[1]) == 4)
// 	{
// 		ft_print_result(ft_strlcpy(dest, "lorem ipsum dolor sit amet", 15));
// 		write(1, "\n", 1);
// 		write(1, dest, 15);
// 	}
// 	else if (atoi(argv[1]) == 5)
// 	{
// 		ft_print_result(ft_strlcpy(dest, "lorem ipsum dolor sit amet", 0));
// 		write(1, "\n", 1);
// 		write(1, dest, 15);
// 	}
// 	return (0);
// }
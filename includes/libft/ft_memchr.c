/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:48:05 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/03/21 00:06:44 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <ctype.h>
// #include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr_s;
	unsigned char	*ptr_c;
	size_t			i;

	ptr_c = (unsigned char *)&c;
	ptr_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == *ptr_c)
			return (&ptr_s[i]);
		i ++;
	}
	return (NULL);
}

// int main(int argc, char **argv)
// {
// 	if (argc != 4)
// 		return (1);
// 	printf("%s\tmemchr\n", (char * )memchr(argv[1],
// ft_atoi(argv[2]), ft_atoi(argv[3])));
// 	printf("%s\tft_memchr\n", (char *)ft_memchr(argv[1],
// ft_atoi(argv[2]), ft_atoi(argv[3])));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 23:20:45 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/03/21 00:01:01 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <ctype.h>
// #include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr_s1;
	unsigned char	*ptr_s2;
	size_t			i;

	if (n == 0)
		return (0);
	i = 0;
	ptr_s1 = (unsigned char *)s1;
	ptr_s2 = (unsigned char *)s2;
	while (i < n - 1 && ptr_s1[i] == ptr_s2[i])
		i ++;
	return (ptr_s1[i] - ptr_s2[i]);
}

// int main (int argc, char **argv)
// {
// 	if (argc != 4)
// 		return (1);
// 	printf("%d\tft_memcmp\n", ft_memcmp(argv[1], argv[2], ft_atoi(argv[3])));
// 	printf("%d\tmemcmp", memcmp(argv[1], argv[2], ft_atoi(argv[3])));
// 	return (0);
// }
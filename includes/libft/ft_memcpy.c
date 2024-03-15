/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 12:58:40 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/12 15:33:01 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*ptr_dest;
	unsigned char	*ptr_src;

	if (!dst && !src)
		return (NULL);
	ptr_src = (unsigned char *)src;
	ptr_dest = (unsigned char *)dst;
	i = 0;
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (ptr_dest);
}

// int main(void)
// {
// 	int	zero[]={0,0,0,0};
// 	int	zero2[]={0,0,0,0};
// 	int	test[]={1,2,3,4};
// 	int	test2[]={1,2,3,4};
// 	int i = 0;

// 	ft_memcpy(test, zero, 5);
// 	memcpy(test2, zero2, 5);
// 	for (i = 0; i < 5; i++)
// 		printf("%d", test[i]);
// 	printf("\n");
// 	for (i = 0; i < 5; i++)
// 		printf("%d", test2[i]);
// 	return (0);
// }
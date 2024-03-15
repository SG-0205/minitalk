/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 14:59:15 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/17 13:47:57 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*p_dest;
	const char	*p_src;

	if (!dest && !src)
		return (NULL);
	p_dest = (char *)dest;
	p_src = (const char *)src;
	if (p_src <= p_dest)
	{
		p_dest += n - 1;
		p_src += n - 1;
		while (n--)
			*p_dest-- = *p_src--;
	}
	else
	{
		ft_memcpy(dest, src, n);
	}
	return (dest);
}

// int	main(int argc, char **argv)
// {
// 	int		*nb_stock;
// 	char	*ch_stock;
// 	int		*nb_stock2;
// 	char	*ch_stock2;
// 	int		i;

// 	if (argc != 3)
// 		return (666);
// 	nb_stock = (int *)malloc(ft_strlen(argv[1]) * sizeof(int));
// 	ch_stock = (char *)malloc(ft_strlen(argv[1]) * sizeof(char) + 1);
// 	nb_stock2 = (int *)malloc(ft_strlen(argv[1]) * sizeof(int));
// 	ch_stock2 = (char *)malloc(ft_strlen(argv[1]) * sizeof(char) + 1);
// 	ft_memmove(nb_stock, argv[1], atoi(argv[2]));
// 	ft_memmove(ch_stock, argv[1], atoi(argv[2]));
// 	memmove(nb_stock2, argv[1], atoi(argv[2]));
// 	memmove(ch_stock2, argv[1], atoi(argv[2]));
// 	i = 0;
// 	printf("int:ft_memmove\n");
// 	while (i++, i < atoi(argv[2]))
// 		printf("%d", nb_stock[i]);
// 	printf("\n");
// 	i = 0;
// 	printf("char:ft_memmove\n");
// 	while (i++, i < atoi(argv[2]))
// 		printf("%c", ch_stock[i]);
// 	printf("\n");
// 	i = 0;
// 	printf("int:memmove\n");
// 	while (i++, i < atoi(argv[2]))
// 		printf("%d", nb_stock2[i]);
// 	printf("\n");
// 	i = 0;
// 	printf("char:memmove\n");
// 	while (i++, i < atoi(argv[2]))
// 		printf("%c", ch_stock2[i]);
// 	printf("\n");
// 	return (0);
// }

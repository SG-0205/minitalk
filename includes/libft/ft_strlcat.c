/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 14:50:11 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/12 16:33:37 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <bsd/string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	dst_l;
	size_t	src_l;

	if (!dst && size == 0)
		return (ft_strlen(src));
	dst_l = ft_strlen(dst);
	src_l = ft_strlen(src);
	if (dst_l >= size)
		return (src_l + size);
	i = 0;
	while (src[i] && i < size - dst_l)
	{
		dst[i + dst_l] = src[i];
		i ++;
	}
	if (dst_l + i < size)
		dst[i + dst_l] = 0;
	else
		dst[i + dst_l - 1] = 0;
	return (dst_l + src_l);
}

// int main(int argc, char **argv)
// {
// 	if (argc != 4)
// 		return (1);
// 	char	*buff;
// 	char	*buff_ft;
// 	buff = (char *)malloc(ft_strlen(argv[1])* sizeof(char));
// 	buff_ft = (char *)malloc(ft_strlen(argv[1])* sizeof(char));
// 	buff = argv[1];
// 	buff_ft = argv[1];
// 	ft_putnbr((int)ft_strlcat(buff_ft, argv[2], (size_t)ft_atoi(argv[3])));
// 	ft_putendl("");
// 	ft_putnbr((int)strlcat(buff, argv[2], (size_t)ft_atoi(argv[3])));
// 	return (0);
// }
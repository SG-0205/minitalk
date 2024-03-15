/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:03:52 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/12 18:19:21 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t sz)
{
	size_t	i;

	i = 0;
	while (i < sz && src[i])
	{
		dest[i] = src[i];
		i ++;
	}
	while (i < sz)
		dest[i++] = '\0';
	return (dest);
}

// int main()
// {
// 	char src[] = "123456789";
// 	char *dest;
// 	char src2[] = "123456789";
// 	char *dest2;
// 	int i = 0;
// 	while(src[i])
// 		i++;
// 	dest = (char *)malloc(i * sizeof(char) + 1);
// 	dest = ft_strncpy(dest, src, 9);
// 	dest2 = (char *)malloc(i * sizeof(char) + 1);
// 	dest2 = ft_strncpy(dest2, src2, 9);
// 	printf("%s\tft_strncpy(dest, src, 9)\n", dest);
// 	printf("%s\tstrncpy(dest2, src2, 9)\n", dest2);
// 	free(dest);
// 	free(dest2);
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:00:12 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/03/21 20:55:45 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>
#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t	i;
	size_t	len;

	len = ft_strlen(src);
	i = 0;
	while (i < len)
	{
		dst[i] = src[i];
		i ++;
	}
	dst[i] = '\0';
	return (dst);
}

// int main(){
// 	char	src[]="ZAZU ZAVA?";
// 	char	*dest;
// 	int		i = 0;

// 	while (src[i])
// 		i ++;
// 	dest = (char *)malloc(i * sizeof(char) + 1);
// 	dest = ft_strcpy(dest, src);
// 	printf("%s", dest);
// 	free(dest);
// 	return (0);
// }
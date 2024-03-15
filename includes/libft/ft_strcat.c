/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:58:54 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/03/20 22:17:00 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strcat(char *dst, const char *src)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (dst[i])
		i ++;
	while (src[j])
	{
		dst[i] = src[j];
		i ++;
		j ++;
	}
	dst[i] = '\0';
	return (dst);
}

// int main()
// {
// 	char	dest[]= "1234";
// 	char	src[]= "56789";
// 	printf("%s", ft_strcat(dest, src));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:00:52 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/16 15:44:53 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t sz)
{
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (dest[i])
		i ++;
	while (src[j] && j < sz)
		dest[i++] = src[j++];
	dest[i] = 0;
	return (dest);
}

// int main()
// {
// 	char	dest[]= "1234";
// 	char	src[]= "56789";
// 	printf("%s", ft_strncat(dest, src, 4));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:22:45 by sgoldenb          #+#    #+#             */
/*   Updated: 2024/03/08 20:56:49 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strnew(size_t size)
{
	char	*strnew;

	strnew = (char *)malloc(size + 1 * sizeof(char));
	if (!strnew)
		return (NULL);
	ft_bzero(strnew, size + 1);
	return (strnew);
}

// int main (void){
// 	char	*str;
// 	int i = 0;
// 	str = ft_strnew(5);
// 	while (i < 7)
// 	{
// 		printf("%d", str[i]);
// 		i ++;
// 	}
// 	return (0);
// }
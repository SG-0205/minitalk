/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:27:53 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/16 16:21:28 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*allocation;

	allocation = NULL;
	if (size == 0)
		return ((void *)malloc(0));
	if (nmemb && (nmemb * size) / nmemb != size)
		return (NULL);
	allocation = (void *)malloc(nmemb * size);
	if (!allocation)
		return (NULL);
	ft_bzero(allocation, size * nmemb);
	return (allocation);
}

// int		main(int argc, const char *argv[])
// {
// 	char	*str;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if (atoi(argv[1]) == 1)
// 	{
// 		str = (char *)ft_calloc(30, 1);
// 		if (!str)
// 			write(1, "NULL", 4);
// 		else
// 			write(1, str, 30);
// 	}
// 	return (0);
// }
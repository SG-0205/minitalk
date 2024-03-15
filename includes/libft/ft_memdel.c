/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 00:29:49 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/03/21 12:43:24 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_memdel(void **ap)
{
	if (ap != NULL && *ap != NULL)
	{
		free(*ap);
		*ap = NULL;
	}
}

// int main(int argc, char **argv)
// {
// 	if (argc != 4)
// 		return (1);
// 	char *p1 = argv[1];
// 	char *p2 = argv[2];
// 	char *p3 = argv[3];
// 	char **array = (char **)malloc(3 * sizeof (char*));
// 	array[0] = p1;
// 	array[1] = p2;
// 	array[2] = p3;
// 	ft_memdel((void **)array);
// 	printf("%s, %s, %s", array[0], array[1], array[2]);
// 	return (0);
// }
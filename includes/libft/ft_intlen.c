/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 17:41:48 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/09/14 17:48:56 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_intlen(long int n, size_t *container)
{
	unsigned int	ln;

	ln = n;
	if (n < 0)
	{
		*container += 1;
		ln = -n;
	}
	if (ln > 9)
	{
		*container += 1;
		ft_intlen(ln / 10, container);
	}
	else
		*container += 1;
}

// int main(int argc, char **argv)
// {
// 	size_t	container;

// 	container = 0;
// 	ft_intlen(ft_atoi(argv[1]), &container);
// 	if (argc != 2)
// 		return (1);
// 	printf("%ld", container);
// 	return (0);
// }
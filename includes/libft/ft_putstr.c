/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 18:54:58 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/12 20:35:39 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *s)
{
	if (!s)
		return ;
	while (*s)
	{
		ft_putchar(*s);
		s ++;
	}
}

// int main (int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	ft_putstr(argv[1]);
// 	return (0);
// }
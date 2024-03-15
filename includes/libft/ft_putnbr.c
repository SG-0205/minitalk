/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 21:42:41 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/04/03 22:10:08 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int	u_n;

	u_n = n;
	if (u_n < 0)
	{
		ft_putchar('-');
		u_n = -u_n;
	}
	if (u_n > 10)
	{
		ft_putnbr(u_n / 10);
		ft_putchar((u_n % 10) + '0');
	}
	else
		ft_putchar((u_n % 10) + '0');
}

// int main (int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	ft_putnbr(ft_atoi(argv[1]));
// 	return (0);
// }
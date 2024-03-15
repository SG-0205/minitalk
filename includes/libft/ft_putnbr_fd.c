/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:21:37 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/12 14:17:08 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	u_n;

	u_n = n;
	if (u_n < 0)
	{
		ft_putchar_fd('-', fd);
		u_n = -u_n;
	}
	if (u_n >= 10)
	{
		ft_putnbr_fd(u_n / 10, fd);
		ft_putchar_fd((u_n % 10) + '0', fd);
	}
	else
		ft_putchar_fd((char)((u_n % 10)) + '0', fd);
}

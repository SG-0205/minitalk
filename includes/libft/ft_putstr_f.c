/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_f.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:05:52 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/08/24 11:33:58 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_f(const char *str, int *len)
{
	if (!str)
		ft_putstr_f("(null)", len);
	else
	{
		while (*str != '\0')
		{
			ft_putchar_f(*str, len);
			str ++;
		}
	}
}

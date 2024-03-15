/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printpointer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 19:01:47 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/08/24 11:33:23 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_printpointer(unsigned long long pointer, const char *base, int *len)
{
	if (!pointer)
		ft_putstr_f("(nil)", len);
	else
	{
		ft_putstr_f("0x", len);
		ft_putunsigned(pointer, base, len);
	}
}

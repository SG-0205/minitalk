/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:09:26 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/12 19:43:54 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static int	len(long int nb)
{
	int		len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nb;

	nb = n;
	i = len(nb);
	str = ft_strnew(i);
	if (!str)
		return (NULL);
	if (nb == 0)
		str[0] = 48;
	if (nb < 0)
	{
		str[0] = '-';
		nb = nb * -1;
	}
	while (nb > 0 && i-- >= 0)
	{
		str[i] = 48 + (nb % 10);
		nb = nb / 10;
	}
	return (str);
}

// int main(int argc, char **argv)
// {
// 	 if (argc != 2)
// 	 	return (1);
// 	printf("%d\tft_atoi\n", ft_atoi(argv[1]));
// 	printf("%s\tft_itoa\n", ft_itoa(ft_atoi(argv[1])));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 17:12:28 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/08/24 11:34:11 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_erreur(const char *base, int *erreur)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (base[0] == '\0' || base[1] == '\0')
		*erreur = 1;
	while (base[i] && *erreur == 0)
	{
		j = i;
		while (base[j] != '\0')
		{
			j++;
			if (base[i] == base[j])
				*erreur = 1;
		}
		if (base[i] == '+' || base[i] == '-' || base[i] == '%'
			|| base[i] == '/' || base[i] == '*' || base[i] == '='
			|| base[i] == ',' || base[i] == '.'
			|| base[i] < 33 || base[i] > 126)
			*erreur = 1;
		else
			i++;
	}
}

void	ft_putunsigned(unsigned long long nbr, const char *base, int *len)
{
	unsigned long long	lbase;
	int					erreur;
	unsigned long long	nb;

	lbase = ft_strlen(base);
	erreur = 0;
	ft_erreur(base, &erreur);
	nb = nbr;
	if (erreur == 0)
	{
		if (nb < lbase)
			ft_putchar_f(base[nb], len);
		if (nb >= lbase)
		{
			ft_putunsigned(nb / lbase, base, len);
			ft_putunsigned(nb % lbase, base, len);
		}
	}
}

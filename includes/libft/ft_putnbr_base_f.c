/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_f.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/20 18:57:54 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/08/24 11:33:43 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_erreur_pf(const char *base, int *erreur)
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

void	ft_putnbr_base_f(int nbr, const char *base, int *len)
{
	int		lbase;
	int		erreur;
	long	nb;

	lbase = ft_strlen(base);
	erreur = 0;
	ft_erreur_pf(base, &erreur);
	nb = nbr;
	if (erreur == 0)
	{
		if (nb < 0)
		{
			ft_putchar_f('-', len);
			nb *= -1;
		}
		if (nb < lbase)
			ft_putchar_f(base[nb], len);
		if (nb >= lbase)
		{
			ft_putnbr_base_f(nb / lbase, base, len);
			ft_putnbr_base_f(nb % lbase, base, len);
		}
	}
}

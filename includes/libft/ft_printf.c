/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/17 23:43:36 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/08/24 11:33:08 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

static void	ft_specparsing(const char *format, va_list args, int *computed_len)
{
	size_t	i;

	i = 0;
	if (format[i] == '%')
		ft_putchar_f('%', computed_len);
	else if (format[i] == 'c')
		ft_putchar_f(va_arg(args, int), computed_len);
	else if (format[i] == 's')
		ft_putstr_f(va_arg(args, char *), computed_len);
	else if (format[i] == 'd')
		ft_putnbr_base_f(va_arg(args, int), BASE_TEN, computed_len);
	else if (format[i] == 'i')
		ft_putnbr_base_f(va_arg(args, int), BASE_TEN, computed_len);
	else if (format[i] == 'u')
		ft_putunsigned(va_arg(args, unsigned int), BASE_TEN, computed_len);
	else if (format[i] == 'p')
		ft_printpointer(va_arg(args, unsigned long long),
			BASE_HEX_MIN, computed_len);
	else if (format[i] == 'x')
		ft_putunsigned(va_arg(args, unsigned int), BASE_HEX_MIN, computed_len);
	else if (format[i] == 'X')
		ft_putunsigned(va_arg(args, unsigned int), BASE_HEX_MAJ, computed_len);
}

int	ft_printf(const char *format, ...)
{
	int		i;
	int		computed_len;
	va_list	args;

	va_start(args, format);
	i = -1;
	computed_len = 0;
	while (format[++i])
	{
		if (format[i] == '%')
		{
			ft_specparsing(&format[i + 1], args, &computed_len);
			i++;
		}
		else
			ft_putchar_f(format[i], &computed_len);
	}
	va_end(args);
	return (computed_len);
}

// int	main(/*int argc, char **argv*/)
// {
// 	// size_t	cont;
// 	void	*ptr;
//
// 	ptr = (void *)malloc(sizeof(void *));
// 	// cont = 0;
// 	// if (argc != 2)
// 	// 	return (-1);
// 	// printf("\n\t\t\tTESTS FONCTIONS AUXILIAIRES\n");
// 	// ft_putnbr_base_f(ft_atoi(ft_strdup(argv[1])), BASE_TEN, &cont);
// 	// printf("\nft_putnbrbase_f\toutput len1:\t%ld\n", cont);
// 	// ft_putunsigned(ft_atoi(ft_strdup(argv[1])), BASE_HEX_MAJ, &cont);
// 	// printf("\nft_putunsigned\toutput len1+2:\t%ld\n", cont);
// 	// ft_putchar_f(*ft_strdup(&argv[1][0]), &cont);
// 	// printf("\nft_putchar_f\toutput len1+2+3:\t%ld\n", cont);
// 	// ft_printpointer((unsigned long long)ptr, BASE_HEX_MIN, &cont);
// 	// printf("\nft_printpointeur_min\toutput len 1+2+3+4:\t%ld", cont);
// 	// printf("\n\n\t\t\tTEST PARSING\n");
// 	// ft_printf("%s->str\n", ft_strdup(argv[1]));
// 	// ft_printf("%c->1st char\n", *ft_strdup(&argv[1][0]));
// 	// ft_printf("%d->%%d\n", ft_atoi(ft_strdup(argv[1])));
// 	// ft_printf("%i->%%i\n", ft_atoi(ft_strdup(argv[1])));
// 	// ft_printf("%u->%%u\n", ft_atoi(ft_strdup(argv[1])));
// 	// ft_printf("%p->%%p\n", ft_strdup(argv[1]));
// 	// printf("\n\n%d",ft_printf("%sa %s %s", ft_strdup(argv[1])));
// 	free (ptr);
// 	return (0);
// }
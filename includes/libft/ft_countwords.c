/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countwords.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/26 23:28:08 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/10 12:14:22 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

size_t	ft_countwords(const char *s, char c)
{
	size_t	words;
	size_t	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 || s[i - 1] == c) && s[i] != c)
			words++;
		i++;
	}
	return (words);
}

// int main(int argc, char **argv)
// {
// 	if (argc != 3)
// 		return (1);
// 	printf("%ld mots détectés avec l'espaceur '%c'", 
//ft_countwords(argv[1], argv[2][0]), argv[2][0]);
// 	return (0);
// }
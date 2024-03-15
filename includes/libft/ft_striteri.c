/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 14:23:38 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/08 18:55:02 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	if (s)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}

// static void	test_ft_upper(unsigned int i, char *c)
// {
// 	if (i >= 0)
// 		*c = *c - 32;
// }

// int main(int argc, char **argv)
// {
// 	if (argc != 2)
// 		return (1);
// 	void	*ptr_f = &test_ft_upper;
// 	char	*str_buf = (char *)malloc((ft_strlen(argv[1]) + 1) * sizeof(char));
// 	str_buf = argv[1];
// 	ft_striteri(str_buf, ptr_f);
// 	printf("%s\t<Doit être en MAJ", str_buf);
// 	return (0);
// }
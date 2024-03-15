/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 13:43:13 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/03/21 20:55:28 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_striter(char *s, void (*f)(char *))
{
	if (!s || !f)
		return ;
	while (*s)
	{
		f(&s[0]);
		s ++;
	}
}

// void	test_ft_upper(char *c)
// {
// 	*c = *c - 32;
// }

// int main(void)
// {
// 	char	s[] = "abcdef";
// 	void	*ptr_f = &test_ft_upper;
// 	ft_striter(s, ptr_f);
// 	printf("%s\t<Doit être en MAJ", s);
// 	return (0);
// }
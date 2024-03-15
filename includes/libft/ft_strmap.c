/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:08:22 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/08 17:09:42 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	len;
	char	*new_str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *)s);
	i = 0;
	new_str = (char *)malloc(len * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	while (s[i])
	{
		new_str[i] = f(s[i]);
		i ++;
	}
	new_str[i] = 0;
	return (new_str);
}

// char	test_strmap(char c)
// {
// 	char	d;
// 	d = ft_toupper(c);
// 	return (d);
// }

// int	main(void)
// {
// 	void	*ptr_f = &test_strmap;
// 	char	str[]="ZAZUzep05";
// 	printf("%s", ft_strmap(str, ptr_f));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 15:59:19 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/17 14:21:54 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	char			*str;
	unsigned char	c_new;

	c_new = (unsigned char)c;
	str = (char *)s;
	while (*str != c_new)
	{
		if (*str == '\0')
			return (NULL);
		str++;
	}
	return (str);
}

// int main()
// {
// 	const char	str[]="0123456789";
// 	char	c='7';
// 	char	*p_str;

// 	p_str = ft_strchr(str, c);
// 	printf("%s", p_str);
// 	if (p_str[0] == '\0')
// 		printf("Much Waw");
// 	return (0);
// }
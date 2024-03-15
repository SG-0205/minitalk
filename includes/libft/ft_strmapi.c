/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 20:56:19 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/08 18:59:28 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	size_t			len;
	char			*new_str;

	if (!s || !f)
		return (NULL);
	len = ft_strlen((char *)s);
	i = 0;
	new_str = (char *)malloc(len * sizeof(char) + 1);
	if (!new_str)
		return (NULL);
	while (i < len)
	{
		new_str[i] = f(i, s[i]);
		i ++;
	}
	new_str[i] = 0;
	return (new_str);
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
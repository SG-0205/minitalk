/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:42:25 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/12 19:59:58 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strjoin(const char *s1, char const *s2)
{
	char	*new_str;

	if (!s1 || !s2)
		return (NULL);
	new_str = ft_strnew((ft_strlen(s1) + ft_strlen(s2)));
	if (!new_str)
		return (NULL);
	ft_strcat(new_str, s1);
	ft_strcat(new_str, s2);
	return (new_str);
}

// int	main(int argc, char **argv)
// {
// 	if (argc != 3)
// 		return (1);
// 	printf("%s\t<Arg1 + Arg2", ft_strjoin(argv[1], argv[2]));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:56:21 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/16 18:41:50 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	*ft_strtrim(char const *s, char const *set)
{
	size_t	start;
	size_t	end;
	char	*new_s;

	if (!s || !set)
		return (NULL);
	new_s = NULL;
	if (s != 0 || set != 0)
	{
		start = 0;
		end = ft_strlen(s);
		while (s[start] && ft_strchr(set, s[start]))
			start++;
		while (s[end - 1] && ft_strchr(set, s[end - 1]) && end > start)
			end--;
		new_s = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!new_s)
			return (NULL);
		if (new_s)
			ft_strlcpy(new_s, &s[start], end - start + 1);
	}
	return (new_s);
}

// int main(int argc, char **argv)
// {
// 	if (argc != 3)
// 		return (1);
// 	printf("%s\t<Sans whitespaces\n", ft_strtrim(argv[1], argv[2]));
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/22 13:12:59 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/18 14:17:17 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
// #include <bsd/string.h>

static char	*ft_startcheck(void)
{
	char	*empty_str;

	empty_str = (char *)malloc(sizeof(char));
	if (!empty_str)
		return (NULL);
	empty_str[0] = 0;
	return (empty_str);
}

static int	ft_lencheck(char const *s, unsigned int start, size_t len)
{
	if ((ft_strlen(s) - start) < len)
		return ((ft_strlen(s) - start));
	else
		return (len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sub;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_startcheck());
	sub = (char *)malloc(sizeof(char) * (ft_lencheck(s, start, len) + 1));
	if (!sub)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sub[j] = s[i];
			j++;
		}
		i++;
	}
	sub[j] = 0;
	return (sub);
}

// int main(int argc, char **argv)
// {
// 	if (argc != 4)
// 		return (1);
// 	printf("%s", ft_substr(argv[1], (unsigned int)ft_atoi(argv[2]),
// (size_t)ft_atoi(argv[3])));
// 	return (0);
// }
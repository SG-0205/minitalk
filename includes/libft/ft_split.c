/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 16:49:51 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/10/04 17:14:16 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static void	ft_checkalloc(char **array, size_t len)
{
	while (len --)
		free(array[len]);
	free(array);
}

static void	ft_initarray(char **array, const char *s, char c)
{
	t_bool	is_init;
	size_t	i;
	size_t	j;
	size_t	nb_wrds;

	is_init = 0;
	j = 0;
	i = 0;
	nb_wrds = ft_countwords(s, c);
	while (s[j] && i < nb_wrds)
	{
		if (s[j] == c)
			is_init = FALSE;
		else if (s[j] != c && is_init == FALSE)
		{
			array[i] = ft_strnew(ft_lentillc(&(s[j]), c));
			if (!array[i])
				return (ft_checkalloc(array, i));
			is_init = TRUE;
			i ++;
		}
		j ++;
	}
}

static void	ft_fillarray(char **array, const char *s, char c)
{
	t_bool	start_cpy;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	start_cpy = 0;
	while (s[j])
	{
		if (s[j] == c)
			start_cpy = FALSE;
		else if (s[j] != c && start_cpy == FALSE)
		{
			array[i] = ft_strncpy(array[i], &(s[j]), ft_lentillc(&(s[j]), c));
			start_cpy = TRUE;
			i ++;
		}
		j ++;
	}
}

char	**ft_split(char const *s, char c)
{
	char	**array;

	if (!s)
		return (NULL);
	array = (char **)malloc((ft_countwords(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	ft_initarray(array, s, c);
	ft_fillarray(array, s, c);
	array[ft_countwords(s, c)] = NULL;
	return (array);
}

// int main(int argc, char **argv)
// {
// 	int i = 0;
// 	if (argc != 3)
// 		return (1);
// 	char **array = ft_split(argv[1], argv[2][0]);
// 	while (array[i])
// 	{
// 		printf("%s\n", array[i]);
// 		i ++;
// 	}
// 	ft_checkalloc(array, i);
// 	return (0);
// }

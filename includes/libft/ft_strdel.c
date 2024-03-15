/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 12:50:29 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/03/21 13:15:10 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strdel(char **as)
{
	if (as != NULL && *as != NULL)
	{
		free(*as);
		*as = NULL;
	}
}

// int main(void)
// {
// 	char	**strtest = (char **)malloc(sizeof(char *));
// 	strtest[0]= (char *)malloc(sizeof(char));
// 	ft_strdel(strtest);
// 	return (0);
// }
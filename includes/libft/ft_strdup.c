/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/10 16:00:25 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/02 18:18:21 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		size;
	char	*new;

	new = NULL;
	size = ft_strlen(s);
	new = (char *)malloc(size * sizeof(char) + 1);
	if (!new)
		return (NULL);
	ft_strcpy(new, s);
	return (new);
}

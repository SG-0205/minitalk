/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 14:46:05 by sgoldenb          #+#    #+#             */
/*   Updated: 2024/03/12 15:06:24 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk_bonus.h"

char	*cat_message(char *message, char *c)
{
	char	*new_msg;

	if (!message || !c)
		return (NULL);
	new_msg = ft_strnew(ft_strlen(message) + ft_strlen(c));
	if (!new_msg)
		return (NULL);
	ft_strcat(new_msg, message);
	ft_strcat(new_msg, c);
	free(message);
	return (new_msg);
}

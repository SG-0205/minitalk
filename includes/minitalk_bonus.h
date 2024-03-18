/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk_bonus.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:00:33 by sgoldenb          #+#    #+#             */
/*   Updated: 2024/03/18 14:24:41 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_BONUS_H
# define MINITALK_BONUS_H

# include <signal.h>
# include "libft/libft.h"

# define TTL 20
# define SEPARATOR -5

char	*cat_message(char *message, char *c);

typedef struct s_servdata
{
	char	*message;
	int		bits;
	char	*incoming_c;
}	t_servdata;

#endif
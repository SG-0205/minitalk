/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:49:21 by sgoldenb          #+#    #+#             */
/*   Updated: 2024/03/12 15:47:33 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk_bonus.h"

t_servdata	*g_data;

void	init_data(t_servdata *data)
{
	g_data->bits = 0;
	g_data->message = ft_strnew(0);
	if (!g_data->message)
		(free(data), exit(1));
	g_data->incoming_c = ft_strnew(1);
	if (!g_data->incoming_c)
		(free(g_data->message), free(data), exit(1));
}

void	exit_safe(int signal)
{
	if (signal == SIGINT && g_data)
	{
		if (g_data->message)
			free(g_data->message);
		if (g_data->incoming_c)
			free(g_data->incoming_c);
		free(g_data);
		exit(1);
	}
}

void	split_conf(char *message)
{
	char	**split_msg;

	split_msg = ft_split(message, SEPARATOR);
	ft_printf(BLUE UNDERLINE "(%s)\e[0m : ", split_msg[0]);
	ft_printf(ITALIC LIGHT_GREEN "%s\n" RESET, split_msg[1]);
	kill(ft_atoi(split_msg[0]), SIGUSR1);
	ft_bzero(g_data->message, ft_strlen(g_data->message));
	(free(split_msg[0]), free(split_msg[1]), free(split_msg));
}

void	reception(int signal)
{
	if (signal != SIGUSR1 && signal != SIGUSR2)
		return ;
	if (signal == SIGUSR1)
		g_data->incoming_c[0] |= (0x01 << g_data->bits);
	g_data->bits++;
	if (g_data->bits == 8)
	{
		if (g_data->incoming_c[0] == '\0')
			split_conf(g_data->message);
		g_data->message = cat_message(g_data->message, g_data->incoming_c);
		g_data->incoming_c[0] = 0;
		g_data->bits = 0;
	}
}

int	main(void)
{
	signal(SIGINT, exit_safe);
	g_data = (t_servdata *)malloc(sizeof(t_servdata));
	init_data(g_data);
	ft_printf(BOLD BLUE "\n+-> %d <-+\n\n" RESET, getpid());
	signal(SIGUSR1, reception);
	signal(SIGUSR2, reception);
	while (sleep(TTL) > 0)
		;
	ft_printf(BLUE BOLD "Valeur TTL atteinte, fermeture.\n" RESET);
	if (g_data->message)
		free(g_data->message);
	if (g_data->incoming_c)
		free(g_data->incoming_c);
	if (g_data)
		free(g_data);
	exit(0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:10:36 by sgoldenb          #+#    #+#             */
/*   Updated: 2024/03/12 15:47:06 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk_bonus.h"

char	*g_msg;

t_bool	comp_send(int serv_pid, char c)
{
	int	c_bits;

	c_bits = 0;
	while (c_bits < 8)
	{
		if ((c & (0x01 << c_bits)))
		{
			if (kill(serv_pid, SIGUSR1) < 0)
				return (FALSE);
		}
		else
		{
			if (kill(serv_pid, SIGUSR2) < 0)
				return (FALSE);
		}
		usleep(100);
		c_bits++;
	}
	return (TRUE);
}

void	check_pid(char *pid)
{
	size_t	pid_len;

	pid_len = 0;
	ft_intlen(ft_atoi(pid), &pid_len);
	if (ft_strlen(pid) != pid_len)
		(ft_printf(RED BOLD "PID invalide.\n" RESET), exit(1));
}

char	*build_message(char *message)
{
	char	*pid_c;
	char	*new_msg;

	pid_c = ft_itoa(getpid());
	new_msg = ft_strnew(ft_strlen(pid_c) + ft_strlen(message) + 1);
	ft_strcpy(new_msg, pid_c);
	new_msg[ft_strlen(new_msg)] = SEPARATOR;
	ft_strcat(new_msg, message);
	free(pid_c);
	return (new_msg);
}

void	confirmation(int signal)
{
	if (signal == SIGUSR1)
	{
		ft_printf(GREEN BOLD "Message reçu!\nFermeture..." RESET);
		free(g_msg);
		exit(0);
	}
}

int	main(int argc, char **argv)
{
	int	pid;
	int	i;
	int	msg_len;

	i = -1;
	msg_len = 0;
	pid = 0;
	if (argc != 3)
		(ft_printf(RED ITALIC "Mauvais nombre d'arguments.\n" RESET), exit(1));
	check_pid(argv[1]);
	pid = ft_atoi(argv[1]);
	g_msg = build_message(argv[2]);
	msg_len = ft_strlen(g_msg);
	signal(SIGUSR1, confirmation);
	while (++i < (msg_len + 1))
		if (comp_send(pid, g_msg[i]) == FALSE)
			(free(g_msg), exit(1));
	while (sleep(TTL) > 0)
		;
	ft_printf(RED BOLD "Erreur de réception!\n" RESET);
	return (1);
}

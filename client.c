/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 20:10:36 by sgoldenb          #+#    #+#             */
/*   Updated: 2024/03/08 21:19:48 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/minitalk.h"

void	comp_send(int serv_pid, char c)
{
	int	c_bits;

	c_bits = 0;
	while (c_bits < 8)
	{
		if ((c & (0x01 << c_bits)))
		{
			if (kill(serv_pid, SIGUSR1) < 0)
				(ft_printf(BOLD RED "Kill failure S1.\n" RESET), exit(1));
		}
		else
		{
			if (kill(serv_pid, SIGUSR2) < 0)
				(ft_printf(BOLD RED "Kill failure S2.\n" RESET), exit(1));
		}
		usleep(100);
		c_bits ++;
	}
}

void	check_pid(char *pid)
{
	size_t	pid_len;

	pid_len = 0;
	ft_intlen(ft_atoi(pid), &pid_len);
	if (ft_strlen(pid) != pid_len)
		(ft_printf(RED BOLD "PID invalide.\n" RESET), exit(1));
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
	msg_len = ft_strlen(argv[2]);
	while (++i < (msg_len + 1))
		comp_send(pid, argv[2][i]);
	return (0);
}

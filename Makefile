# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/13 14:53:57 by sgoldenb          #+#    #+#              #
#    Updated: 2024/03/13 16:00:53 by sgoldenb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Werror -Wextra
LDFLAGS = -Lincludes/libft/

all: minitalk minitalk_bonus

minitalk: server client

minitalk_bonus: bonus/server bonus/client

server: server.o includes/libft/libft.a
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS) -lft

client: client.o includes/libft/libft.a
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS) -lft

bonus/server: bonus/server.o bonus/server_utils.o includes/libft/libft.a
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS) -lft

bonus/client: bonus/client.o includes/libft/libft.a
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS) -lft

includes/libft/libft.a:
	make all -C includes/libft

server.o: server.c includes/minitalk.h
	$(CC) $(CFLAGS) -c $< -o $@

client.o: client.c includes/minitalk.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus/server.o: bonus/server.c includes/minitalk_bonus.h bonus/server_utils.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus/client.o: bonus/client.c includes/minitalk_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

bonus/server_utils.o: bonus/server_utils.c includes/minitalk_bonus.h
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f *.o
	rm -f bonus/*.o
	make -C includes/libft clean

fclean:
	rm -f server client
	rm -f bonus/server bonus/client
	make -C includes/libft/ fclean

.PHON: clean fclean all minitalk minitalk_bonus
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/03 22:35:05 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/17 14:25:59 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

t_list	*ft_lstnew(const void *content)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	if (!content)
		content = NULL;
	new->content = (void *)content;
	new->next = NULL;
	return (new);
}

// int main(int argc, char **argv)
// {
// 	t_list *test;
// 	if (argc != 2)
// 		return (1);
// 	test = ft_lstnew(argv[1]);
// 	ft_putstr(test->content);
// 	ft_putendl("");
// 	printf("%p", test->next);
// 	return (0);
// }

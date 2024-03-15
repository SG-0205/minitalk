/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 11:47:56 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/10 10:26:33 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	if (new == NULL)
		return ;
	new->next = *lst;
	*lst = new;
}

// int	main(int argc, char **argv)
// {
// 	if (argc != 5)
// 		return (0);
// 	t_list	**list;
// 	t_list	*first_elem;
// 	t_list	*second_elem;
// 	t_list	*third_elem;
// 	int		i;

// 	i = 0;
// 	list = ft_calloc(4, sizeof(t_list *));

// 	first_elem = ft_lstnew(argv[1]);
// 	second_elem = ft_lstnew(argv[2]);
// 	third_elem = ft_lstnew(argv[3]);

// 	list[0] = first_elem;
// 	list[1] = second_elem;
// 	list[2] = third_elem;
// 	list[3] = NULL;
// 	while (list[i] != NULL)
// 	{
// 		ft_putendl(list[i]->content);
// 		i ++;
// 	}
// 	ft_putendl("1ere version de liste");
// 	ft_putendl("");
// 	ft_lstadd_front(list, ft_lstnew(argv[4]));
// 	i = 0;
// 	while (list[i] != NULL)
// 	{
// 		ft_putendl(list[i]->content);
// 		i ++;
// 	}
// 	ft_putendl("2e version de liste");
// 	ft_putendl("");

// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/03 13:08:03 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/10 15:43:08 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int				size;

	size = 0;
	if (!lst)
		return (0);
	if (lst && lst->next == NULL)
		return (1);
	while (lst)
	{
		lst = lst->next;
		size ++;
	}
	return (size);
}

// int	main(int argc, char **argv)
// {
// 	if (argc != 3)
// 		return (0);
// 	t_list	**list;
// 	t_list	*first_elem;
// 	int		i;

// 	i = 0;
// 	list = ft_calloc(4, sizeof(t_list *));

// 	first_elem = ft_lstnew(argv[1]);

// 	list[0] = first_elem;
// 	list[1] = NULL;
// 	while (list[i] != NULL)
// 	{
// 		ft_putendl(list[i]->content);
// 		i ++;
// 	}
// 	ft_putendl("Liste->content");
// 	ft_putendl("");
// 	ft_putnbr(ft_lstsize(list[0]));
// 	ft_putstr(" <- Taille de liste");
// 	return (0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:28:54 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/04 20:57:38 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	struct s_list	*tmp;

	if (!lst)
		return (NULL);
	if (!(lst->next))
		return (lst);
	tmp = lst->next;
	while (tmp->next != NULL)
		tmp = tmp->next;
	return (tmp);
}

// int	main(int argc, char **argv)
// {
// 	t_list	**list;
// 	t_list	*first_elem;
// 	t_list	*second_elem;
// 	t_list	*third_elem;
// 	int		i;

// 	if (argc != 4)
// 		return (0);

// 	i = 0;
// 	list = ft_calloc(4, sizeof(t_list *));

// 	first_elem = ft_lstnew(argv[1]);
// 	second_elem = ft_lstnew(argv[2]);
// 	third_elem = ft_lstnew(argv[3]);

// 	first_elem->next = second_elem;
// 	second_elem->next = third_elem;

// 	list[0] = first_elem;
// 	list[1] = second_elem;
// 	list[2] = third_elem;
// 	list[3] = NULL;
// 	while (list[i] != NULL)
// 	{
// 		ft_putendl(list[i]->content);
// 		i++;
// 	}
// 	ft_putendl("Liste->content");
// 	ft_putendl("");
// 	ft_putstr((ft_lstlast(list[0]))->content);
// 	ft_putstr(" <- Dernier element");
// 	return (0);
// }
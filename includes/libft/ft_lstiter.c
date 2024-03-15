/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 14:58:21 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/05 16:39:32 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst != NULL)
	{
		(*f)(lst->content);
		lst = lst->next;
	}
}

// static void	to_upper_lst(void *content)
// {
// 	int i;
// 	char *content_p;

// 	content_p = content;
// 	i = 0;
// 	while (content_p[i])
// 	{
// 		content_p[i] -= 32;
// 		i++;
// 	}
// }

// int	main(int argc, char **argv)
// {
// 	t_list	**list;
// 	t_list	*first_elem;
// 	t_list	*second_elem;
// 	t_list	*third_elem;
// 	t_list	*fourth_elem;
// 	int		i;

// 	if (argc != 5)
// 		return (0);

// 	i = 0;
// 	list = ft_calloc(4, sizeof(t_list *));

// 	first_elem = ft_lstnew(argv[1]);
// 	second_elem = ft_lstnew(argv[2]);
// 	third_elem = ft_lstnew(argv[3]);
// 	fourth_elem = ft_lstnew(argv[4]);

// 	first_elem->next = second_elem;
// 	second_elem->next = third_elem;

// 	list[0] = first_elem;
// 	list[1] = second_elem;
// 	list[2] = third_elem;
// 	list[3] = fourth_elem;
// 	list[4] = NULL;
// 	while (list[i] != NULL)
// 	{
// 		ft_putendl(list[i]->content);
// 		i++;
// 	}
// 	ft_putendl("Liste->content");
// 	ft_putendl("");
// 	ft_putstr((ft_lstlast(list[0]))->content);
// 	ft_putendl(" <- Dernier element avant addlast");
// 	ft_lstadd_back(&first_elem, fourth_elem);
// 	ft_putstr((ft_lstlast(list[0]))->content);
// 	ft_putendl(" <- Dernier element apres addlast");
// 	ft_lstiter(first_elem, &to_upper_lst);
// 	i = 0;
// 	while (list[i] != NULL)
// 	{
// 		ft_putendl(list[i]->content);
// 		i++;
// 	}
// 	ft_putendl("Liste->content apres lstiter");
// 	ft_putendl("");
// 	return (0);
// }
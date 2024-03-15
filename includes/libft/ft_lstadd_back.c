/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:58:14 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/09/04 18:32:43 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*tmp;

	if (!new)
		return ;
	else if (!lst || !(*lst))
		*lst = new;
	else
	{
		tmp = *lst;
		tmp = ft_lstlast(*lst);
		tmp->next = new;
		return ;
	}
}

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

// 	// first_elem->next = second_elem;
// 	// second_elem->next = third_elem;

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
// 	i = 1;
// 	while (i <= 4)
// 	{
// 		ft_lstadd_back(&first_elem, list[i]);
// 		ft_putstr((ft_lstlast(list[0]))->content);
// 		ft_putendl(" <- Dernier element apres addlast");
// 		i ++;
// 	}
// 	return (0);
// }

	// WAR MACHINE

// void	ft_print_result(t_list *elem)
// {
// 	int		len;

// 	len = 0;
// 	while (((char *)elem->content)[len])
// 		len++;
// 	write(1, elem->content, len);
// 	write(1, "\n", 1);
// }

// t_list	*ft_lstnewone(void *content)
// {
// 	t_list	*elem;

// 	elem = (t_list *)malloc(sizeof(t_list));
// 	if (!elem)
// 		return (NULL);
// 	if (!content)
// 		elem->content = NULL;
// 	else
// 		elem->content = content;
// 	elem->next = NULL;
// 	return (elem);
// }

// int main(int argc, const char *argv[])
// {
// 	t_list		*begin;
// 	t_list		*elem;
// 	t_list		*elem2;
// 	t_list		*elem3;
// 	t_list		*elem4;
// 	char		*str = strdup("lorem");
// 	char		*str2 = strdup("ipsum");
// 	char		*str3 = strdup("dolor");
// 	char		*str4 = strdup("sit");

// 	elem = ft_lstnewone(str);
// 	elem2 = ft_lstnewone(str2);
// 	elem3 = ft_lstnewone(str3);
// 	elem4 = ft_lstnewone(str4);
// 	alarm(5);
// 	if (argc == 1 || !elem || !elem2 || !elem3 || !elem4)
// 		return (0);
// 	else if (atoi(argv[1]) == 1)
// 	{
// 		begin = NULL;
// 		ft_lstadd_back(&begin, elem);
// 		ft_lstadd_back(&begin, elem2);
// 		ft_lstadd_back(&begin, elem3);
// 		ft_lstadd_back(&begin, elem4);
// 		while (begin)
// 		{
// 			ft_print_result(begin);
// 			begin = begin->next;
// 		}
// 	}
// 	return (0);
// }
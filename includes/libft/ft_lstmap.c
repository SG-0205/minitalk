/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:40:49 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/17 14:25:54 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*begin;
	t_list	*work;

	if (lst != NULL && f != NULL)
	{
		begin = ft_lstnew(f(lst->content));
		if (!begin)
			return (NULL);
		work = begin;
		while (lst->next)
		{
			lst = lst->next;
			if (work == NULL)
			{
				ft_lstclear(&begin, del);
				return (NULL);
			}
			work->next = ft_lstnew(f(lst->content));
			work = work->next;
		}
		return (begin);
	}
	return (NULL);
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
// static void	to_lower_lst(void *content)
// {
// 	int i;
// 	char *content_p;
// 	content_p = content;
// 	i = 0;
// 	while (content_p[i])
// 	{
// 		content_p[i] += 32;
// 		i++;
// 	}
// }
// static void	del_cont(void *content)
// {
// 	ft_bzero(content, ft_strlen(content));
// }
// int	main(int argc, char **argv)
// {
// 	t_list	**list;
// 	t_list	*first_elem;
// 	t_list	*second_elem;
// 	t_list	*third_elem;
// 	t_list	*fourth_elem;
// 	t_list	*mapped_list;
// 	int		i;
// 	if (argc != 5)
// 		return (0);
// 	i = 0;
// 	list = ft_calloc(4, sizeof(t_list *));
// 	mapped_list = ft_calloc(4, sizeof(t_list *));
// 	first_elem = ft_lstnew(argv[1]);
// 	second_elem = ft_lstnew(argv[2]);
// 	third_elem = ft_lstnew(argv[3]);
// 	fourth_elem = ft_lstnew(argv[4]);
// 	void	*f = to_lower_lst;
// 	void	*del = del_cont;
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
// 	mapped_list = ft_lstmap(first_elem, f, del);
// 	i = 0;
// 	while (mapped_list)
// 	{
// 		ft_putendl(mapped_list->content);
// 		mapped_list = mapped_list->next;
// 	}
// 	ft_putendl("Liste->content apres lstmap");
// 	ft_putendl("");
// 	return (0);
// }
//	WARMACHINE
// void	ft_print_result(t_list *elem)
// {
// 	int		len;
// 	len = 0;
// 	while (((char *)elem->content)[len])
// 		len++;
// 	write(1, ((char *)elem->content), len);
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
// void	*ft_map(void *ct)
// {
// 	int i;
// 	void	*c;
// 	char	*pouet;
// 	c = ct;
// 	i = -1;
// 	pouet = (char *)c;
// 	while (pouet[++i])
// 		if (pouet[i] == 'o')
// 			pouet[i] = 'a';
// 	return (c);
// }
// void    ft_del(void *content)
// {
// 	free(content);
// }
// int main(int argc, const char *argv[])
// {
// 	t_list		*elem;
// 	t_list		*elem2;
// 	t_list		*elem3;
// 	t_list		*elem4;
// 	t_list		*list;
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
// 	elem->next = elem2;
// 	elem2->next = elem3;
// 	elem3->next = elem4;
// 	if (atoi(argv[1]) == 1)
// 	{
// 		if (!(list = ft_lstmap(elem, &ft_map, &ft_del)))
// 			return (0);
// 		if (list == elem)
// 			write(1, "A new list is not returned\n", 27);
// 		int i;
// 		i = 0;
// 		ft_print_result(list);
// 		while (list->next)
// 		{
// 			list = list->next;
// 			ft_print_result(list);
// 			i++;
// 		}
// 	}
// 	return (0);
// }

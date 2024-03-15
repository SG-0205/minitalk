/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 15:01:28 by sgoldenb          #+#    #+#             */
/*   Updated: 2023/05/17 14:20:13 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <stdio.h>

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	int				end;
	unsigned char	c_new;

	c_new = (unsigned char)c;
	str = (char *)s;
	end = ft_strlen(s);
	while (end >= 0)
	{
		if (end == 0 && s[end] != c_new)
			return (NULL);
		else if (str[end] == c_new)
			return (&str[end]);
		end --;
	}
	return (str);
}

// int main()
// {
// 	const char	str[]="bonjour";
// 	char	c='b';
// 	char	*p_str;

// 	p_str = ft_strchr(str, c);
// 	printf("%s", p_str);
// 	if (p_str[0] == '\0')
// 		printf("Much Waw");
// 	return (0);
// }
//
//	WarMachine
// void	ft_print_result(char const *s)
// {
// 	int		len;

// 	len = 0;
// 	while (s[len])
// 		len++;
// 	write(1, s, len);
// }

// int		main(int argc, const char *argv[])
// {
// 	char		*str;
// 	char		str2[] = "bonjour";
// 	int			arg;

// 	alarm(5);
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 	{
// 		if (!(str = ft_strrchr(str2, 'b')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			ft_print_result(str);
// 			if (str != str2)
// 				ft_print_result("\nReturn value is false");
// 		}
// 	}
// 	else if (arg == 2)
// 	{
// 		if (!(str = ft_strrchr(str2, 'o')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			ft_print_result(str);
// 			if (str != str2 + 4)
// 				ft_print_result("\nReturn value is false");
// 		}
// 	}
// 	else if (arg == 3)
// 	{
// 		char	str3[]= "bonjourno";
// 		if (!(str = ft_strrchr(str3, 'o')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			ft_print_result(str);
// 			if (str != str3 + 8)
// 				ft_print_result("\nReturn value is false");
// 		}
// 	}
// 	else if (arg == 4)
// 	{
// 		if (!(str = ft_strrchr(str2, 'j')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			ft_print_result(str);
// 			if (str != str2 + 3)
// 				ft_print_result("\nReturn value is false");
// 		}
// 	}
// 	else if (arg == 5)
// 	{
// 		if (!(str = ft_strrchr(str2, 's')))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	else if (arg == 6)
// 	{
// 		if (!(str = ft_strrchr(str2, '\0')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			ft_print_result(str);
// 			if (str != str2 + 7)
// 				ft_print_result("\nReturn value is false");
// 		}
// 	}
// 	else if (arg == 7)
// 	{
// 		char	str3[] = "";
// 		if (!(str = ft_strrchr(str3, '\0')))
// 			ft_print_result("NULL");
// 		else
// 		{
// 			ft_print_result(str);
// 			if (str != str3)
// 				ft_print_result("\nReturn value is false");
// 		}
// 	}
// 	else if (arg == 8)
// 	{
// 		if (!(str = ft_strrchr(str2 + 2, 'b')))
// 			ft_print_result("NULL");
// 		else
// 			ft_print_result(str);
// 	}
// 	return (0);
// }
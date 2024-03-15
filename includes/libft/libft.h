/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgoldenb <sgoldenb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 22:40:57 by sgoldenb          #+#    #+#             */
/*   Updated: 2024/03/08 20:41:53 by sgoldenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include "gnl/get_next_line.h"
# include <errno.h>
# include <stdarg.h>
# include <stdlib.h>
# include <string.h>
# include <unistd.h>

# define TRUE 1
# define FALSE 0
# define ERROR 2

# define RESET "\e[0m"
# define BOLD "\e[1m"
# define FAINT "\e[2m"
# define ITALIC "\e[3m"
# define UNDERLINE "\e[4m"
# define BLINK "\e[5m"
# define INVERSE "\e[7m"
# define HIDDEN "\e[8m"
# define STRIKETHROUGH "\e[9m"
# define RESET_BOLD "\e[21m"
# define RESET_FAINT "\e[22m"
# define RESET_ITALIC "\e[23m"
# define RESET_UNDERLINE "\e[24m"
# define RESET_BLINK "\e[25m"
# define RESET_INVERSE "\e[27m"
# define RESET_HIDDEN "\e[28m"
# define RESET_STRIKETHROUGH "\e[29m"

# define BLACK "\e[30m"
# define RED "\e[31m"
# define GREEN "\e[32m"
# define YELLOW "\e[33m"
# define BLUE "\e[34m"
# define MAGENTA "\e[35m"
# define CYAN "\e[36m"
# define WHITE "\e[37m"
# define LIGHT_BLACK "\e[90m"
# define LIGHT_RED "\e[91m"
# define LIGHT_GREEN "\e[92m"
# define LIGHT_YELLOW "\e[93m"
# define LIGHT_BLUE "\e[94m"
# define LIGHT_MAGENTA "\e[95m"
# define LIGHT_CYAN "\e[96m"
# define LIGHT_WHITE "\e[97m"

# define BG_BLACK "\e[40m"
# define BG_RED "\e[41m"
# define BG_GREEN "\e[42m"
# define BG_YELLOW "\e[43m"
# define BG_BLUE "\e[44m"
# define BG_MAGENTA "\e[45m"
# define BG_CYAN "\e[46m"
# define BG_WHITE "\e[47m"
# define BG_LIGHT_BLACK "\e[100m"
# define BG_LIGHT_RED "\e[101m"
# define BG_LIGHT_GREEN "\e[102m"
# define BG_LIGHT_YELLOW "\e[103m"
# define BG_LIGHT_BLUE "\e[104m"
# define BG_LIGHT_MAGENTA "\e[105m"
# define BG_LIGHT_CYAN "\e[106m"
# define BG_LIGHT_WHITE "\e[107m"

typedef int			t_bool;
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *s, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_calloc(size_t nmemb, size_t size);

size_t				ft_strlen(const char *s);
size_t				ft_lentillc(const char *s, char c);
size_t				ft_countwords(const char *s, char c);
char				*ft_strdup(const char *s1);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
int					ft_strlcpy(char *dst, const char *src, size_t size);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *str, const char *to_find);
char				*ft_strnstr(const char *big, const char *little,
						size_t len);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);

int					ft_atoi(const char *str);

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);
void				ft_intlen(long int n, size_t *container);

void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);

char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				**ft_split(char const *s, char c);

char				*ft_itoa(int n);

void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_putnbr_base(int nbr, char *base);

t_list				*ft_lstnew(void const *content);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstlink(size_t size, ...);
void				ft_lstadd_front(t_list **lst, t_list *new);
int					ft_lstsize(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstclear(t_list **lst, void (*del)(void *));

int					ft_cisar(char c, const char *array);

// PRINTF

# define SPEC "csdiupxX%"
# define BASE_HEX_MIN "0123456789abcdef"
# define BASE_HEX_MAJ "0123456789ABCDEF"
# define BASE_TEN "0123456789"

void				ft_putunsigned(unsigned long long nbr, const char *base,
						int *len);
void				ft_putnbr_base_f(int nbr, const char *base, int *len);
void				ft_printpointer(unsigned long long pointer,
						const char *base, int *len);
void				ft_putchar_f(char c, int *len);
void				ft_putstr_f(const char *str, int *len);
int					ft_printf(const char *format, ...);

#endif
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:30:54 by ryusupov          #+#    #+#             */
/*   Updated: 2024/04/29 17:17:27 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*---------------MANDATORY PART------------------*/

void				ft_bzero(void *p, size_t n);
void				*ft_memcpy(void *to, const void *from, size_t n);
void				*ft_memset(void *p, int i, size_t len);
void				*ft_memmove(void *to, const void *from, size_t len);
void				*ft_memchr(const void *p, int i, size_t n);
void				ft_striteri(char *s1, void (*f)(unsigned int, char *));
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s1, int fd);
void				ft_putendl_fd(char *s1, int fd);
void				ft_putnbr_fd(int n, int fd);
void				*ft_calloc(size_t count, size_t size);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strcmp(const char *str1, const char *str2);
int					ft_isalnum(int i);
int					ft_isalpha(int i);
int					ft_isascii(int i);
int					ft_isdigit(int i);
int					ft_isprint(int i);
int					ft_toupper(int i);
int					ft_tolower(int i);
char				*ft_strtrim(char const *s1, char const *set);
int					ft_atoi(const char *str);
char				*ft_itoa(int n);
char				*ft_strmapi(char const *s1, char (*f)(unsigned int, char));
char				*ft_strjoin(char const *s1, char const *s2);
char				**ft_split(char const *str, char set);
char				*ft_strdup(const char *s1);
char				*ft_substr(char const *s1, unsigned int start, size_t len);
char				*ft_strnstr(const char *hydr, const char *needle, size_t n);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
char				*ft_strchr(const char *s, int i);
char				*ft_strrchr(const char *p, int i);
size_t				ft_strlcpy(char *to, const char *from, size_t dstsize);
size_t				ft_strlcat(char *to, const char *from, size_t dstsize);
size_t				ft_strlen(const char *str);

/*-----------------BONUS PART-------------------*/

t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *),
						void (*del)(void *));
void				ft_lstadd_front(t_list **lst, t_list *new);
void				ft_lstadd_back(t_list **lst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del)(void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
int					ft_lstsize(t_list *lst);
int					list_sorted(t_list *lst);

#endif

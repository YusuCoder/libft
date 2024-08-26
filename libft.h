/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ryusupov <ryusupov@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 15:30:54 by ryusupov          #+#    #+#             */
/*   Updated: 2024/08/26 14:35:43 by ryusupov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include <stdbool.h>
# include <stddef.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

// #include "../ryusupov.h"

typedef struct s_ryusupov
{
	void				*window;
	void				*context;
	int					r_content;
	int					i;
	int					r_pos;
	int					r_target_pos;
	int					r_cost_a;
	int					r_cost_b;
	double				delta_time;
	void				*content;
	int					x;
	int					y;
	struct s_ryusupov	*next;
}						t_ryusupov;

/*---------------MANDATORY PART------------------*/

void					ft_bzero(void *p, size_t n);
void					*ft_memcpy(void *to, const void *from, size_t n);
void					*ft_memset(void *p, int i, size_t len);
void					*ft_memmove(void *to, const void *from, size_t len);
void					*ft_memchr(const void *p, int i, size_t n);
void					ft_striteri(char *s1, void (*f)(unsigned int, char *));
void					ft_putchar_fd(char c, int fd);
void					ft_putstr_fd(char *s1, int fd);
void					ft_putendl_fd(char *s1, int fd);
void					ft_putnbr_fd(int n, int fd);
void					*ft_calloc(size_t count, size_t size);
int						ft_memcmp(const void *s1, const void *s2, size_t n);
int						ft_strcmp(const char *str1, const char *str2);
int						ft_isalnum(int i);
int						ft_isspace(char c);
int						ft_isalpha(int i);
int						ft_isascii(int i);
int						ft_isdigit(int i);
int						ft_isprint(int i);
int						ft_toupper(int i);
int						ft_tolower(int i);
char					*ft_strtrim(char const *s1, char const *set);
int						ft_atoi(const char *str);
int long				ft_atol(const char *str);
char					*ft_itoa(int n);
char					*ft_strmapi(char const *s1, char (*f)(unsigned int,
								char));
char					*ft_strjoin(char const *s1, char const *s2);
char					**ft_split(char const *s1, char c);
// char					**ft_split(char *s, char c);
char					*ft_strdup(const char *s1);
char					*ft_substr(char const *s1, unsigned int start,
							size_t len);
char					*ft_strnstr(const char *hydr, const char *needle,
							size_t n);
int						ft_strncmp(const char *s1, const char *s2, size_t n);
int						ft_strcmp(const char *str1, const char *str2);
char					*ft_strchr(const char *s, int i);
char					*ft_strrchr(const char *p, int i);
size_t					ft_strlcpy(char *to, const char *from, size_t dstsize);
size_t					ft_strlcat(char *to, const char *from, size_t dstsize);
size_t					ft_strlen(const char *str);
char					*ft_strchr2(const char *str, char c);

/*-----------------BONUS PART-------------------*/

t_ryusupov				*ft_lstnew(void *content);
t_ryusupov				*ft_lstlast(t_ryusupov *lst);
t_ryusupov				*ft_lstmap(t_ryusupov *lst, void *(*f)(void *),
							void (*del)(void *));
void					ft_lstadd_front(t_ryusupov **lst, t_ryusupov *new);
void					ft_lstadd_back(t_ryusupov **lst, t_ryusupov *new);
void					ft_lstdelone(t_ryusupov *lst, void (*del)(void *));
void					ft_lstclear(t_ryusupov **lst, void (*del)(void *));
void					ft_lstiter(t_ryusupov *lst, void (*f)(void *));
int						ft_lstsize(t_ryusupov *lst);
int						list_sorted(t_ryusupov *lst);

/*---------------GET_NEXT_LINE------------------*/
typedef struct t_struct
{
	int					new_l_buffer;
	int					fd;
}						t_struct;

t_struct				*get_t_struct(int new_fd);
char					*ft_strjoin_new(char *s1, char *s2);
char					*ft_strndup(char *str, int start, int end);
char					*get_next_line(int fd);
int						new_line(char *str);

#endif

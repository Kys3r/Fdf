/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   libft.h                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 15:23:05 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/05 14:10:32 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <fcntl.h>

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

# define BUFF_SIZE 42

typedef struct		s_lst
{
	struct s_lst	*next;
	char			*save;
	int				fd;
	int				ret_count;
}					t_lst;

int					get_next_line(const int fd, char **line);
int					ft_power(int nb, int power);
void				ft_swap(char *a, char *b);
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstdel(t_list **alst, void (*del)(void*, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
t_list				*ft_lstnew(void const *content, size_t content_size);
int					ft_atoi(char *str);
void				ft_bzero(void *buf, size_t count);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
char				*ft_itoa(int n);
int					ft_isascii(int c);
void				ft_putnbr(int n);
size_t				ft_strclen(const char *str, char c);
void				*ft_memset(void *buf, int c, size_t count);
void				*ft_memalloc(size_t size);
void				*ft_memccpy(void *dest, const void *src, int c,
	size_t count);
void				*ft_memmove(void *str1, const void *str2, size_t n);
void				*ft_memchr(const void *str, int c, size_t count);
int					ft_memcmp(const void *str1, const void *str2, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t count);
void				ft_memdel(void **ap);
void				ft_putchar_fd(char c, int fd);
void				ft_putchar(char c);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putendl(char const *s);
void				ft_putnbr_fd(int n, int fd);
void				ft_putstr(char *str);
void				ft_putstr_fd(char const *s, int fd);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strchr(const char *str, int count);
void				ft_strclr(char *s);
int					ft_strcmp(char *s1, char *s2);
char				*ft_strcpy(char *dest, const char *src);
void				ft_strdel(char **as);
char				*ft_strdup(const char *str);
int					ft_strequ(char const *s1, char const *s2);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strjoin(char const *s1, char const *s2);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
size_t				ft_strlen(const char *str);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
char				*ft_strncat(char *dest, const char *src, size_t count);
int					ft_strncmp(char *s1, char *s2, size_t count);
char				*ft_strncpy(char *dest, const char *src, size_t count);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strnew(size_t size);
size_t				ft_strnlen(const char *str, char c, size_t n);
char				*ft_strnstr(char *checked, char *tofind, size_t count);
char				*ft_strrchr(const char *str, int count);
char				*ft_strrev(char *str);
char				**ft_strsplit(char const *s, char c);
char				*ft_strstr(char *checked, char *tofind);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strtrim(char const *s);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_leak_sub(char const *s, unsigned int start, size_t len);
int					ft_search_rc(char *str, int param);
char				*ft_strmerge(char *s1, char *s2);
char        		*ft_strndup(const char *s, size_t n);
int					ft_count_word(const char *str, int c);

#endif

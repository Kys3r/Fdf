/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   get_next_line.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/06 15:31:42 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:34:48 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_lst	*ft_initialize_list(int fd)
{
	t_lst	*list;

	list = (t_lst *)malloc(sizeof(t_lst));
	list->fd = fd;
	list->save = NULL;
	list->next = NULL;
	list->ret_count = 0;
	return (list);
}

char	*ft_modify(char **line, t_lst *list, int count)
{
	char	*tmp;

	if (ft_search_rc(list->save, 2) > 0)
	{
		*line = ft_strsub(list->save, 0, count);
		list->ret_count = 1;
	}
	else
	{
		*line = ft_strsub(list->save, 0, ft_strlen(list->save));
		if (*line == NULL)
			list->ret_count = 0;
		else
			list->ret_count = 1;
		free(list->save);
		return (NULL);
	}
	tmp = ft_leak_sub(list->save, count + 1, ft_strlen(list->save) - count);
	return (tmp);
}

int		get_next_work(t_lst *list, char **line)
{
	char		buf[BUFF_SIZE + 1];
	int			ret_read;
	int			i;

	i = 0;
	if (list->save == NULL)
		list->save = ft_memalloc(1);
	if ((ret_read = ft_search_rc(list->save, 1)) > 0 && BUFF_SIZE > 1)
		list->save = ft_modify(line, list, ret_read);
	else
	{
		while ((ret_read = read(list->fd, buf, BUFF_SIZE)) > 0)
		{
			i = 1;
			buf[ret_read] = '\0';
			list->save = ft_strmerge(list->save, buf);
			if (ft_search_rc(buf, 2) > 0 || buf[0] == '\n')
				break ;
		}
		ret_read = ft_search_rc(list->save, 1);
		list->save = ft_modify(line, list, ret_read);
	}
	return (i | list->ret_count);
}

int		get_next_line(const int fd, char **line)
{
	static	t_lst	*list = NULL;
	t_lst			*actual;
	int				ret;

	if (line == NULL || fd < 0 || BUFF_SIZE < 1 || read(fd, *line, 0))
		return (-1);
	if (!list)
		list = ft_initialize_list(fd);
	actual = list;
	while (actual->fd != fd && actual->next != NULL)
		actual = actual->next;
	if (actual->fd == fd)
		ret = get_next_work(actual, line);
	else
	{
		actual->next = ft_initialize_list(fd);
		actual = actual->next;
		ret = get_next_work(actual, line);
	}
	return (ret);
}

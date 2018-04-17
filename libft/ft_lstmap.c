/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/18 19:38:59 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:36:01 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*list;
	t_list	*tmp;

	if (lst && f)
	{
		if (!(list = f(lst)))
			return (NULL);
		tmp = list;
		lst = lst->next;
		while (lst)
		{
			if (!(list->next = f(lst)))
				return (NULL);
			lst = lst->next;
			list = list->next;
		}
	}
	else
		return (NULL);
	return (tmp);
}

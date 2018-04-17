/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnstr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 10:19:06 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:34:15 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *checked, char *tofind, size_t count)
{
	size_t i;
	size_t x;
	size_t match;

	i = 0;
	if (!(tofind[0]))
		return (checked);
	while (checked[i] && i < count)
	{
		x = 0;
		if (checked[i] == tofind[x])
		{
			match = i;
			while (tofind[x] && checked[i] == tofind[x] && i++ < count)
				x++;
			i = match;
		}
		if (tofind[x] == '\0')
			return (&checked[match]);
		match = 0;
		i++;
	}
	return (0);
}

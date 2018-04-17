/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strstr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 10:19:50 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:34:27 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(char *checked, char *tofind)
{
	int i;
	int x;
	int match;

	i = -1;
	if (!(tofind[0]))
		return (checked);
	while (checked[++i])
	{
		x = 0;
		if (checked[i] == tofind[x])
		{
			match = i;
			while (tofind[x] && checked[i] == tofind[x])
			{
				i++;
				x++;
			}
			i = match;
		}
		if (tofind[x] == '\0')
			return (&checked[match]);
		match = 0;
	}
	return (0);
}

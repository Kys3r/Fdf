/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_search_rc.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 12:14:37 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:33:01 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_search_rc(char *str, int param)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == '\n')
		{
			if (param == 1)
				return (i);
			else if (param == 2)
				return (1);
		}
		i++;
	}
	return (-1);
}

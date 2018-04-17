/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strclen.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 18:42:25 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:33:13 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strclen(const char *str, char c)
{
	size_t	i;
	size_t	x;

	i = 0;
	x = 0;
	while (str[x++])
	{
		if (str[x] != c && (str[x + 1] == c || str[x + 1] == '\0'))
			i++;
	}
	return (i);
}

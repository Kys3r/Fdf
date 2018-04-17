/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strnlen.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 10:18:57 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:34:12 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *str, char c, size_t n)
{
	size_t x;
	size_t match;

	x = 0;
	match = 0;
	while (str[n])
	{
		if (str[n] != c)
			match = 1;
		while (str[n] != c && str[n])
		{
			x++;
			n++;
		}
		if ((str[n] == c && match == 1) || str[n] == '\0')
			return (x);
		n++;
	}
	return (0);
}

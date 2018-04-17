/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 10:11:44 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:36:15 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t count)
{
	size_t			i;
	unsigned char	*ret;
	unsigned char	x;

	i = 0;
	x = (unsigned char)c;
	ret = (unsigned char *)str;
	while (i < count)
	{
		if (*ret == x)
			return (ret);
		ret++;
		i++;
	}
	return (NULL);
}

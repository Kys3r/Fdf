/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memccpy.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 10:11:27 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:36:11 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t count)
{
	size_t				i;
	unsigned char		*tmpdest;
	const unsigned char	*tmpsrc;

	i = 0;
	tmpdest = (unsigned char *)dest;
	tmpsrc = (unsigned char *)src;
	while (i < count)
	{
		tmpdest[i] = tmpsrc[i];
		if (tmpdest[i] == (unsigned char)c)
			return (tmpdest + i + 1);
		i++;
	}
	return (NULL);
}

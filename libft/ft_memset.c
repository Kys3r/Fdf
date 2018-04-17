/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memset.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 10:12:13 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:36:25 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int c, size_t count)
{
	unsigned char	*temp;

	if (count == 0)
		return (buf);
	temp = (unsigned char *)buf;
	while (count--)
	{
		*temp = (unsigned char)c;
		if (count)
			temp++;
	}
	return (buf);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_memmove.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 10:20:29 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:36:29 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*temp;

	temp = ft_strnew(n);
	if (temp)
	{
		temp = ft_memcpy(temp, src, n);
		dest = ft_memcpy(dest, temp, n);
	}
	return (dest);
}

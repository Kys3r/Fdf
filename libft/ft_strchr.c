/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strchr.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 10:13:41 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:33:10 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int count)
{
	count = (unsigned char)count;
	while (count != *str && *str)
		str++;
	if (count == *str)
		return ((char *)str);
	return (0);
}

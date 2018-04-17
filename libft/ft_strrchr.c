/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strrchr.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 10:19:13 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:34:18 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int count)
{
	int		i;
	char	*ret;

	ret = (char *)str;
	i = ft_strlen(ret);
	count = (unsigned char)count;
	while (count != ret[i] && i >= 0)
		i--;
	if (count == ret[i])
		return (&ret[i]);
	return (0);
}

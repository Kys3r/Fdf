/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 10:16:51 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:33:40 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	len;

	if (!(s1 && s2))
		return (0);
	len = ft_strlen((char *)s1) + ft_strlen((char *)s2);
	if (!(str = malloc(sizeof(char) * ((len + 1)))))
		return (NULL);
	if (str)
	{
		ft_strcpy(str, s1);
		ft_strcat(str, s2);
	}
	else
		return (NULL);
	return (str);
}

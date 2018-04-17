/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strncmp.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 10:18:07 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:34:01 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(char *s1, char *s2, size_t count)
{
	size_t	i;

	i = 0;
	if (count == 0)
		return (0);
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < count - 1)
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

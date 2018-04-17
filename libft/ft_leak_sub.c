/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_leak_sub.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/01/05 11:49:50 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:29:41 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_leak_sub(char const *s, unsigned int start, size_t len)
{
	char	*save;

	save = ft_strsub(s, start, len);
	free((void *)s);
	return (save);
}

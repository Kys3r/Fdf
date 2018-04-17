/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strndup.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/05 14:06:19 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/05 14:06:53 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char        *ft_strndup(const char *s, size_t n)
{
    char    *str;
    if (!(str = ft_memalloc(n + 1)))
        return (NULL);
    ft_strncpy(str, s, n);
    return (str);
}
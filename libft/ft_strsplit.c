/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strsplit.c                                    .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 10:19:36 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/05 14:02:34 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(const char *s, char c)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	**str;

	i = 0;
	k = 0;
	if (!(str = ft_memalloc(sizeof(char *) * (ft_count_word(s, c) + 1))) || !s)
		return (NULL);
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		l = i;
		j = 0;
		while (s[i] != c && s[i])
		{
			i++;
			j++;
		}
		if (j)
			str[k++] = ft_strndup(s + l, j);
	}
	return (str);
}
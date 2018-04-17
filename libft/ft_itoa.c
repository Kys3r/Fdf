/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_itoa.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/13 10:11:11 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/02/19 15:35:31 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char	*ret;
	int		negativ;
	int		i;

	negativ = 1;
	i = 0;
	if (n == -2147483648)
		return (ret = ft_strdup("-2147483648"));
	if (!(ret = ft_memalloc(sizeof(char) * 13)))
		return (NULL);
	if (n < 0)
	{
		n *= -1;
		negativ = -1;
	}
	while (n > 9)
	{
		ret[i++] = (n % 10) + '0';
		n /= 10;
	}
	if (n < 10)
		ret[i++] = n + '0';
	if (negativ == -1)
		ret[i] = '-';
	return (ft_strrev(ret));
}

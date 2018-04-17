/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   init_struct_parse.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/07 18:37:53 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/10 09:54:07 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../fdf.h"

t_parse				*ft_init_parse(void)
{
	t_parse			*ret_struct;

	ret_struct = (t_parse *)malloc(sizeof(t_parse));
	ret_struct->count_y = 0;
	ret_struct->count_x = 0;
	ret_struct->fd = 0;
	ret_struct->tmp_grid = NULL;
	return (ret_struct);
}

t_fdf				*ft_init_fdf(void)
{
	t_fdf			*ret_struct;

	ret_struct = (t_fdf *)malloc(sizeof(t_fdf));
	ret_struct->x = 0;
	ret_struct->y = 0;
	ret_struct->grid = NULL;
	ret_struct->next = NULL;
	return (ret_struct);
}

void				del_lst_char(char **tmp_grid)
{
	int				x;

	x = 0;
	while (tmp_grid[x])
	{
		free(tmp_grid[x]);
		x++;
	}
	free(tmp_grid);
}

t_window			*ft_init_window(void)
{
	t_window		*ret;

	ret = (t_window *)malloc(sizeof(t_window));
	ret->mlx_ptr = mlx_init();
	ret->win_ptr = mlx_new_window(ret->mlx_ptr, 1300, 800, "*|| F d F ||*");
	return (ret);
}

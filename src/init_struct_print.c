/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   init_struct_print.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/03 14:19:26 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/10 09:51:28 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../fdf.h"

t_grid				*ft_init_grid(t_key *map)
{
	t_grid			*ret_grid;

	ret_grid = (t_grid *)malloc(sizeof(t_grid));
	ret_grid->abs_x = map->left_right;
	ret_grid->abs_y = map->up_down;
	ret_grid->x1 = ret_grid->abs_x;
	ret_grid->y1 = ret_grid->abs_y;
	ret_grid->x2 = ret_grid->x1 + 30;
	ret_grid->y2 = ret_grid->y1 + 30;
	return (ret_grid);
}

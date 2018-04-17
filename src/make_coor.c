/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   make_coor.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/03 15:50:02 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/10 10:03:07 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../fdf.h"

void			ft_last_coor(t_grid *axe, t_count *ct, t_key *map)
{
	axe->x1 = axe->abs_x + (map->size_line * ct->count_x) + ct->tmp_size;
	axe->x2 = ((ct->count_x + 1) < map->fdf->x) ? axe->abs_x +
		(map->size_line * (ct->count_x + 1)) + ct->tmp_size : axe->x1;
	axe->y1 = (axe->abs_y + (ct->count_y * map->size_line)) -
		(map->fdf->grid[ct->count_y][ct->count_x] * map->z);
	axe->y2 = ((ct->count_x + 1) < map->fdf->x) ? (axe->abs_y +
		((ct->count_y) * map->size_line)) -
			(map->fdf->grid[ct->count_y][ct->count_x + 1] * map->z) : axe->y1;
	map->tmp_r = (map->fdf->grid[ct->count_y][ct->count_x] == 0) ? 0 : map->r;
	draw_line(*axe, *map->win, map);
	axe->x2 = (ct->count_y + 1 < map->fdf->y) ? axe->x1 +
		map->size_line : axe->x1;
	axe->y1 = (axe->abs_y + (ct->count_y * map->size_line)) -
		(map->fdf->grid[ct->count_y][ct->count_x] * map->z);
	axe->y2 = ((ct->count_y + 1) < map->fdf->y) ? (axe->abs_y +
			((ct->count_y + 1) * map->size_line)) -
				(map->fdf->grid[ct->count_y + 1][ct->count_x] *
					map->z) : axe->y1;
	map->tmp_r = (map->fdf->grid[ct->count_y][ct->count_x] == 0) ? 0 : map->r;
	draw_line(*axe, *map->win, map);
}

void			ft_make_coor(t_key *map)
{
	t_grid		*axe;
	t_count		*ct;

	axe = ft_init_grid(map);
	ct = ft_init_count();
	while (ct->count_y < map->fdf->y)
	{
		while (ct->count_x < map->fdf->x)
		{
			ft_last_coor(axe, ct, map);
			ct->count_x++;
		}
		ct->tmp_size += map->size_line;
		ct->count_x = 0;
		ct->count_y++;
	}
}

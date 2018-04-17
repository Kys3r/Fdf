/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   print_line.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/03 14:38:19 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/10 10:02:41 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../fdf.h"

void				draw_line(t_grid axe, t_window param, t_key *map)
{
	float			x;
	float			i;

	i = 0;
	x = axe.x1;
	if (x <= axe.x2)
		while (x <= axe.x2)
		{
			mlx_pixel_put(param.mlx_ptr, param.win_ptr, x, axe.y1 +
				((axe.y2 - axe.y1) * (x - axe.x1)) /
					(axe.x2 - axe.x1), (0x39F4B8 + map->tmp_r));
			x++;
		}
	else if (x > axe.x2)
		while (x > axe.x2)
		{
			mlx_pixel_put(param.mlx_ptr, param.win_ptr, x, axe.y1 +
				((axe.y2 - axe.y1) * (x - axe.x1)) /
					(axe.x2 - axe.x1), (0x39F4B8 + map->tmp_r));
			x--;
		}
	draw_line2(axe, param, map);
}

void				draw_line2(t_grid axe, t_window param, t_key *map)
{
	float			y;
	float			i;

	i = 0;
	y = axe.y1;
	if (y <= axe.y2)
		while (y <= axe.y2)
		{
			mlx_pixel_put(param.mlx_ptr, param.win_ptr, axe.x1 +
				((axe.x2 - axe.x1) * (y - axe.y1)) /
					(axe.y2 - axe.y1), y, (0x39F4B8 + map->tmp_r));
			y++;
		}
	else if (y > axe.y2)
		while (y > axe.y2)
		{
			mlx_pixel_put(param.mlx_ptr, param.win_ptr, axe.x1 +
				((axe.x2 - axe.x1) * (y - axe.y1)) /
					(axe.y2 - axe.y1), y, (0x39F4B8 + map->tmp_r));
			y--;
		}
}

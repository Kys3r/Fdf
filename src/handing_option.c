/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   handing_option.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/04 16:42:39 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/10 12:56:34 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../fdf.h"

void		ft_dashboard(t_key *map)
{
	t_dash	*dash;

	dash = ft_init_dash();
	mlx_string_put(map->win->mlx_ptr,
		map->win->win_ptr, 20, 15, 0x00FFF7, dash->up);
	mlx_string_put(map->win->mlx_ptr, map->win->win_ptr,
		20, 35, 0x00FFF7, dash->down);
	mlx_string_put(map->win->mlx_ptr, map->win->win_ptr,
		20, 55, 0x00FFF7, dash->left);
	mlx_string_put(map->win->mlx_ptr, map->win->win_ptr,
		20, 75, 0x00FFF7, dash->right);
	mlx_string_put(map->win->mlx_ptr, map->win->win_ptr,
		20, 95, 0x00FFF7, dash->zoom_plus);
	mlx_string_put(map->win->mlx_ptr, map->win->win_ptr,
		20, 115, 0x00FFF7, dash->zoom_moins);
	mlx_string_put(map->win->mlx_ptr, map->win->win_ptr,
		20, 135, 0x00FFF7, dash->map_plus);
	mlx_string_put(map->win->mlx_ptr, map->win->win_ptr,
		20, 155, 0x00FFF7, dash->map_moins);
	if (map->i++ == 0)
		mlx_string_put(map->win->mlx_ptr, map->win->win_ptr,
			480, 400, 0xE400FF, dash->str);
}

int			ft_event_mouse(int button, int x, int y, t_key *map)
{
	(void)x;
	(void)y;
	mlx_clear_window(map->win->mlx_ptr, map->win->win_ptr);
	ft_dashboard(map);
	map->size_line = (button == 5 && map->size_line < 70) ?
	map->size_line += 1 : map->size_line;
	map->size_line = (button == 4) ? map->size_line -= 1 : map->size_line;
	ft_make_coor(map);
	return (0);
}

int			ft_event_key(int key, t_key *map)
{
	mlx_clear_window(map->win->mlx_ptr, map->win->win_ptr);
	ft_dashboard(map);
	if (key == 53)
	{
		mlx_destroy_window(map->win->mlx_ptr, map->win->win_ptr);
		ft_putstr("Bye Bye !\n");
		exit(0);
		return (0);
	}
	map->z = (key == 69) ? map->z += 1 : map->z;
	map->r = (key == 69) ? map->r += 2 : map->r;
	map->z = (key == 78) ? map->z -= 1 : map->z;
	map->z = (key == 78) ? map->r -= 2 : map->r;
	map->up_down = (key == 125) ? map->up_down += 10 : map->up_down;
	map->up_down = (key == 126 && map->up_down > 10) ?
		map->up_down -= 10 : map->up_down;
	map->left_right = (key == 123 && map->left_right > 10) ?
		map->left_right -= 10 : map->left_right;
	map->left_right = (key == 124) ? map->left_right += 10 : map->left_right;
	ft_make_coor(map);
	return (1);
}

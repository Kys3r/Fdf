/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fdf.c                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/09 17:55:31 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/10 12:55:00 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../fdf.h"

int				main(int argc, char **argv)
{
	t_window	*win;
	t_fdf		*fdf;
	t_key		*map;
	int			secure;

	secure = 0;
	if (argc != 2 || (secure = open(argv[1], O_RDONLY) < 0))
	{
		ft_putstr("Usage: ./fdf [ file \"Check if the file exist\" ]\n");
		close(secure);
		return (0);
	}
	close(secure);
	win = ft_init_window();
	fdf = ft_init_fdf();
	fdf = parse(argv[1], fdf);
	map = ft_init_key(fdf, win);
	ft_dashboard(map);
	mlx_key_hook(map->win->win_ptr, ft_event_key, map);
	mlx_mouse_hook(map->win->win_ptr, ft_event_mouse, map);
	mlx_loop(win->mlx_ptr);
	return (0);
}

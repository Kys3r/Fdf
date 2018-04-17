/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   fdf.h                                            .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/06 13:12:59 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/10 10:28:55 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# include "libft/libft.h"
# include "mlx.h"

typedef	struct		s_count
{
	int				count_x;
	int				count_y;
	int				tmp_size;
}					t_count;

typedef	struct		s_liste
{
	int				x;
	int				y;
	int				**grid;

	struct s_liste	*next;
}					t_fdf;

typedef	struct		s_parse
{
	char			**tmp_grid;
	char			*line;
	int				fd;
	int				count_y;
	int				count_x;
}					t_parse;

typedef	struct		s_window
{
	void			*mlx_ptr;
	void			*win_ptr;
}					t_window;

typedef	struct		s_grid
{
	int				abs_x;
	int				abs_y;
	int				x1;
	int				y1;
	int				x2;
	int				y2;
}					t_grid;

typedef	struct		s_key
{
	t_window		*win;
	t_fdf			*fdf;
	int				size_line;
	int				z;
	int				r;
	int				tmp_r;
	int				up_down;
	int				left_right;
	int				i;
}					t_key;

typedef	struct		s_dash
{
	char			*str;
	char			*up;
	char			*down;
	char			*left;
	char			*right;
	char			*zoom_plus;
	char			*zoom_moins;
	char			*map_plus;
	char			*map_moins;
}					t_dash;

t_fdf				*parse(char *argv, t_fdf *fdf);
void				del_lst_char(char **tmp_grid);
void				del_lst_int(int **tmp_grid, int i);
t_parse				*ft_init_parse();
t_fdf				*ft_init_fdf();
t_window			*ft_init_window();
t_grid				*ft_init_grid(t_key *map);
t_count				*ft_init_count(void);
t_dash				*ft_init_dash(void);
void				ft_dashboard(t_key *map);
int					ft_event_key(int key, t_key *map);
int					ft_event_mouse(int button, int x, int y, t_key *map);
void				ft_print_line(t_grid *axe, t_window *win);
void				ft_make_coor(t_key *map);
void				draw_line(t_grid axe, t_window param, t_key *map);
void				draw_line2(t_grid axe, t_window param, t_key *map);
t_key				*ft_init_key(t_fdf *fdf, t_window *wind);
#endif

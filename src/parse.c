/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   parse.c                                          .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/02/09 17:59:27 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/10 12:38:38 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../fdf.h"

int				count_y(char *argv)
{
	int			fd;
	int			count_line;
	char		*line;

	fd = open(argv, O_RDONLY);
	count_line = 0;
	line = ft_memalloc(1);
	while (get_next_line(fd, &line))
	{
		count_line++;
		free(line);
	}
	close(fd);
	free(line);
	return (count_line);
}

int				count_x_char(char **tmp_grid)
{
	int			x;

	x = 0;
	while (tmp_grid[x])
		x++;
	return (x);
}

t_fdf			*make_grid(t_fdf *fdf, t_parse *parse, char *argv)
{
	int			y;
	int			x;

	x = -1;
	y = 0;
	fdf->grid = ft_memalloc(sizeof(int *) * parse->count_y);
	parse->fd = open(argv, O_RDONLY);
	while (get_next_line(parse->fd, &parse->line))
	{
		parse->tmp_grid = ft_strsplit(parse->line, ' ');
		fdf->grid[y] = ft_memalloc(sizeof(int) * count_x_char(parse->tmp_grid));
		while (++x < count_x_char(parse->tmp_grid))
			fdf->grid[y][x] = ft_atoi(parse->tmp_grid[x]);
		x = -1;
		y++;
		fdf->x = count_x_char(parse->tmp_grid);
		free(parse->line);
	}
	fdf->y = parse->count_y;
	close(parse->fd);
	free(parse);
	return (fdf);
}

t_fdf			*parse(char *argv, t_fdf *fdf)
{
	t_parse		*parse;

	parse = ft_init_parse();
	parse->count_y = count_y(argv);
	fdf = make_grid(fdf, parse, argv);
	return (fdf);
}

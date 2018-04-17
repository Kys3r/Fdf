/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   init_struct_option.c                             .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: albarbos <albarbos@student.42.fr>          +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/04 16:42:39 by albarbos     #+#   ##    ##    #+#       */
/*   Updated: 2018/04/10 09:51:13 by albarbos    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "../fdf.h"

t_key				*ft_init_key(t_fdf *fdf, t_window *wind)
{
	t_key			*ret_struct;

	ret_struct = (t_key *)malloc(sizeof(t_key));
	ret_struct->win = wind;
	ret_struct->fdf = fdf;
	ret_struct->size_line = 6;
	ret_struct->z = 10;
	ret_struct->r = ret_struct->z;
	ret_struct->tmp_r = 0;
	ret_struct->up_down = 210;
	ret_struct->left_right = 210;
	ret_struct->i = 0;
	return (ret_struct);
}

t_count				*ft_init_count(void)
{
	t_count			*ret_struct;

	ret_struct = (t_count *)malloc(sizeof(t_count));
	ret_struct->count_x = 0;
	ret_struct->count_y = 0;
	ret_struct->tmp_size = 0;
	return (ret_struct);
}

t_dash				*ft_init_dash(void)
{
	t_dash			*ret_struct;

	ret_struct = (t_dash *)malloc(sizeof(t_dash));
	ret_struct->str = "Appuyer sur une touche pour commencer";
	ret_struct->up = "- Fleche haut : Map haut";
	ret_struct->down = "- Fleche bas: Map bas";
	ret_struct->left = "- Fleche gauche: Map gauche";
	ret_struct->right = "- Fleche droite: Map droite";
	ret_struct->zoom_plus = "- Pave - : Elevation -";
	ret_struct->zoom_moins = "- Pave + : Elevation +";
	ret_struct->map_plus = "- Molette avant: Size Map +";
	ret_struct->map_moins = "- Molette arriere: Size Map -";
	return (ret_struct);
}

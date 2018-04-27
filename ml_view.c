/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ml_view.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/27 15:07:55 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/27 15:42:11 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_mlx.h"

t_view	view(t_frame frame)
{
	int		size_line;
	int		endian;
	t_view	v;

	v.img = mlx_new_image(win.mlx, win.size.width, win.size.height);
	v.img_data = mlx_get_data_addr(v.img, &(v.bpp), &size_line, &endian);
	v.frame = frame;
	v.color = RGB(255, 255, 255);
	return (v);
}
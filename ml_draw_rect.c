/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ml_draw_rect.c                                   .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/27 15:28:24 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/27 15:47:06 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_mlx.h"

void	draw_rect(t_frame f)
{
	draw_rect_color(f, RGB(255, 255, 255));
}

void	draw_rect_color(t_frame f, int color)
{
	int		x;
	int		y;
	t_view	v;

	v = view(f);
	v.color = color;
	y = -1;
	while (++y < v.frame.size.height)
	{
		x = -1;
		while (++x < v.frame.size.width)
			fill_pixel(v, point(x, y), v.color);
	}
	mlx_put_image_to_window(win.mlx, win.view, v.img, f.origin.x, f.origin.y);
}

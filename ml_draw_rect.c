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

void	fill_pixel(t_view v, int x, int y)
{
	*(int *)(v.img_data + (y * win.size.width + x) * v.bpp) = v.color;
}

int		draw_rect(t_frame f)
{
	int		x;
	int		y;
	t_view	v;

	v = view(f);
	y = -1;
	while (++y < v.frame.size.height)
	{
		x = -1;
		while (++x < v.frame.size.width)
			fill_pixel(v, x, y);
	}
	return (1);
}

/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ml_rect.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/27 15:28:24 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/27 15:47:06 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_mlx.h"

t_view	ml_rect(t_frame f, int color)
{
	int		x;
	int		y;
	t_view	v;

	v = ml_view(f, color);
	y = -1;
	while (++y < v.frame.size.height)
	{
		x = -1;
		while (++x < v.frame.size.width)
			ml_fill_pixel(v, point(x, y), v.color);
	}
	return (v);
}

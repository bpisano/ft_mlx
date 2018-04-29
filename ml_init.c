/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ml_init.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/27 13:13:01 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/27 13:42:49 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_mlx.h"

int		ml_init(t_size win_size, char *title)
{
	void	*mlx;

	if (!(mlx = mlx_init()))
		return (0);
	win.mlx = mlx;
	win.current = mlx_new_window(win.mlx, win_size.width, win_size.height, title);
	win.view = view(frame(point(0, 0), win_size));
	return (1);
}

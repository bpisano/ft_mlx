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
	t_win	w;

	if (!(mlx = mlx_init()))
		return (0);
	w.mlx = mlx;
	w.view = mlx_new_window(mlx, win_size.width, win_size.height, title);
	w.size = win_size;
	win = w;
	return (1);
}

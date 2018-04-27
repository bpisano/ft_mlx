/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ml_frame.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/27 12:45:55 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/27 13:33:17 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_mlx.h"

t_frame	frame(t_point point, t_size size)
{
	t_frame	f;

	f.origin = point;
	f.size = size;
	return (f);
}

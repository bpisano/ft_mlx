/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ml_frame.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/27 12:45:55 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/27 15:46:33 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "ft_mlx.h"

t_frame		frame(t_point p, t_size s)
{
	t_frame	f;

	f.origin = p;
	f.size = s;
	return (f);
}

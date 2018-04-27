/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_mlx.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/27 12:11:11 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/27 13:36:33 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_MLX_H
# define FT_MLX_H

# include "mlx.h"

typedef struct		s_point
{
	int				x;
	int				y;
}					t_point;

typedef struct		s_size
{
	int				width;
	int				height;
}					t_size;

typedef struct		s_frame
{
	struct s_point	origin;
	struct s_size	size;
}					t_frame;

typedef struct		s_win
{
	void			*mlx;
	void			*view;
	struct s_size	size;
}					t_win;

struct s_win		win;

t_point				point(int x, int y);
t_size				size(int width, int height);
t_frame				frame(t_point point, t_size size);

int					ml_init(t_size win_size, char *title);
void				ml_display_window(void);

#endif

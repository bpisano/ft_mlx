/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_mlx.h                                         .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: bpisano <marvin@le-101.fr>                 +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2018/04/27 12:11:11 by bpisano      #+#   ##    ##    #+#       */
/*   Updated: 2018/04/27 15:46:51 by bpisano     ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#ifndef FT_MLX_H
# define FT_MLX_H

# include "mlx.h"
# include "libft.h"
# include "ft_array.h"
# include <stdlib.h>
# include <stdarg.h>

# define RGB(r, g, b) (256 * 256 * (int)(r) + 256 * (int)(g) + (int)(b))
# define COLOR 0
# define FRAME 1

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

typedef struct		s_view
{
	void			*img;
	char			*img_data;
	int				bpp;
	struct s_frame	frame;
	int				color;
}					t_view;

typedef struct		s_win
{
	void			*mlx;
	void			*current;
	t_array			views;
}					t_win;

t_win				win;

t_point				point(int x, int y);
t_size				size(int width, int height);
t_frame				frame(t_point p, t_size s);

void				ml_draw_view(t_view v);
void				ml_clear_view(t_view v);

void				ml_fill_pixel(t_view, t_point p, int color);
t_view				ml_view(t_frame f, int color);
t_view				ml_rect(t_frame f, int color);
void				ml_draw_rect(t_frame f, int color);


int					ml_init(t_size win_size, char *title);
void				ml_display_window(void);

#endif

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

# define RGB(r, g, b) (256 * 256 * (int)(r) + 256 * (int)(g) + (int)(b))

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
	void			*view;
	struct s_size	size;
}					t_win;

struct s_win		win;

t_point				point(int x, int y);
t_size				size(int width, int height);
t_frame				frame(t_point p, t_size s);
t_view				view(t_frame f);

void				fill_pixel(t_view, t_point p, int color);
void				draw_rect(t_frame f);
void				draw_rect_color(t_frame f, int color);
void				draw_line(t_point p1, t_point p2);

int					ml_init(t_size win_size, char *title);
void				ml_display_window(void);

#endif


#include "ft_mlx.h"

t_size	rect_size(t_frame f, t_grid g)
{
	int		width;
	int		height;

	width = (f.size.width - g.spacing * (g.column - 1)) / g.column;
	height = (f.size.height - g.spacing * (g.row - 1)) / g.row;
	return size(width, height);
}

void	draw_grid(t_frame f, t_grid g)
{
	draw_grid_color(f, g, RGB(255, 255, 255));
}

void	draw_grid_color(t_frame f, t_grid g, int color)
{
	int		x;
	int		y;
	t_point	pos;
	t_size	r_size;
	t_view	v;

	v = view(f);
	v.color = color;
	r_size = rect_size(f, g);
	y = -1;
	while (++y < g.row)
	{
		x = -1;
		while (++x < g.column)
		{
			pos = point((g.column + g.spacing) * x, (g.row + g.spacing) * y);
			draw_rect_color(frame(pos, r_size), color);
		}
	}
	mlx_put_image_to_window(win.mlx, win.view, v.img, f.origin.x, f.origin.y);
}

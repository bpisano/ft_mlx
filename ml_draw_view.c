#include "ft_mlx.h"

void	ml_draw_view(t_view v)
{
	mlx_put_image_to_window(win.mlx, win.current,
			v.img, v.frame.origin.x, v.frame.origin.y);
	ar_append(&(win.views), v);
}

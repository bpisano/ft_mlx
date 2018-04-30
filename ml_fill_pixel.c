
#include "ft_mlx.h"

void	ml_fill_pixel(t_view v, t_point p, int color)
{
	*(int *)(v.img_data + (int)(p.y * v.frame.size.width + p.x) * v.bpp) = color;
}

#include "ft_mlx.h"

void	ml_draw_rect(t_frame f, int color)
{
	t_view	rect;

	rect = ml_rect(f, color);
	ml_draw_view(rect);
}

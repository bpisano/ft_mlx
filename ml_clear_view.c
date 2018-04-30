#include "ft_mlx.h"

void	ml_clear_view(t_view v)
{
	ft_bzero(v.img_data, v.frame.size.width * v.frame.size.height * v.bpp);
}

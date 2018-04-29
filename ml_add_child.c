#include "ft_mlx.h"

void	ml_add_child(t_view view, t_view child)
{
	ar_append(&(view.childs), child);
}

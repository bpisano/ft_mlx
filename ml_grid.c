#include "ft_mlx.h"

t_grid	grid(size_t row, size_t column, size_t spacing)
{
	t_grid	g;

	g.row = row;
	g.column = column;
	g.spacing = spacing;
	return (g);
}

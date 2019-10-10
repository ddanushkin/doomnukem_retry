#include "doomnukem.h"

int		out_of_border(int x, int y)
{
	if (x < 0 || x > WIDTH - 1)
		return (1);
	if (y < 0 || y > HEIGHT - 1)
		return (1);
	return (0);
}

void	set_pixel(SDL_Surface *canvas, int x, int y, t_color c)
{
	int				offset;
	unsigned char	*pixels;

	if (out_of_border(x, y))
		return ;
	offset = 4 * (y * canvas->w + x);
	pixels = (unsigned char*)canvas->pixels;
	pixels[offset] = c.b * 255;
	pixels[offset + 1] = c.g * 255;
	pixels[offset + 2] = c.r * 255;
}

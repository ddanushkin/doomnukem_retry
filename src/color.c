#include "doomnukem.h"

t_color	color_new(unsigned char r, unsigned char g, unsigned char b)
{
	t_color	c;

	c.r = r / 255;
	c.g = g / 255;
	c.b = b / 255;
	return (c);
}


#ifndef DOOMNUKEM_H
#define DOOMNUKEM_H

# include "math.h"
# include "libft.h"
# include <SDL.h>
# include <pthread.h>

# define STATUS_OK 0
# define STATUS_SDL_ERROR 1

# define WIDTH 500
# define HEIGHT 500
# define TITLE "doom-nukem"

#define RED color_new(255, 0, 0)

typedef struct	s_color
{
	double		r;
	double		g;
	double		b;
	double		a;
}				t_color;

typedef struct	s_ivec
{
	int			x;
	int 		y;
	int 		z;
}				t_ivec;

typedef struct	s_vec
{
	double		x;
	double		y;
	double		z;
}				t_vec;

typedef struct	s_app
{
	SDL_Window		*window;
	SDL_Surface		*canvas;
	SDL_Event		events;
	const Uint8		*kb_input;
}				t_app;

void	init_app(t_app *app);
void	init_sdl(t_app *app);
void	safe_quit(t_app *app, int status, const char *msg);
void	set_pixel(SDL_Surface *canvas, int x, int y, t_color c);
t_color	color_new(unsigned char r, unsigned char g, unsigned char b);

#endif

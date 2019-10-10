#include "doomnukem.h"

void	safe_quit(t_app *app, int status, const char *msg)
{
	ft_putendl(msg);
	if (status != STATUS_SDL_ERROR)
	{
		SDL_FreeSurface(app->canvas);
		SDL_DestroyWindow(app->window);
		SDL_Quit();
	}
	exit(0);
}

int		on_event(t_app *app)
{
	const uint8_t	*keys;

	SDL_PollEvent(&app->events);
	if (app->events.type == SDL_QUIT)
		return (0);
	keys = app->kb_input;
	if (keys[SDL_SCANCODE_ESCAPE])
		return (0);
	return (1);
}

void	update(t_app *app)
{
	while (on_event(app))
	{
		ft_memset(app->canvas->pixels, 0, WIDTH * HEIGHT * 4);
		set_pixel(app->canvas, WIDTH * 0.5, HEIGHT * 0.5, RED);
		SDL_UpdateWindowSurface(app->window);
	}
}

int		main(int argc, char **argv)
{
	t_app *app;

	app = (t_app *)malloc(sizeof(t_app));
	init_sdl(app);
	init_app(app);
	update(app);
	return 0;
}
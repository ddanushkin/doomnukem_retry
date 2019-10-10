#include "doomnukem.h"

void	init_sdl(t_app *app)
{
	if (SDL_Init(SDL_INIT_EVERYTHING) != 0)
		safe_quit(app,  STATUS_SDL_ERROR, SDL_GetError());
	app->window = SDL_CreateWindow(
			TITLE,
			SDL_WINDOWPOS_CENTERED,
			SDL_WINDOWPOS_CENTERED,
			WIDTH,
			HEIGHT,
			0);
	app->canvas = SDL_GetWindowSurface(app->window);
	app->kb_input = SDL_GetKeyboardState(NULL);
}

void	init_app(t_app *app)
{

}
#include "Brick.h"
using namespace std;


Brick::Brick() {
	int xPos = 0;
	int yPos = 0;
	int width = 0;
	int height = 0;
}
Brick::Brick( int x, int y, int w, int h ) {
	int xPos = x;
	int yPos = y;
	int width = w;
	int height = h;
}

void Brick::set( int x, int y, int w, int h ) {
	xPos = x;
	yPos = y;
	width = w;
	height = h;
}

void Brick::render(SDL_Renderer* gRenderer) {
	SDL_Rect fillRect = { xPos, yPos, width, height };
	SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0x99, 0xFF );
	SDL_RenderFillRect( gRenderer, &fillRect );
}

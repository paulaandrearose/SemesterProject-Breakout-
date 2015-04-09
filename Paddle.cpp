#include "Paddle.h"
using namespace std;

int leftBoundry = 0;
int rightBoundry = SCREEN_WIDTH;

Paddle::Paddle(){
	int height = 20;
	int width = 100;
	int xPos = SCREEN_WIDTH/2 - width/2;
	int yPos = 400  /*SCREEN_HEIGHT - SCREEN_HEIGHT/12*/;
	int xVel = 0;
}

void Paddle::movePaddle(){
	//xPos += xVel * velMult;
	xPos += xVel;

	if(xPos <= leftBoundry)
	{
		xPos = leftBoundry;
	}

	if(xPos >= rightBoundry - width)
	{
		xPos = rightBoundry - width;
	}
}

void Paddle::setXVel(int newVel){
	xVel = newVel;
}

int Paddle::getXVel(){
	return xVel;
} 

int Paddle::getX(){
	return xPos;
}

int Paddle::getY() {
	return yPos;
}

int Paddle::getWidth() {
	return width;
}

int Paddle::getHeight() {
	return height;
}

void Paddle::render( SDL_Renderer* gRenderer ) {
	SDL_Rect fillRect = { xPos, yPos, width, height };
	SDL_SetRenderDrawColor( gRenderer, 0x50, 0x90, 0xFF, 0xFF );
	SDL_RenderFillRect( gRenderer, &fillRect );
}

/*
int main(){

	Paddle pad();

	SDL_Window* window = NULL;
	SDL_Surface* screenSurface = NULL;
	if( SDL_Init( SDL_INIT_VIDEO ) < 0 )
	{
		printf( "SDL could not initialize! SDL_Error: %s\n", SDL_GetError() );
	}
	else
	{
		//Create window
		window = SDL_CreateWindow( "SDL Tutorial", SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED, SCREEN_WIDTH, SCREEN_HEIGHT, SDL_WINDOW_SHOWN );
		if( window == NULL )
		{
			printf( "Window could not be created! SDL_Error: %s\n", SDL_GetError() );
		}
		else
		{
			//Get window surface
			screenSurface = SDL_GetWindowSurface( window );
			//Fill the surface white
			SDL_FillRect( screenSurface, NULL, SDL_MapRGB( screenSurface->format, 0xFF, 0xFF, 0xFF ) );			
			//Update the surface
			SDL_UpdateWindowSurface( window );

			SDL_SetRenderDrawColor( gRenderer, 0xFF, 0xFF, 0xFF, 0xFF );
                SDL_RenderClear( gRenderer );
				 //Render red filled quad
                SDL_Rect fillRect = { SCREEN_WIDTH / 4, SCREEN_HEIGHT / 4, SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 };
                SDL_SetRenderDrawColor( gRenderer, 0xFF, 0x00, 0x00, 0xFF );        
                SDL_RenderFillRect( gRenderer, &fillRect );

			//Wait two seconds
			SDL_Delay( 2000 );
		}
	}

	//Destroy window
	SDL_DestroyWindow( window );

	//Quit SDL subsystems
	SDL_Quit();

	return 0;
}
*/

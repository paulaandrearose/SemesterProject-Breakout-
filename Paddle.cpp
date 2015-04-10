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

void Paddle::setEverything() {
	height = 20;
	width = 100;
	xPos = SCREEN_WIDTH/2 - width/2;
	yPos = 400  /*SCREEN_HEIGHT - SCREEN_HEIGHT/12*/;
	xVel = 0;
}

void Paddle::movePaddle(){
	//xPos += xVel * velMult;
	xPos += xVel;

	if( xPos <= leftBoundry ) {
		xPos = leftBoundry;
	}

	else if(xPos >= ( rightBoundry - width ) ) {
		xPos = rightBoundry - width;
	}
}

void Paddle::setXVel( int newVel ){
	xVel = newVel;
}

int Paddle::getXVel(){
	return this->xVel;
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

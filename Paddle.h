#ifndef _PADDLE_H_INCLUDED_
#define _PADDLE_H_INCLUDED_

class Breakout;
class Brick;
class BrickConfig;
//class Ball;

#include <SDL.h>
#include <stdio.h>
#include <string>
#include <cmath>
#include "Breakout.h"
#include "Brick.h"
#include "BrickConfig.h"
//#include "Ball.h"

class Paddle
{
	int xPos;
	int yPos;
	int xVel;
	int width;
	int height;
	SDL_Texture * padIMG;

    public:

	Paddle();
	void setEverything();
	void movePaddle();
	void setXVel( int newVel );
	int getXVel();
	int getX();
	int getY();
	int getWidth();
	int getHeight();
	void render( SDL_Renderer* );

};

#endif


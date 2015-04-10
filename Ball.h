#ifndef _BALL_H_INCLUDED_
#define _BALL_H_INCLUDED_

class Breakout;
class Paddle;
class BrickConfig;
class Brick;

#include <stdio.h>
#include <cmath>
#include "Breakout.h"
#include "Paddle.h"
#include "BrickConfig.h"
#include "Brick.h"

class Ball
{
	int radius;
	int xPos;
	int yPos;
	int xVel;
	int yVel;
	int speed;
  int left, right, top, bottom;

public:

	Ball ();
	void set();
	void move();
	void render( SDL_Renderer* );
    
};

#endif

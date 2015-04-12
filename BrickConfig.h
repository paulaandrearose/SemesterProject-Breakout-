#ifndef _BRICKCONFIG_H_INCLUDED_
#define _BRICKCONFIG_H_INCLUDED_

class Breakout;
class Brick;
class Paddle;
class Ball;

#include <SDL.h>
#include <stdio.h>
#include <string>
#include <vector>
#include "Breakout.h"
#include "Brick.h"
#include "Paddle.h"
#include "Ball.h"

class BrickConfig {

	int numCol;
	int numRow;
	int numBricks;
	int brickWidth;
	int brickHeight;
	int spaceBtwn;
	int spaceEdge;
	int xPos;
	int yPos;
	std::vector<Brick> brickVect;

public:

	BrickConfig(); 
	void set();
	void render( SDL_Renderer* );
	void removeBrick();
};


#endif

#ifndef _BRICK_H_INCLUDED_
#define _BRICK_H_INCLUDED_

class Breakout;
class Paddle;
class BrickConfig;
//class Ball;

#include <SDL.h>
#include <stdio.h>
#include <string>
#include <cmath>
#include "Breakout.h"
#include "Paddle.h"
#include "BrickConfig.h"
//#include "Ball.h"

class Brick
{
  int xPos;
  int yPos;
  int width;
  int height;
  
  public:
  
  Brick();
  Brick( int x, int y, int width, int height );
  void set( int x, int y, int width, int height );
  void render( SDL_Renderer* );
    
};

#endif

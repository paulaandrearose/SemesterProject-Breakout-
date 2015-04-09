#ifndef _BREAKOUT_H_INCLUDED_
#define _BREAKOUT_H_INCLUDED_

class Paddle;
//class Brick;
//class BrickConfig;

#include <iostream>
#include <SDL.h>
#include <stdio.h>
#include "Paddle.h"

const int SCREEN_WIDTH = 640;
const int SCREEN_HEIGHT = 480;

enum KeyPressSurfaces {
  KEY_PRESS_SURFACE_DEFAULT,
  KEY_PRESS_SURFACE_LEFT,
  KEY_PRESS_SURFACE_RIGHT,
  KEY_PRESS_SURFACE_SPACEBAR,
  KEY_PRESS_SURFACE_TOTAL /*used to count number of all keys used for array size*/
};

#endif

#include <iostream>;
#include "Ball.h";


Ball::Ball(SDL_Renderer * rendererI, int start_xspeedI, int start_yspeedI, int startXI, int startYI)
{
 
}

move::Ball()
{
  xPos += xSpeed;
  yPos += ySpeed;

 if(xPos >= 600){
  xSpeed = -xSpeed;
  }

 else if(xPos <= 0){
  xSpeed = -xSpeed;
  }

 else if(yPos >= 500){
  ySpeed = -ySpeed;
  }

 else if(yPos <=0 ){
  ySpeed = -ySpeed;
  }

}

void setXspeed(int newXSpeed){
xSpeed = newXSpeed;
}

void setYspeed(int newYSpeed){
  ySpeed = newYSpeed;
}

int getX(){
return xPos;
}

int getY(){
return yPos;
}



Paddle.cpp

Paddle.h
Paddle.h
#include <SDL.h>
#include <stdio.h>

class Paddle
{
	int xPos;
	int yPos;
	int speed;
	int width;
	int height;

	SDL_Texture * padIMG;
	//SDL_Render * padREND;


    public:

	Paddle();
    //Paddle(SDL_Renderer * padREND);
	//void setX(int Xp);
	void setSpeed(int spd);
	//void setHeight(int Hp);
	//void setWidth(int Wp);


	void movePaddle();

	int getX();
	int getSpeed();
	//int getHeight();
	//int getWidth();

};






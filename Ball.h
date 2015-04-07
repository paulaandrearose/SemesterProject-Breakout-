class Ball(){

int xPos = 300;
int yPos = 250;
int xSpeed 2;
int ySpeed 2;
const int widthBall = 10;
const int heightBall = 10;

public:
Ball(SDL_Renderer * renderer, int xspeed, int yspeed, int startX, int startY);
void move();
void setBspeedX(int newXSpeed);
void setBspeedY(int newYSpeed);
void setWidthBall();
void  setHeightBall();

int getXBall();
int getYBall();
int getBspeedX();
int getBspeedY();
int getWidthBall();
int getHeightBall();
  
};

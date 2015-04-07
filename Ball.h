class Ball(){

int xPos;
int yPos;
int xSpeed;
int ySpeed;
const int widthBall;
const int heightBall;

public:
Ball(SDL_Renderer * renderer, int start_xspeed, int start_yspeed, int startX, int startY);
void move();
void setBspeedX(int newSpeedx);
void setBspeedY(int newSpeedy);
void setWidthBall();
void  setHeightBall();

int getXBall();
int getYBall();
int getBspeedX();
int getBspeedY();
int getWidthBall();
int getHeightBall();
  
  
};

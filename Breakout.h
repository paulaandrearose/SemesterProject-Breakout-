class Paddle{
	int xPos;
	const int  yPos;
	int speed;
	const int width;
	const int  height;

public:
	getX_Pad();
	getY_Pad();
	getWidth_Pad();
	getHeight_Pad();
	getSpeed()

};

class Ball{
	int xPos;
	int yPos;
	int speedX;
	int speedY;
	const int  widthBall;
	const int  heightBall;

public:
	getX_Ball();
	getY_Ball();
	getBallSpeed_X();
	getBallSpeed_Y();
	getWidth_Ball();
	getHeight_Ball();


};

class Brick{
	int xPos;
	int yPos;
	const int  widthBrick;
	const int  heightBrick;

public:
    getX_Brick();
	getY_Brick();
	getWidth_Brick();
	getHeight_Brick();
	


};

class BrickConfg{
	int nColms;
	int nRows;
	//some kind of array with [nColms][nRows] 
};




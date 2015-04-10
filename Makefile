OBJS = Breakout.cpp Ball.cpp Brick.cpp BrickConfig.cpp Paddle.cpp

CC = g++

COMPILER_FLAGS = -Wall 

LINKER_FLAGS = -lSDL2

OBJ_NAME = Breakout

all: $(OBJS) 
	$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)

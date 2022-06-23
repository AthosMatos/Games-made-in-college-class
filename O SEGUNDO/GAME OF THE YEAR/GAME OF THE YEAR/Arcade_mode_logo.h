#pragma once
#include "Gamelevel.h"
#include <ctime>
#include"Graphics.h"

class Arcade_logo {

	Graphics* gfx;
	
	 int fpscount;
	 int frame;
	 clock_t fps;
public:
	Arcade_logo() {
		fpscount = 1;
		this->gfx = Gamelevel::gfx;
	}
	Spritesheet* arcade_frame1;
	Spritesheet* arcade_frame2;
	Spritesheet* arcade_frame3;
	Spritesheet* arcade_frame4;
	Spritesheet* arcade_frame5;
	Spritesheet* arcade_frame6;
	Spritesheet* arcade_frame7;
public:
	void Show_logo();
};
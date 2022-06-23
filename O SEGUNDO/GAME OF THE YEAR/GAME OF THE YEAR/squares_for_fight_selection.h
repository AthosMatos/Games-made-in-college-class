#pragma once
#include "Gamelevel.h"
class Squares {

	Graphics* gfx;
	int kpos;
	int kpress;

	Spritesheet* ATH_square;
	Spritesheet* LEU_square;
	Spritesheet* GIU_square;
	Spritesheet* OZI_square;
	Spritesheet* ALB_square;
	Spritesheet* WIL_square;
	Spritesheet* RAU_square;
	Spritesheet* BRU_square;
	Spritesheet* PIR_square;

	Spritesheet* ATH_square_bright;
	Spritesheet* LEU_square_bright;
	Spritesheet* GIU_square_bright;
	Spritesheet* OZI_square_bright;
	Spritesheet* ALB_square_bright;
	Spritesheet* WIL_square_bright;
	Spritesheet* RAU_square_bright;
	Spritesheet* BRU_square_bright;
	Spritesheet* PIR_square_bright;

public:
	Squares() {
		this->gfx = Gamelevel::gfx;
	}
	void draw_squares();
	void Key_getter(int Kpos, int Kpress);

};
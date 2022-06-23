#pragma once
#include "Gamelevel.h"

class Big_picture {
	int kpos;
	int kpress;
	Graphics* gfx;
	int P_1_S;
	int P_2_S;

	Spritesheet* ATH_char;
	Spritesheet* GIU_char;
	Spritesheet* LEU_char;
	Spritesheet* OZI_char;
	Spritesheet* RAU_char;
	Spritesheet* BRU_char;
	Spritesheet* PIR_char;
	Spritesheet* ALB_char;
	Spritesheet* WIL_char;

public:
	Big_picture() {
		this->gfx = Gamelevel::gfx;
	}
	void draw();
	void Key_getter(int player_1_selected, int player_2_selected,int Kpos, int Kpress);
};
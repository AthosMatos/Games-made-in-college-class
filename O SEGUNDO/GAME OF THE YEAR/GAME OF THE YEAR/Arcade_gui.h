#pragma once
#include "Gamelevel.h"
#include "Arcade_mode_logo.h"
class Arcade_gui {
	Graphics* gfx;

	Spritesheet* one_v_R;
	Spritesheet* one_v_R_P;
	Spritesheet* one_v_one;
	Spritesheet* one_v_one_P;
	Spritesheet* n_selected;

	Arcade_logo* A_logo;
	int kpos;
	int kpress;

public:
	Arcade_gui() {
		A_logo = new Arcade_logo();
		this->gfx = Gamelevel::gfx;
	}

	void Key_getter(int Kpos, int Kpress);
	void show_menu();
};
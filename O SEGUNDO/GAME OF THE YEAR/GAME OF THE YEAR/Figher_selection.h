#pragma once
#include "Gamelevel.h"
#include "Big_picture_fighter_selection.h"
#include "squares_for_fight_selection.h"
#include <ctime>
#include "Fighters.h"

class Fighter_selection {
	Graphics* gfx;
	Squares* F_squares;
	Big_picture* B_picture;
	Spritesheet* background;
	Fighters* fighers;
	
	double p1;
	double p2;
	int P_delay;
	bool press_delay;
	bool square_press;
	int fpscount;
	clock_t fps;
	int kpos;
	int kpress;
	int player_1_S;
	int player_2_S;
	float alpha;

public:
	Fighter_selection() {
		fpscount = 1;
		alpha = 1.0f;
		this->gfx = Gamelevel::gfx;	
	}

	void Key_getter(int Kpos, int Kpress);
	void show();
	void P_select();
};
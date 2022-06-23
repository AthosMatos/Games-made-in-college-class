#pragma once
#include <ctime>
#include "Gamemenu.h"
#include "Arcade_gui.h"
#include "Figher_selection.h"

class Arcade :public Gamelevel {

	bool press_delay;
	bool fight_menu_show;
	float flash_alpha;
	int fpscount;
	clock_t P_delay;
	clock_t fps;

	Fighter_selection* Fight_menu;
	Arcade_gui* GUI;

public:
	virtual void load() override;
	virtual void unload() override;
	virtual int update(int kpos, int kpress) override;
	virtual void render() override;
	virtual void data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win,
		int* loses, float* W_S_alg, int* beted, int* lost) override;
	void key_delay(int kpress,int kpos);
	void caveman_fps();
};
#pragma once
#include "Gamelevel.h"
#include <time.h>

class WinLoss : public Gamelevel {
	////////DECLARANDO A PORRA TODA////////
	float x;
	float y;
	int u;
	int fpscount = 1;
	clock_t fps;
	BOOL fist_exec;
	float flash_alpha;
	int fps2;
	int wins;
	int losses;
	int cracks;
	float multiplier;
	int yeano;
	int lost_flag;
	int kpos;
	int kpress;
	int count;
	int dey;

	Spritesheet* win_screen_super_bright;
	Spritesheet* win_screen_bright;
	Spritesheet* win_screen;
	Spritesheet* crack_over;

	Spritesheet* try_again;
	Spritesheet* try_again_saturated;

	Spritesheet* loss_screen_super_bright;
	Spritesheet* loss_screen_bright;
	Spritesheet* loss_screen;

	Spritesheet* continuar_bright;
	Spritesheet* continuar_not_bright;
	Spritesheet* continuar_pressed;

public:

	virtual void load() override;
	virtual void unload() override;
	virtual int update(int kpos, int kpress) override;
	virtual void render() override;
	virtual void data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win, 
		int* loses, float* W_S_alg, int* beted, int* lost) override;
	void muti_alg();
};
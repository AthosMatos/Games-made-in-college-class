#pragma once
#include "Gamemenu.h"
#include "Gamelevel.h"
#include "Gamecontroller.h"

class day : public Gamelevel {
	int fpscount = 1;
	clock_t fps;
	int x;
	int x2;
	int x3;
	int fps2;
	int flag;
	float screen_flash_alpha;
	int day;
	int day_execution;

	Spritesheet* sprite;
	Spritesheet* sprite2;
	Spritesheet* sprite3;
	Spritesheet* sprite4;


public:
	virtual void load() override;
	virtual void unload() override;
	virtual int update(int kpos, int kpress) override;
	virtual void render() override;
	virtual void data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win, 
		int* loses, float* W_S_alg, int* beted, int* lost) override;
};
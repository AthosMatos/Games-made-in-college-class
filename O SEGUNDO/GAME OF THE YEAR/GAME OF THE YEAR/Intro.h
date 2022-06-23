#pragma once
#include "Gamelevel.h"
#include <time.h>

class intro : public Gamelevel {
////////DECLARANDO A PORRA TODA////////
	float x;
	float y;
	int u = 1;
	int fpscount = 1;
	clock_t fps;

	Spritesheet* sprite;
	Spritesheet* sprite2;
	Spritesheet* sprite3;
	Spritesheet* sprite4;
	Spritesheet* sprite5;
	Spritesheet* sprite6;
	Spritesheet* sprite7;
	Spritesheet* sprite8;
	Spritesheet* sprite9;
	Spritesheet* sprite10;
	Spritesheet* sprite11;
	Spritesheet* sprite12;
	Spritesheet* sprite13;
	Spritesheet* sprite14;
	Spritesheet* sprite15;
	Spritesheet* sprite16;
	Spritesheet* sprite17;
	Spritesheet* sprite18;
	Spritesheet* sprite19;
	Spritesheet* sprite20;
	Spritesheet* sprite21;

public:

	virtual void load() override;
	virtual void unload() override;
	virtual int update(int kpos, int kpress) override;
	virtual void render() override;
	virtual void data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win,
		int* loses, float* W_S_alg, int* beted, int* lost) override;
};

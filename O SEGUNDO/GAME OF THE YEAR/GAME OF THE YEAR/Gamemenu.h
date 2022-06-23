#pragma once
#include "Intro.h"

class Gamemenu : public Gamelevel {
////////DECLARANDO A PORRA TODA////////
	int fpscount = 1;
	clock_t fps;
	int fpscount2 = 1;
	clock_t fps2;
	float x;
	float y;
	float x2;
	float x3;
	float alpha;
	float alpha2;
	float alpha3;
	float sx;
	int flag;
	int flag2;
	int flag3;
	int frag;
	int kpos;
	int kpress;
	int soundflag;
	int flash;
	int u;
	int fps3;
	int menu2;

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

	Spritesheet* explosion;
	Spritesheet* explosion2;
	Spritesheet* explosion3;
	Spritesheet* explosion4;
	Spritesheet* explosion5;
	Spritesheet* explosion6;
	Spritesheet* explosion7;
	Spritesheet* explosion8;
	Spritesheet* explosion9;
	Spritesheet* explosion10;
	Spritesheet* explosion11;
	Spritesheet* explosion12;
	Spritesheet* explosion13;
	Spritesheet* explosion14;
	Spritesheet* explosion15;
	Spritesheet* explosion16;
	Spritesheet* explosion17;



	
public:

	virtual void load() override;
	virtual void unload() override;
	virtual int update(int kpos, int kpress) override;
	virtual void render() override;
	virtual void data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win, 
		int* loses, float* W_S_alg, int* beted, int* lost) override;
};
#pragma once
#include "Gamemenu.h"

class history : public Gamelevel {
////////DECLARANDO A PORRA TODA////////
	int fpscount = 1;
	clock_t fps;
	float MEy;
	float GIx;
	float LEx;
	float OZx;
	int fps2;
	int fps3;
	int start;
	float backalpha;
	float textboxalpha;
	float PPalpha;
	bool textonoff;
	bool textalpha;
	int h;
	int textv;
	int texts;
	int nexttext;
	int LEmov;
	int OZmov;
	int GImov;
	float recalpha;
	Spritesheet* sprite;
	Spritesheet* sprite2;
	Spritesheet* sprite3;
	Spritesheet* sprite4;
	Spritesheet* sprite5;


public:
	virtual void load() override;
	virtual void unload() override;
	virtual int update(int kpos, int kpress) override;
	virtual void render() override;
	virtual void data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win, 
		int* loses, float* W_S_alg, int* beted, int* lost) override;

};
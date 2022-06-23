#pragma once
#include "Graphics.h"
#include "spritesheet.h"

class Gamelevel {
protected:
	
public:
	static Graphics* gfx;
	static void init(Graphics* graphics) {
		gfx = graphics;
	}

	bool loading;

	virtual void load() = 0;
	virtual void unload() = 0;
	virtual int update(int kpos, int kpress) = 0;
	virtual void render() = 0;
	virtual void data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day,int* win, 
		int* loses,float* W_S_alg, int* beted, int* lost) = 0;
};
#pragma once
#include "Gamelevel.h"
#include <time.h>

class credits : public Gamelevel {
	////////DECLARANDO A PORRA TODA////////
	int fpscount = 1;
	clock_t fps;
	int y;

public:

	virtual void load() override;
	virtual void unload() override;
	virtual int update(int kpos, int kpress) override;
	virtual void render() override;
	virtual void data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win,
		int* loses, float* W_S_alg, int* beted, int* lost) override;
};

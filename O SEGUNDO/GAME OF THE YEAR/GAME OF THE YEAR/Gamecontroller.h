#pragma once
#include "Gamelevel.h"

class Gamecontroller {
	Gamecontroller() {}
	static Gamelevel* currentlevel;
public:
	static bool Loading;

	static void init();
	static void loadiniciallevel(Gamelevel* lev);
	static void SwitchLevel(Gamelevel* lev);

	static void Render();
	static int Update(int kpos, int kpress);
	static void data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win, 
		int* loses, float* W_S_alg, int* beted, int* lost);
	
};
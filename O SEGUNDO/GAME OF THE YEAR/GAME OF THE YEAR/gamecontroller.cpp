#include "Gamecontroller.h"

Gamelevel* Gamecontroller::currentlevel;
bool Gamecontroller::Loading;

void Gamecontroller::init() {
	Loading = true;
	currentlevel = 0;
}

void Gamecontroller::loadiniciallevel(Gamelevel* lev) {
	Loading = true;
	currentlevel = lev;
	currentlevel->load();
	Loading = false;
}

void Gamecontroller::SwitchLevel(Gamelevel* lev) {
	Loading = true;
	currentlevel->unload();
	delete currentlevel;
	currentlevel = lev;
	currentlevel->load();
	Loading = false;
}

int Gamecontroller::Update(int kpos, int kpress) {
	if (Loading)return -1;
	currentlevel->update(kpos,kpress);
}

void Gamecontroller::Render() {
	if (Loading) return;
	currentlevel->render();
}
void Gamecontroller::data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win, int* loses, 
	float* W_S_alg, int* beted, int* lost) {
	if (Loading)return;
	currentlevel->data(Items, B_Alg, crackin, yeano, day, win, loses, W_S_alg, beted, lost);
}

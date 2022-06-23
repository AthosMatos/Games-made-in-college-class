#pragma once
#include "Gamemenu.h"
#include "Gamelevel.h"
#include "Gamecontroller.h"

class Bet : public Gamelevel {
	int fpscount = 1;
	clock_t fps;
	int frame;
	float alpha1;
	int blink;
	int blinkcount;
	int kpos;
	int kpress;
	int crackvar;
	int pressload;
	int blinkcount2;
	int b_count;
	int count;
	int crackcount;
	int crackbett;
	int yeaano;
	int pressflag;
	int exeflag;
	int level;
	int class_win;
	int class_loss;
	float win_loss_alg;
	int dey;
	Spritesheet* kraklogo;

	Spritesheet* buttonoff;
	Spritesheet* buttonon;
	Spritesheet* buttonNpressoff;
	Spritesheet* buttonNpresson;

	Spritesheet* bckgrnd;

	Spritesheet* B_up;
	Spritesheet* B_down;
	Spritesheet* B_up_off;
	Spritesheet* B_down_off;
	Spritesheet* Bag;
	Spritesheet* Bag_open;
	Spritesheet* close_button;

	Spritesheet* Lembra;
	Spritesheet* P_celular;
	Spritesheet* Busca_bolsa;
	Spritesheet* ask_friend;

	Spritesheet* ME;


public:
	virtual void load() override;
	virtual void unload() override;
	virtual int update(int kpos, int kpress) override;
	virtual void render() override;
	virtual void data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win,
		int* loses, float* W_S_alg, int* beted, int* lost) override;
	void bagstuff();
	void battle();
};
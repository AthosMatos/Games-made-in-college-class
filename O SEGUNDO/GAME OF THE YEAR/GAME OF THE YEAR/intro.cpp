#include "Intro.h"
#include "Gamecontroller.h"
#include "Gamemenu.h"

void intro::load() {
////////LOADANDO AS IMAGEM////////
	sprite = new Spritesheet(L"intro//sprite_00.png",gfx);
	sprite2 = new Spritesheet(L"intro//sprite_01.png", gfx);
	sprite3 = new Spritesheet(L"intro//sprite_02.png", gfx);
	sprite4 = new Spritesheet(L"intro//sprite_03.png", gfx);
	sprite5 = new Spritesheet(L"intro//sprite_04.png", gfx);
	sprite6 = new Spritesheet(L"intro//sprite_05.png", gfx);
	sprite7 = new Spritesheet(L"intro//sprite_06.png", gfx);
	sprite8 = new Spritesheet(L"intro//sprite_07.png", gfx);
	sprite9 = new Spritesheet(L"intro//sprite_08.png", gfx);
	sprite10 = new Spritesheet(L"intro//sprite_09.png", gfx);
	sprite11 = new Spritesheet(L"intro//sprite_10.png", gfx);
	sprite12 = new Spritesheet(L"intro//sprite_11.png", gfx);
	sprite13 = new Spritesheet(L"intro//sprite_12.png", gfx);
	sprite14 = new Spritesheet(L"intro//sprite_13.png", gfx);
	sprite15 = new Spritesheet(L"intro//sprite_14.png", gfx);
	sprite16 = new Spritesheet(L"intro//sprite_15.png", gfx);
	sprite17 = new Spritesheet(L"intro//sprite_16.png", gfx);
	sprite18 = new Spritesheet(L"intro//sprite_17.png", gfx);
	sprite19 = new Spritesheet(L"intro//sprite_18.png", gfx);
	sprite20 = new Spritesheet(L"intro//sprite_19.png", gfx);
	sprite21 = new Spritesheet(L"intro//sprite_20.png", gfx);
}

void intro::unload() {
////////DELETANDO A PORRA TODA PRO PC N EXPLODI////////
	delete sprite;
	delete sprite2;
	delete sprite3;
	delete sprite4;
	delete sprite5;
	delete sprite6;
	delete sprite7;
	delete sprite8;
	delete sprite9;
	delete sprite10;
	delete sprite11;
	delete sprite12;
	delete sprite13;
	delete sprite14;
	delete sprite15;
	delete sprite16;
	delete sprite17;
	delete sprite18;
	delete sprite19;
	delete sprite20;
	delete sprite21;
}
int intro::update(int kpos, int kpress) {
////////LIMITADOR DE FPS DAS CAVERNAS//////// 
	if (fpscount == 1) {
		fps = 170 + clock();
		fpscount = 0;
		u++;
	}
	if (fps <= clock()) {
		fpscount = 1;
	}
////////UM TIMEZIN PRA V A LOGO BEM D BOA E DPOIS PASSA PRO PROX LEVEL/TELA////////
	if (u == 35) {
		gfx->BeginDraw();
		gfx->ClearScreen(D2D1::ColorF::Black);
		gfx->EndDraw();
		Gamecontroller::SwitchLevel(new Gamemenu());
		return 1;
	}
	return 0;
}
void intro::render() {
	float x=900;
	float y=550;

////////MEIO OBVIO MAS... AKI EH ONDE PRINTA AS IMAGE NA TELA PONTO////////
		gfx->BeginDraw();
		if (u == 2)		sprite->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 3)		sprite2->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 4)		sprite3->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 5)		sprite4->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 6)		sprite5->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 7)		sprite6->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 8)		sprite7->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 9)		sprite8->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 10)	sprite9->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 11)	sprite10->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 12)	sprite11->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 13)	sprite12->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 14)	sprite13->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 15)	sprite14->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 16)	sprite15->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 17)	sprite16->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 18)	sprite17->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 19)	sprite18->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 20)	sprite19->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 21)	sprite20->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		if (u == 22)	sprite21->drawover(x, y, 1.0f, D2D1::ColorF::WhiteSmoke);
		gfx->EndDraw();
}
void intro::data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win, int* loses, float* W_S_alg, int* beted,int* lost) {
	
}

#include "credits.h"
#include "Gamecontroller.h"
#include "Gamemenu.h"

void credits::load() {
	y = 0;
	////////LOADANDO AS IMAGEM////////
}

void credits::unload() {
	////////DELETANDO A PORRA TODA PRO PC N EXPLODI////////
}
int credits::update(int kpos, int kpress) {
	////////LIMITADOR DE FPS DAS CAVERNAS//////// 
	if (fpscount == 1) {
		fps = 170 + clock();
		fpscount = 0;
		y+=10;
	}
	if (fps <= clock()) {
		fpscount = 1;
	}
	if (y >= 760) {
		Gamecontroller::SwitchLevel(new Gamemenu());
	}
	////////UM TIMEZIN PRA V A LOGO BEM D BOA E DPOIS PASSA PRO PROX LEVEL/TELA///////
	return 0;
}
void credits::render() {
	wchar_t credits_1[100];
	wchar_t credits_2[100];
	wchar_t credits_3[100];
	wcscpy_s(credits_1, 100, L"NEM DEU TRABALHO");
	wcscpy_s(credits_2, 100, L"ESSE EH SO 1 ALPHA");
	wcscpy_s(credits_3, 100, L"JAJA SAI O BETA");

	gfx->BeginDraw();
	gfx->ClearScreen(D2D1::ColorF::Black);
	gfx->Drawtext(credits_3, D2D1::ColorF::White, 30.0f, 1000, y + 50, 500, y-180);
	gfx->Drawtext(credits_2, D2D1::ColorF::White, 30.0f, 1000, y + 50, 500, y-90);
	gfx->Drawtext(credits_1, D2D1::ColorF::White, 30.0f, 1000, y + 50, 500, y);
	gfx->EndDraw();
}
void credits::data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win, int* loses, float* W_S_alg, int* beted, int* lost) {

}
#include "WinLoss_screen.h"
#include <string>
#include <sstream>
#include <iostream>
#include <iomanip>
#include "Gamecontroller.h"
#include "Bet.h"
#include "day.h"
#include "credits.h"

struct battle_alg {
	float confidence;
	float old_grades;
	float boss_diff;
	float my_diff;
};

struct battle_alg wm_Class_B_alg;

using namespace std;

void WinLoss::load() {
	////////LOADANDO AS IMAGEM////////
	win_screen = new Spritesheet(L"history//Fist fight//WIN_SCREEN//win.png", gfx);
	win_screen_bright = new Spritesheet(L"history//Fist fight//WIN_SCREEN//win_bright.png", gfx);
	win_screen_super_bright = new Spritesheet(L"history//Fist fight//WIN_SCREEN//win_super_bright.png", gfx);

	loss_screen = new Spritesheet(L"history//Fist fight//WIN_SCREEN//loss.png", gfx);
	loss_screen_bright = new Spritesheet(L"history//Fist fight//WIN_SCREEN//loss_bright.png", gfx);
	loss_screen_super_bright = new Spritesheet(L"history//Fist fight//WIN_SCREEN//loss_super_bright.png", gfx);

	continuar_bright = new Spritesheet(L"history//Fist fight//WIN_SCREEN//CONTINUAR_BRIGHT.png", gfx);
	continuar_not_bright = new Spritesheet(L"history//Fist fight//WIN_SCREEN//CONTINUAR_UNBRIGHT.png", gfx);
	continuar_pressed = new Spritesheet(L"history//Fist fight//WIN_SCREEN//CONTINUAR_pressed.png", gfx);

	crack_over = new Spritesheet(L"history//Fist fight//acabo_a_festa.png", gfx);

	try_again = new Spritesheet(L"history//Fist fight//try again.png", gfx);
	try_again_saturated = new Spritesheet(L"history//Fist fight//try again saturated.png", gfx);

	flash_alpha = 1.0f;
	u = 0;
	fps2 = 0;
	fist_exec = TRUE;
	lost_flag = 0;
	count = 0;
}

void WinLoss::unload() {
	////////DELETANDO A PORRA TODA PRO PC N EXPLODI////////
	delete win_screen;
	delete win_screen_bright;
	delete win_screen_super_bright;
}
int WinLoss::update(int kpos, int kpress) {
	this->kpos = kpos;
	this->kpress = kpress;
	////////LIMITADOR DE FPS DAS CAVERNAS//////// 
	if (fpscount == 1) {
		fps = 50 + clock();
		fpscount = 0;
		fps2++;
		u++;
		if (kpress == 2 || kpress == 1 || count >= 1) {
			count++;
		}
		if (count == 10) {
			
			if (dey == 5 || cracks==0) {
				Gamecontroller::SwitchLevel(new credits());
			}
			else {
				Gamecontroller::SwitchLevel(new day());
			}
		}
	}
	if (fps <= clock()) {
		fpscount = 1;
		if (flash_alpha > 0.0f) {
			flash_alpha -= 0.1f;
		}
	}
	if (fps2 == 100) {
		//Gamecontroller::SwitchLevel(new Bet());
	}
	if (fps2 == 18) {
		fps2 = 0;
	}
	if (u == 4) {
		u = 1;
	}
	return 5;
}
void WinLoss::render() {
	/////////CONVERTENDO NUM DE CRACKINHOS *DEMOREI PRA APRENDER//////////
	wstring w_cracks = to_wstring(cracks);
	wchar_t text_cracks[10];
	wcscpy_s(text_cracks, 10, w_cracks.c_str());
	/////////CONVERTENDO NUM DE VITORIAS//////////
	wstring w_wins = to_wstring(wins);
	wchar_t text_wins[10];
	wcscpy_s(text_wins, 10, w_wins.c_str());
	/////////CONVERTENDO NUM DE DERROTAS//////////
	wstring w_losses = to_wstring(losses);
	wchar_t text_losses[10];
	wcscpy_s(text_losses, 10, w_losses.c_str());
	/////////CONVERTENDO MUTIPLICADOR//////////
	wstring w_multi = to_wstring(multiplier);
	wchar_t text_multi[10];
	wcscpy_s(text_multi, 10, w_multi.c_str());

	wchar_t text_multi_r[10];
	wcscpy_s(text_multi_r, 10, L"");
	wcsncat_s(text_multi_r, text_multi, 4);

	gfx->BeginDraw();

	if (yeano == 1) {
		if (wm_Class_B_alg.my_diff > wm_Class_B_alg.boss_diff) {
			if (fps2 < 6) win_screen->drawwith();
			if (fps2 >= 6 && fps2 < 10) win_screen_bright->drawwith();
			if (fps2 >= 10 && fps2 < 14) win_screen_super_bright->drawwith();
			if (fps2 >= 14 && fps2 < 18) win_screen_bright->drawwith();
			gfx->Drawtext(text_cracks, D2D1::ColorF::Yellow, 70.0f, 1200, 300, 930, 252);
			gfx->Drawtext(text_wins, D2D1::ColorF::LimeGreen, 70.0f, 500, 300, 360, 251);
			gfx->Drawtext(text_losses, D2D1::ColorF::Red, 70.0f, 500, 400, 360, 372);
			gfx->Drawtext(text_multi_r, D2D1::ColorF::DeepSkyBlue, 70.0f, 1000, 1000, 575, 552);
			
		}
		else if (wm_Class_B_alg.my_diff < wm_Class_B_alg.boss_diff) {

			if (fps2 < 6) loss_screen->drawwith();
			if (fps2 >= 6 && fps2 < 10) loss_screen_bright->drawwith();
			if (fps2 >= 10 && fps2 < 14) loss_screen_super_bright->drawwith();
			if (fps2 >= 14 && fps2 < 18) loss_screen_bright->drawwith();
			gfx->Drawtext(text_cracks, D2D1::ColorF::Yellow, 70.0f, 1200, 300, 930, 252);
			gfx->Drawtext(text_wins, D2D1::ColorF::LimeGreen, 70.0f, 500, 300, 360, 251);
			gfx->Drawtext(text_losses, D2D1::ColorF::Red, 70.0f, 500, 400, 360, 372);
			gfx->Drawtext(text_multi_r, D2D1::ColorF::DeepSkyBlue, 70.0f, 1000, 1000, 575, 552);
			
		}
	}
	
	 if (yeano == 0) {
		 if (wm_Class_B_alg.my_diff > wm_Class_B_alg.boss_diff) {

			 if (fps2 < 6) loss_screen->drawwith();
			 if (fps2 >= 6 && fps2 < 10) loss_screen_bright->drawwith();
			 if (fps2 >= 10 && fps2 < 14) loss_screen_super_bright->drawwith();
			 if (fps2 >= 14 && fps2 < 18) loss_screen_bright->drawwith();
			 gfx->Drawtext(text_cracks, D2D1::ColorF::Yellow, 70.0f, 1200, 300, 930, 252);
			 gfx->Drawtext(text_wins, D2D1::ColorF::LimeGreen, 70.0f, 500, 300, 360, 251);
			 gfx->Drawtext(text_losses, D2D1::ColorF::Red, 70.0f, 500, 400, 360, 372);
			 gfx->Drawtext(text_multi_r, D2D1::ColorF::DeepSkyBlue, 70.0f, 1000, 1000, 575, 552);
			 
		}
		 else if (wm_Class_B_alg.my_diff < wm_Class_B_alg.boss_diff) {

			 if (fps2 < 6) win_screen->drawwith();
			 if (fps2 >= 6 && fps2 < 10) win_screen_bright->drawwith();
			 if (fps2 >= 10 && fps2 < 14) win_screen_super_bright->drawwith();
			 if (fps2 >= 14 && fps2 < 18) win_screen_bright->drawwith();
			 gfx->Drawtext(text_cracks, D2D1::ColorF::Yellow, 70.0f, 1200, 300, 930, 252);
			 gfx->Drawtext(text_wins, D2D1::ColorF::LimeGreen, 70.0f, 500, 300, 360, 251);
			 gfx->Drawtext(text_losses, D2D1::ColorF::Red, 70.0f, 500, 400, 360, 372);
			 gfx->Drawtext(text_multi_r, D2D1::ColorF::DeepSkyBlue, 70.0f, 1000, 1000, 575, 552);
			 
		 }
	}
		continuar_not_bright->drawwith(1265,700,980,608,1.0f);
	
	if (kpos == 1) {
		continuar_bright->drawwith(1265, 700, 980, 608, 1.0f);
	}
	if (kpress == 1) {
		continuar_pressed->drawwith(1265, 700, 980, 608, 1.0f);
	}
	//gfx->ClearScreen(D2D1::ColorF::Black);

	if (cracks == 0) {
		crack_over->drawwith();
	}
	if (kpos == 2) {
		try_again_saturated->drawwith(905, 560, 390, 395, 1.0f);
	}
	if (kpress == 2) {
		try_again_saturated->drawwith(915, 570, 380, 385, 1.0f);
	}
	gfx->FillRectangle(NULL, NULL, flash_alpha, D2D1::ColorF::White);
	gfx->EndDraw();
}
void WinLoss::data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win, 
	int* loses, float* W_S_alg, int* beted,int* lost) {
	if (fist_exec == TRUE) {
		this->yeano = *yeano;
		wins = *win;
		losses = *loses;
		cracks = *crackin;
		multiplier = *W_S_alg;
		wm_Class_B_alg = *B_Alg;
		dey = *day;
		if (*lost == 1) {
			lost_flag = 1;
			*lost = 0;
		}
		muti_alg();
		fist_exec = FALSE;
	}
	*B_Alg = wm_Class_B_alg;
	*win = wins;
	*loses = losses;
	*crackin = cracks;
	*W_S_alg = multiplier;
}
void WinLoss::muti_alg() {
	float win_multi;
	
	win_multi = (wins * 0.05);
	if (lost_flag == 1) {
		multiplier = 1;
		return;
	}

	multiplier = 1 + win_multi;
}
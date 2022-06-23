#include "day.h"
#include "Gamelevel.h"
#include "Gamecontroller.h"
#include "Bet.h"
#include "history.h"

void day::load() {
	////////LOADANDO AS IMAGEM////////
	sprite = new Spritesheet(L"menu//cenario//skybckgrd.png", gfx);
	sprite2 = new Spritesheet(L"menu//cenario//cloudsbckgrd.png", gfx);
	sprite3 = new Spritesheet(L"menu//cenario//schoollayer.png", gfx);
	sprite4 = new Spritesheet(L"menu//cenario//treemove.png", gfx);
	x = 0;
	x2 = 3840;
	x3 = 0;
	fps2 = 0;
	flag = 0;
	day_execution = 1;
	screen_flash_alpha = 1.0f;

}

void day::unload() {
	////////DELETANDO A PORRA TODA PRO PC N EXPLODI////////

}
int day::update(int kpos, int kpress) {
	////////LIMITADOR DE FPS DAS CAVERNAS//////// 
	if (fpscount == 1) {
		fps = 5 + clock();
		fpscount = 0;
		x -= 1;
		x2 -= 1;
		fps2 += 2;
	}

	if (fps2 == 50) {

		if (flag == 3) {
			x3 = -2;
			flag = 0;
		}
		else if (flag == 2) {
			x3 = 0;
			flag++;
		}
		else if (flag == 1) {
			x3 = 2;
			flag++;
		}
		else if (flag == 0) {
			x3 = 0;
			flag++;
		}
		fps2 = 0;
	}

	if (fps <= clock()) {
		fpscount = 1;
		
		if (screen_flash_alpha >= 0.0f) {
			screen_flash_alpha -= 0.02f;
		}
	}

	if (x <= -400 && day==1) {
		Gamecontroller::loadiniciallevel(new history());
	}
	else if (x <= -400 && day != 1) {
		Gamecontroller::loadiniciallevel(new Bet());
	}
	
	return 0;
}
void day::render() {
	wchar_t day_text[100];
	

	if (fpscount == 1) {

		gfx->BeginDraw();

		sprite->drawwith(NULL, NULL, 1.0f);
		sprite2->drawwith(x, -140, x2, 550, 1.0f);
		sprite3->drawwith(0, 210, NULL, 720, 1.0f);
		sprite4->drawwith(NULL, NULL, x3, NULL, 1.0f);

		gfx->FillRectangle(NULL, NULL, screen_flash_alpha, D2D1::ColorF::White);

		if (day == 1) {
			wcscpy_s(day_text, 100, L"SEGUNDA");
			gfx->Drawtext(day_text, D2D1::ColorF::White, 60.0f, 1000, 55, 500, 50);
		}
		else if (day == 2) {
			wcscpy_s(day_text, 100, L"TERÇA");
			gfx->Drawtext(day_text, D2D1::ColorF::White, 60.0f, 1000, 55, 530, 50);
		}
		else if (day == 3) {
			wcscpy_s(day_text, 100, L"QUARTA");
			gfx->Drawtext(day_text, D2D1::ColorF::White, 60.0f, 1000, 55, 530, 50);
		}
		else if (day == 4) {
			wcscpy_s(day_text, 100, L"QUINTA");
			gfx->Drawtext(day_text, D2D1::ColorF::White, 60.0f, 1000, 55, 530, 50);
		}
		else if (day == 5) {
			wcscpy_s(day_text, 100, L"SEXTA");
			gfx->Drawtext(day_text, D2D1::ColorF::White, 60.0f, 1000, 55, 530, 50);
		}
		gfx->EndDraw();
	}
}
void day::data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win, 
	int* loses, float* W_S_alg, int* beted, int* lost) {
	if (day_execution == 1) {
		
		this->day = *day;
		day_execution = 0;
		this->day++;
	}
		*day = this->day;

}
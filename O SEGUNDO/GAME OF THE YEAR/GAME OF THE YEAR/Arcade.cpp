#include "Arcade.h"
void Arcade::load() {
	GUI = new Arcade_gui();
	Fight_menu = new Fighter_selection();
	fight_menu_show = FALSE;
	press_delay = FALSE;
	P_delay = 0;
	flash_alpha = 1.0f;
}

void Arcade::unload() {
	delete GUI;
}
int Arcade::update(int kpos, int kpress) {
	GUI->Key_getter(kpos, kpress);
	Fight_menu->Key_getter( kpos, kpress);
	key_delay(kpress, kpos);
	caveman_fps();

	return 6;
}
void Arcade::render() {

	gfx->BeginDraw();
	
		if (fight_menu_show == FALSE)GUI->show_menu();
		if (fight_menu_show == TRUE)Fight_menu->show();
		gfx->FillRectangle(NULL, NULL, flash_alpha, D2D1::ColorF::White);

	gfx->EndDraw();
}
void Arcade::data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win, int* loses, float* W_S_alg, int* beted, int* lost) {
}
void Arcade::key_delay(int kpress,int kpos) {
	if (kpress == 1) {
		press_delay = TRUE;
	}
	if (press_delay == TRUE) {
		if (P_delay == 0) {
			P_delay = 200 + clock();
		}
		if (P_delay <= clock()) {
			fight_menu_show = TRUE;
			P_delay = 0;
			press_delay = FALSE;
		}
	}

}

void Arcade::caveman_fps() {

	if (fpscount == 1) {
		fps = 50 + clock();
		fpscount = 0;
	}
	if (fps <= clock()) {
		fpscount = 1;
		if (flash_alpha > 0.0f) {
			flash_alpha -= 0.1f;
		}
	}
}
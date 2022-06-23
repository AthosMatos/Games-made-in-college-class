#include "Arcade_gui.h"

void Arcade_gui::show_menu() {
	
	one_v_R = new Spritesheet(L"Arcade//Arcade_gui//Selected_buttons//1_vs_random_selected.png", gfx);
	one_v_R_P = new Spritesheet(L"Arcade//Arcade_gui//Selected_buttons//1_vs_random_selected_pressed.png", gfx);
	one_v_one = new Spritesheet(L"Arcade//Arcade_gui//Selected_buttons//1_vs_1_selected.png", gfx);
	one_v_one_P = new Spritesheet(L"Arcade//Arcade_gui//Selected_buttons//1_vs_1_selected_pressed.png", gfx);
	n_selected = new Spritesheet(L"Arcade//Arcade_gui//Selected_buttons//nothing_selected.png", gfx);

	if (kpos == 1) { one_v_R->drawwith(); }
	else if (kpos == 2) { one_v_one->drawwith(); }
	else { n_selected->drawwith(); }
	if (kpos == 1 && kpress == 1)one_v_R_P->drawwith();
	if (kpos == 2 && kpress == 1)one_v_one_P->drawwith();
	A_logo->Show_logo();

	delete one_v_R;
	delete one_v_one;
	delete n_selected;
	delete one_v_one_P;
	delete one_v_R_P;
}
void Arcade_gui::Key_getter(int kpos, int kpress) {
	this->kpos = kpos;
	this->kpress = kpress;
}
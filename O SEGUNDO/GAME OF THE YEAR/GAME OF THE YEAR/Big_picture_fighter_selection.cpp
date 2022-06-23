#include "Big_picture_fighter_selection.h"

void Big_picture::draw() {
	ATH_char = new Spritesheet(L"history//eu.png", gfx);
	GIU_char = new Spritesheet(L"history//giu.png", gfx);
	LEU_char = new Spritesheet(L"history//leu.png", gfx);
	OZI_char = new Spritesheet(L"history//ozi.png", gfx);
	RAU_char = new Spritesheet(L"history//Fist fight//raul boos//raul boss.png", gfx);
	PIR_char = new Spritesheet(L"history//Fist fight//pires boss//pires_boss_full_1.png", gfx);
	BRU_char = new Spritesheet(L"history//Fist fight//bruno boss//bruno_boss.png", gfx);
	ALB_char = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_00.png", gfx);
	WIL_char = new Spritesheet(L"history//Fist fight//wilfredo head//wlfredo head.png", gfx);

	if (kpos == 3 && P_1_S == 0)ATH_char->drawwith(632, 1252, -230, 0, 1.0f);
	if (kpos == 4 && P_1_S == 0)LEU_char->drawwith(632, 1252, -230, 0, 1.0f);
	if (kpos == 5 && P_1_S == 0)GIU_char->drawwith(632, 1252, -230, 0, 1.0f);
	if (kpos == 6 && P_1_S == 0)OZI_char->drawwith(632, 1252, -230, 0, 1.0f);
	if (kpos == 7 && P_1_S == 0)ALB_char->drawwith(512, 720, -200, 0, 1.0f);
	if (kpos == 8 && P_1_S == 0)PIR_char->drawwith(580, 770, -200, -500, 1.0f);
	if (kpos == 9 && P_1_S == 0)BRU_char->drawwith(540, 640, -100, 0, 1.0f);
	if (kpos == 10 && P_1_S == 0)RAU_char->drawwith(580, 680, -140, -40, 1.0f);
	if (kpos == 11 && P_1_S == 0)WIL_char->drawwith(456, 720, -40, -40, 1.0f);

	if ((kpos == 3 && P_2_S == 0) && P_1_S != 0)ATH_char->drawwith(1532, 1252, 730, 0, 1.0f);
	if ((kpos == 4 && P_2_S == 0) && P_1_S != 0)LEU_char->drawwith(1532, 1252, 730, 0, 1.0f);
	if ((kpos == 5 && P_2_S == 0) && P_1_S != 0)GIU_char->drawwith(1532, 1252, 730, 0, 1.0f);
	if ((kpos == 6 && P_2_S == 0) && P_1_S != 0)OZI_char->drawwith(1532, 1252, 730, 0, 1.0f);
	if ((kpos == 7 && P_2_S == 0) && P_1_S != 0)ALB_char->drawwith(1412, 720, 700, 0, 1.0f);
	if ((kpos == 8 && P_2_S == 0) && P_1_S != 0)PIR_char->drawwith(1480, 770, 700, -500, 1.0f);
	if ((kpos == 9 && P_2_S == 0) && P_1_S != 0)BRU_char->drawwith(1440, 640, 800, 0, 1.0f);
	if ((kpos == 10 && P_2_S == 0) && P_1_S != 0)RAU_char->drawwith(1480, 680, 840, -40, 1.0f);
	if ((kpos == 11 && P_2_S == 0) && P_1_S != 0)WIL_char->drawwith(1356, 720, 860, -40, 1.0f);

	if (P_1_S == 1)ATH_char->drawwith(632, 1252, -230, 0, 1.0f);
	if (P_1_S == 2)LEU_char->drawwith(632, 1252, -230, 0, 1.0f);
	if (P_1_S == 3)GIU_char->drawwith(632, 1252, -230, 0, 1.0f);
	if (P_1_S == 4)OZI_char->drawwith(632, 1252, -230, 0, 1.0f);
	if (P_1_S == 5)ALB_char->drawwith(512, 720, -200, 0, 1.0f);
	if (P_1_S == 6)PIR_char->drawwith(580, 770, -200, -500, 1.0f);
	if (P_1_S == 7)BRU_char->drawwith(540, 640, -100, 0, 1.0f);
	if (P_1_S == 8)RAU_char->drawwith(580, 680, -140, -40, 1.0f);
	if (P_1_S == 9)WIL_char->drawwith(456, 720, -40, -40, 1.0f);

	if (P_2_S == 1)ATH_char->drawwith(1532, 1252, 730, 0, 1.0f);
	if (P_2_S == 2)LEU_char->drawwith(1532, 1252, 730, 0, 1.0f);
	if (P_2_S == 3)GIU_char->drawwith(1532, 1252, 730, 0, 1.0f);
	if (P_2_S == 4)OZI_char->drawwith(1532, 1252, 730, 0, 1.0f);
	if (P_2_S == 5)ALB_char->drawwith(1412, 720, 700, 0, 1.0f);
	if (P_2_S == 6)PIR_char->drawwith(1480, 770, 700, -500, 1.0f);
	if (P_2_S == 7)BRU_char->drawwith(1440, 640, 800, 0, 1.0f);
	if (P_2_S == 8)RAU_char->drawwith(1480, 680, 840, -40, 1.0f);
	if (P_2_S == 9)WIL_char->drawwith(1356, 720, 860, -40, 1.0f);

	delete ATH_char;
	delete GIU_char;
	delete LEU_char;
	delete OZI_char;
	delete RAU_char;
	delete PIR_char;
	delete BRU_char;
	delete ALB_char;
	delete WIL_char;
}
void Big_picture::Key_getter(int player_1_selected, int player_2_selected,int kpos, int kpress) {
	this->kpos = kpos;
	this->kpress = kpress;
	P_1_S = player_1_selected;
	P_2_S = player_2_selected;
}
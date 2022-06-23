#include "squares_for_fight_selection.h"

void Squares::draw_squares() {

	ATH_square = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//ATH_square.png", gfx);
	LEU_square = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//LEU_square.png", gfx);
	GIU_square = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//GIU_square.png", gfx);
	OZI_square = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//OZI_square.png", gfx);
	ALB_square = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//AL_square.png", gfx);
	WIL_square = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//WIL_square.png", gfx);
	RAU_square = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//RA_square.png", gfx);
	BRU_square = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//BRU_square.png", gfx);
	PIR_square = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//PI_square.png", gfx);

	ATH_square_bright = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//ATH_square_bright.png", gfx);
	LEU_square_bright = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//LEU_square_bright.png", gfx);
	GIU_square_bright = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//GIU_square_bright.png", gfx);
	OZI_square_bright = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//OZI_square_bright.png", gfx);
	ALB_square_bright = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//AL_square_bright.png", gfx);
	WIL_square_bright = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//WIL_square_bright.png", gfx);
	RAU_square_bright = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//RA_square_bright.png", gfx);
	BRU_square_bright = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//BRU_square_bright.png", gfx);
	PIR_square_bright = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//Fighters//PI_square_bright.png", gfx);

	////top///
	ATH_square->drawwith(535, 215, 418, 50, 1.0f);
	LEU_square->drawwith(690, 215, 572, 50, 1.0f);
	GIU_square->drawwith(845, 215, 730, 50, 1.0f);
	///mid////
	OZI_square->drawwith(455, 420, 340, 256, 1.0f);
	ALB_square->drawwith(768, 420, 653, 256, 1.0f);
	PIR_square->drawwith(926, 420, 811, 256, 1.0f);
	///botton///
	BRU_square->drawwith(535, 638, 418, 475, 1.0f);
	RAU_square->drawwith(690, 638, 572, 475, 1.0f);
	WIL_square->drawwith(845, 638, 730, 475, 1.0f);

	if (kpos == 3)ATH_square_bright->drawwith(535, 215, 418, 50, 1.0f);
	if (kpos == 4)LEU_square_bright->drawwith(690, 215, 572, 50, 1.0f);
	if (kpos == 5)GIU_square_bright->drawwith(845, 215, 730, 50, 1.0f);
	if (kpos == 6)OZI_square_bright->drawwith(455, 420, 340, 256, 1.0f);
	if (kpos == 7)ALB_square_bright->drawwith(768, 420, 653, 256, 1.0f);
	if (kpos == 8)PIR_square_bright->drawwith(926, 420, 811, 256, 1.0f);
	if (kpos == 9)BRU_square_bright->drawwith(535, 638, 418, 475, 1.0f);
	if (kpos == 10)RAU_square_bright->drawwith(690, 638, 572, 475, 1.0f);
	if (kpos == 11)WIL_square_bright->drawwith(845, 638, 730, 475, 1.0f);

	if (kpress == 1 && kpos == 3)ATH_square_bright->drawwith(540, 220, 413, 45, 1.0f);
	if (kpress == 1 && kpos == 4)LEU_square_bright->drawwith(695, 220, 567, 45, 1.0f);
	if (kpress == 1 && kpos == 5)GIU_square_bright->drawwith(850, 220, 725, 45, 1.0f);
	if (kpress == 1 && kpos == 6)OZI_square_bright->drawwith(460, 425, 335, 251, 1.0f);
	if (kpress == 1 && kpos == 7)ALB_square_bright->drawwith(773, 425, 648, 251, 1.0f);
	if (kpress == 1 && kpos == 8)PIR_square_bright->drawwith(931, 425, 806, 251, 1.0f);
	if (kpress == 1 && kpos == 9)BRU_square_bright->drawwith(540, 643, 413, 470, 1.0f);
	if (kpress == 1 && kpos == 10)RAU_square_bright->drawwith(695, 643, 567, 470, 1.0f);
	if (kpress == 1 && kpos == 11)WIL_square_bright->drawwith(850, 643, 725, 470, 1.0f);

	delete ATH_square;
	delete LEU_square;
	delete GIU_square;
	delete OZI_square;
	delete ALB_square;
	delete WIL_square;
	delete RAU_square;
	delete BRU_square;
	delete PIR_square;

	delete ATH_square_bright;
	delete LEU_square_bright;
	delete GIU_square_bright;
	delete OZI_square_bright;
	delete ALB_square_bright;
	delete WIL_square_bright;
	delete RAU_square_bright;
	delete BRU_square_bright;
	delete PIR_square_bright;

}
void Squares::Key_getter(int Kpos, int Kpress) {
	this->kpos = Kpos;
	this->kpress = Kpress;
}
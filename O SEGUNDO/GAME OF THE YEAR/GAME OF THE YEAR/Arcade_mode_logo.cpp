#include "Arcade_mode_logo.h"

void Arcade_logo::Show_logo() {

	arcade_frame1 = new Spritesheet(L"Arcade//Arcade_gui//arcade_moving_logo//ARCADE MODE_frame1.png", gfx);
	arcade_frame2 = new Spritesheet(L"Arcade//Arcade_gui//arcade_moving_logo//ARCADE MODE_frame2.png", gfx);
	arcade_frame3 = new Spritesheet(L"Arcade//Arcade_gui//arcade_moving_logo//ARCADE MODE_frame3.png", gfx);
	arcade_frame4 = new Spritesheet(L"Arcade//Arcade_gui//arcade_moving_logo//ARCADE MODE_frame4.png", gfx);
	arcade_frame5 = new Spritesheet(L"Arcade//Arcade_gui//arcade_moving_logo//ARCADE MODE_frame5.png", gfx);
	arcade_frame6 = new Spritesheet(L"Arcade//Arcade_gui//arcade_moving_logo//ARCADE MODE_frame6.png", gfx);
	arcade_frame7 = new Spritesheet(L"Arcade//Arcade_gui//arcade_moving_logo//ARCADE MODE_frame7.png", gfx);

	if (fpscount == 1) {
		fps = 100 + clock();
		fpscount = 0;
		frame++;
		if (frame == 7) {
			frame = 0;
		}
	}
	if (fps <= clock()) {
		fpscount = 1;
	}

	if (frame == 0)arcade_frame1->drawwith(1213, 89, 790, 47, 1.0f);
	if (frame == 1)arcade_frame2->drawwith(1213, 89, 790, 47, 1.0f);
	if (frame == 2)arcade_frame3->drawwith(1213, 89, 790, 47, 1.0f);
	if (frame == 3)arcade_frame4->drawwith(1213, 89, 790, 47, 1.0f);
	if (frame == 4)arcade_frame5->drawwith(1213, 89, 790, 47, 1.0f);
	if (frame == 5)arcade_frame6->drawwith(1213, 89, 790, 47, 1.0f);
	if (frame == 6)arcade_frame7->drawwith(1213, 89, 790, 47, 1.0f);

	delete arcade_frame1;
	delete arcade_frame2;
	delete arcade_frame3;
	delete arcade_frame4;
	delete arcade_frame5;
	delete arcade_frame6;
	delete arcade_frame7;
}
#include "Figher_selection.h"

void Fighter_selection::show() {
	F_squares = new Squares();
	B_picture = new Big_picture();
	fighers = new Fighters();
	background = new Spritesheet(L"Arcade//Arcade_gui//Fighters_screen//bckground//background_classroom_red.png", gfx);

	if (kpress == 0) {
		square_press = FALSE;
		if (fpscount == 1) {
			fps = 10 + clock();
			fpscount = 0;
			if (alpha >= 0.0f) {
				alpha -= 0.1f;
			}
		}
		if (fps <= clock()) {
			fpscount = 1;
		}
	}
	//1==ath kpos==3
	//2==giu kpos==5
	//3==leu kpos==4
	//4==ozi kpos==6
	//5==alb kpos==7
	//6==pir kpos==8
	//7==bru kpos==9
	//8==rau kpos==10
	//9==wil kpos==11

	if (kpress == 1) {
		press_delay = TRUE;
	}
	if (press_delay == TRUE) {
		if (P_delay == 0) {
			P_delay = 500 + clock();
		}
		if (P_delay <= clock()) {
			square_press = TRUE;
			P_delay = 0;
			press_delay = FALSE;
		}
	}

	F_squares->Key_getter(this->kpos, this->kpress);
	B_picture->Key_getter(player_1_S,player_2_S,this->kpos, this->kpress);

	background->drawwith();
	B_picture->draw();
	F_squares->draw_squares();
	gfx->FillRectangle(NULL,NULL,alpha,D2D1::ColorF::White);

	if (square_press == TRUE) {
		gfx->ClearScreen(D2D1::ColorF::Red);
	}

	if (player_2_S != 0) {
		if (p1 > p2) {
			gfx->ClearScreen(D2D1::ColorF::Green);
		}
		if (p1 < p2) {
			gfx->ClearScreen(D2D1::ColorF::Red);
		}
		if (p1 == p2) {
			gfx->ClearScreen(D2D1::ColorF::Blue);
		}
	}

	delete F_squares;
	delete B_picture;
	delete background;
	delete fighers;
}
void Fighter_selection::Key_getter(int kpos, int kpress) {
	this->kpos = kpos;
	this->kpress = kpress;
	P_select();
}
void Fighter_selection::P_select() {

	if (player_1_S == 0) {

		if ((kpos == 3 && kpress == 1)) {
			p1 = fighers->Alg_generator(1);
			player_1_S = 1;
		}
		else if ((kpos == 4 && kpress == 1)) {
			p1 = fighers->Alg_generator(3);
			player_1_S = 2;
		}
		else if ((kpos == 5 && kpress == 1)) {
			p1 = fighers->Alg_generator(2);
			player_1_S = 3;
		}
		else if ((kpos == 6 && kpress == 1)) {
			p1 = fighers->Alg_generator(4);
			player_1_S = 4;
		}
		else if ((kpos == 7 && kpress == 1)) {
			p1 = fighers->Alg_generator(5);
			player_1_S = 5;
		}
		else if ((kpos == 8 && kpress == 1)) {
			p1 = fighers->Alg_generator(6);
			player_1_S = 6;
		}
		else if ((kpos == 9 && kpress == 1)) {
			p1 = fighers->Alg_generator(7);
			player_1_S = 7;
		}
		else if ((kpos == 10 && kpress == 1)) {
			p1 = fighers->Alg_generator(8);
			player_1_S = 8;
		}
		else if ((kpos == 11 && kpress == 1)) {
			p1 = fighers->Alg_generator(9);
			player_1_S = 9;
		}
	}
	if (player_1_S != 0 && player_2_S == 0) {
		if ((kpos == 3 && kpress == 1)&& player_1_S != 1) {
			p2 = fighers->Alg_generator(1);
			player_2_S = 1;
		}
		else if ((kpos == 4 && kpress == 1) && player_1_S != 2) {
			p2 = fighers->Alg_generator(3);
			player_2_S = 2;
		}
		else if ((kpos == 5 && kpress == 1) && player_1_S != 3) {
			p2 = fighers->Alg_generator(2);
			player_2_S = 3;
		}
		else if ((kpos == 6 && kpress == 1) && player_1_S != 4) {
			p2 = fighers->Alg_generator(4);
			player_2_S = 4;
		}
		else if ((kpos == 7 && kpress == 1) && player_1_S != 5) {
			p2 = fighers->Alg_generator(5);
			player_2_S = 5;
		}
		else if ((kpos == 8 && kpress == 1) && player_1_S != 6) {
			p2 = fighers->Alg_generator(6);
			player_2_S = 6;
		}
		else if ((kpos == 9 && kpress == 1) && player_1_S != 7) {
			p2 = fighers->Alg_generator(7);
			player_2_S = 7;
		}
		else if ((kpos == 10 && kpress == 1) && player_1_S != 8) {
			p2 = fighers->Alg_generator(8);
			player_2_S = 8;
		}
		else if ((kpos == 11 && kpress == 1) && player_1_S != 9) {
			p2 = fighers->Alg_generator(9);
			player_2_S = 9;
		}
	}


}
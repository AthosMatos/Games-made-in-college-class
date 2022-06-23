#include "Bet.h"
#include "historylvl2.h"
#include <cstdlib>
#include <ctime>

struct items {
	int lembrar_do_nada;
	int pegar_o_celular;
	int buscar_algo_na_bolsa;
	int pedir_ao_coleguinha;

	int USED_lembrar_do_nada;
	int USED_pegar_o_celular;
	int USED_buscar_algo_na_bolsa;
	int USED_pedir_ao_coleguinha;
};

struct battle_alg {
	float confidence;
	float old_grades;
	float boss_diff;
	float my_diff;
};

struct items Class_items;
struct battle_alg Class_B_alg;

void Bet::load() {

	srand(time(NULL));

	kraklogo = new Spritesheet(L"history//Fist fight//crackinho.png", gfx);
	buttonon = new Spritesheet(L"history//Fist fight//buttononpress.png", gfx);
	buttonoff = new Spritesheet(L"history//Fist fight//buttonoff.png", gfx);

	buttonNpresson = new Spritesheet(L"history//Fist fight//buttononnpress.png", gfx);
	buttonNpressoff = new Spritesheet(L"history//Fist fight//buttonoffnpress.png", gfx);

	bckgrnd = new Spritesheet(L"history//Fist fight//backbet.png", gfx);

	B_up = new Spritesheet(L"history//Fist fight//B_up.png", gfx);
	B_down = new Spritesheet(L"history//Fist fight//B_down.png", gfx);

	B_up_off = new Spritesheet(L"history//Fist fight//B_up_off.png", gfx);
	B_down_off = new Spritesheet(L"history//Fist fight//B_down_off.png", gfx);

	Bag = new Spritesheet(L"history//Fist fight//bag.png", gfx);
	Bag_open = new Spritesheet(L"history//Fist fight//bag_open.png", gfx);

	close_button = new Spritesheet(L"history//Fist fight//close_button.png", gfx);

	Busca_bolsa = new Spritesheet(L"Items//question_mark.png", gfx);
	P_celular = new Spritesheet(L"Items//phone.png", gfx);
	Lembra = new Spritesheet(L"Items//lamp_ideia.png", gfx);
	ask_friend = new Spritesheet(L"Items//hand_help.png", gfx);

	ME = new Spritesheet(L"history//eu.png", gfx);


	frame = -1;
	alpha1 = 1.0f;
	blink = 0;
	blinkcount = 0;
	pressload = 0;
	blinkcount2 = 0;
	b_count = 0;
	count = 0;
	crackcount = 1;
	crackbett = 0;
	yeaano = -1;
	exeflag = 1;
	level = 3;
}

void Bet::unload() {

	delete kraklogo;
	delete buttonNpressoff;
	delete buttonNpresson;
	delete buttonoff;
	delete buttonon;
	delete bckgrnd;
	delete B_up;
	delete B_down;
	delete B_up_off;
	delete B_down_off;
}

int Bet::update(int kpos, int kpress) {

	this->kpos = kpos;
	this->kpress = kpress;

	if (pressload == 1) {
		pressload = -1;
	}
	else if ((kpress == 3 || kpress == 4) && pressload == 0) {
		pressload = 1;
	}
	else if (kpress == 0) {
		pressload = 0;
	}
	else if (kpress == 5 ) {
		pressflag = 1;
	}
	else if (kpress == 6 ) {
		pressflag = 0;
	}



	if (fpscount == 1) {
		fps = 50 + clock();
		fpscount = 0;
		blinkcount++;
		blinkcount2++;
	}
	if (fps <= clock()) {
		fpscount = 1;
		if (alpha1 > 0.0f) {
			alpha1 -= 0.05f;
		}
		if (b_count == 1) {
			count++;
		}
	}
	if ((kpress == 1 || kpress == 2) && crackbett > 0) {
		b_count = 1;
	}
	if (count == 7) {
		Gamecontroller::SwitchLevel(new historylvl2());
	}

	if (blinkcount == 10) {
		blink = 1;
	}
	else if (blinkcount == 20 && blinkcount2 < 60) {
		blink = 0;
		blinkcount = 0;
	}
	if (exeflag == 1) {
		battle();
		exeflag = 0;
	}

	return 3;
}

void Bet::render() {
	float by = 400;

	wchar_t eu_status[100];
	wcscpy_s(eu_status, 100, L"STATUS");

	wstring w_crack = to_wstring(crackvar);
	wchar_t crack[10];
	wcscpy_s(crack, 10, w_crack.c_str());

	wstring w_crackB = to_wstring(crackbett);
	wchar_t crackbet[10];
	wcscpy_s(crackbet, 10, w_crackB.c_str());

	if (kpress == 3 && crackvar > 0 && pressload == 1) {
		crackvar--;
		crackbett++;
	}
	else if (kpress == 4 && crackvar < 10 && pressload == 1) {
		crackvar++;
		crackbett--;
	}

	if (fpscount == 1) {

		gfx->BeginDraw();

		if (kpos == 0) {
			bckgrnd->drawwith();
			kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 550, 627, 437);
			buttonNpressoff->drawwith(100, by, 410, by + 218, 1.0f);
			buttonNpressoff->drawwith(880, by, 1190, by + 218, 1.0f);
			B_up_off->drawwith(580, 590, 505, 510, 1.0f);
			B_down_off->drawwith(785, 590, 705, 510, 1.0f);
			Bag->drawwith(1255, 130, 1150, 15, 1.0f);
			gfx->Drawtext(eu_status, D2D1::ColorF::White, 50.0f, 925, 10,545,0);
		}
		else if (kpos == 1) {
			bckgrnd->drawwith();
			kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 500, 627, 437);
			buttonoff->drawwith(100, by, 410, by + 218, 1.0f);
			buttonNpressoff->drawwith(880, by, 1190, by + 218, 1.0f);
			B_up_off->drawwith(580, 590, 505, 510, 1.0f);
			B_down_off->drawwith(785, 590, 705, 510, 1.0f);
			Bag->drawwith(1255, 130, 1150, 15, 1.0f);
			gfx->Drawtext(eu_status, D2D1::ColorF::White, 50.0f, 925, 10, 545, 0);
		}
		else if (kpos == 2) {
			bckgrnd->drawwith();
			kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 500, 627, 437);
			buttonNpressoff->drawwith(100, by, 410, by + 218, 1.0f);
			buttonoff->drawwith(880, by, 1190, by + 218, 1.0f);
			B_up_off->drawwith(580, 590, 505, 510, 1.0f);
			B_down_off->drawwith(785, 590, 705, 510, 1.0f);
			Bag->drawwith(1255, 130, 1150, 15, 1.0f);
			gfx->Drawtext(eu_status, D2D1::ColorF::White, 50.0f, 925, 10, 545, 0);
		}

		else if (kpos == 3) {
			bckgrnd->drawwith();
			kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 500, 627, 437);
			buttonNpressoff->drawwith(100, by, 410, by + 218, 1.0f);
			buttonNpressoff->drawwith(880, by, 1190, by + 218, 1.0f);
			B_up->drawwith(580, 590, 505, 510, 1.0f);
			B_down_off->drawwith(785, 590, 705, 510, 1.0f);
			Bag->drawwith(1255, 130, 1150, 15, 1.0f);
			gfx->Drawtext(eu_status, D2D1::ColorF::White, 50.0f, 925, 10, 545, 0);
		}
		else if (kpos == 4) {
			bckgrnd->drawwith();
			kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 500, 627, 437);
			buttonNpressoff->drawwith(100, by, 410, by + 218, 1.0f);
			buttonNpressoff->drawwith(880, by, 1190, by + 218, 1.0f);
			B_up_off->drawwith(580, 590, 505, 510, 1.0f);
			B_down->drawwith(785, 590, 705, 510, 1.0f);
			Bag->drawwith(1255, 130, 1150, 15, 1.0f);
			gfx->Drawtext(eu_status, D2D1::ColorF::White, 50.0f, 925, 10, 545, 0);
		}
		else if (kpos == 5) {
			bckgrnd->drawwith();
			kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 550, 627, 437);
			buttonNpressoff->drawwith(100, by, 410, by + 218, 1.0f);
			buttonNpressoff->drawwith(880, by, 1190, by + 218, 1.0f);
			B_up_off->drawwith(580, 590, 505, 510, 1.0f);
			B_down_off->drawwith(785, 590, 705, 510, 1.0f);
			Bag_open->drawwith(1255, 135, 1150, 1, 1.0f);
			gfx->Drawtext(eu_status, D2D1::ColorF::White, 50.0f, 925, 10, 545, 0);
		}
		else if (kpos == 6) {

			bckgrnd->drawwith();
			kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 500, 627, 437);
			buttonNpressoff->drawwith(100, by, 410, by + 218, 1.0f);
			buttonNpressoff->drawwith(880, by, 1190, by + 218, 1.0f);
			B_up_off->drawwith(580, 590, 505, 510, 1.0f);
			B_down_off->drawwith(785, 590, 705, 510, 1.0f);
			Bag->drawwith(1255, 130, 1150, 15, 1.0f);
			gfx->Drawtext(eu_status, D2D1::ColorF::White, 50.0f, 925, 10, 545, 0);
			
		}
		else if (kpos == 11) {

			bckgrnd->drawwith();
			kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 550, 627, 437);
			buttonNpressoff->drawwith(100, by, 410, by + 218, 1.0f);
			buttonNpressoff->drawwith(880, by, 1190, by + 218, 1.0f);
			B_up_off->drawwith(580, 590, 505, 510, 1.0f);
			B_down_off->drawwith(785, 590, 705, 510, 1.0f);
			Bag->drawwith(1255, 130, 1150, 15, 1.0f);
			gfx->Drawtext(eu_status, D2D1::ColorF::White, 52.0f, 925, 10, 540, 0);

		}

		 if (kpress == 1 && crackbett > 0) {
			 Class_B_alg.my_diff *= win_loss_alg;
			 if (exeflag == 0) {
				 battle();
			 }
			yeaano = 1;
			bckgrnd->drawwith();
			kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 500, 627, 437);
			buttonon->drawwith(100, by+12, 410, by + 230, 1.0f);
			buttonNpressoff->drawwith(880, by, 1190, by + 218, 1.0f);
			B_up_off->drawwith(580, 590, 505, 510, 1.0f);
			B_down_off->drawwith(785, 590, 705, 510, 1.0f);
			Bag->drawwith(1255, 130, 1150, 15, 1.0f);
			gfx->Drawtext(eu_status, D2D1::ColorF::White, 50.0f, 925, 10, 545, 0);

			/*if (Class_B_alg.my_diff>Class_B_alg.boss_diff) {
				gfx->FillRectangle(1200, 700, 1.0f, D2D1::ColorF::Green);
			}
			else {
				gfx->FillRectangle(1200, 700, 1.0f, D2D1::ColorF::Red);
			}*/
		}
		else if (kpress == 2 && crackbett > 0){
			 Class_B_alg.boss_diff *= win_loss_alg;
			 if (exeflag == 0) {
				 battle();
			 }
			yeaano = 0;
			bckgrnd->drawwith();
			kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 500, 627, 437);
			buttonNpressoff->drawwith(100, by, 410, by + 218, 1.0f);
			buttonon->drawwith(880, by + 12, 1190, by + 230, 1.0f);
			B_up_off->drawwith(580, 590, 505, 510, 1.0f);
			B_down_off->drawwith(785, 590, 705, 510, 1.0f);
			Bag->drawwith(1255, 130, 1150, 15, 1.0f);
			gfx->Drawtext(eu_status, D2D1::ColorF::White, 50.0f, 925, 10, 545, 0);

			/*if (Class_B_alg.my_diff > Class_B_alg.boss_diff) {
				gfx->FillRectangle(1200, 700, 1.0f, D2D1::ColorF::Green);
			}
			else {
				gfx->FillRectangle(1200, 700, 1.0f, D2D1::ColorF::Red);
			}*/
		}
		else if (kpress == 3) {
			blinkcount2 = 0;
			blinkcount = 10;
			bckgrnd->drawwith();
			kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 500, 627, 437);
			buttonNpressoff->drawwith(100, by, 410, by + 218, 1.0f);
			buttonNpressoff->drawwith(880, by, 1190, by + 218, 1.0f);
			B_up->drawwith(577, 587, 508, 513, 1.0f);
			B_down_off->drawwith(785, 590, 705, 510, 1.0f);
			Bag->drawwith(1255, 130, 1150, 15, 1.0f);
			gfx->Drawtext(eu_status, D2D1::ColorF::White, 50.0f, 925, 10, 545, 0);;
		}
		else if (kpress == 4) {
			blinkcount2 = 0;
			blinkcount = 10;
			bckgrnd->drawwith();
			kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 500, 627, 437);
			buttonNpressoff->drawwith(100, by, 410, by + 218, 1.0f);
			buttonNpressoff->drawwith(880, by, 1190, by + 218, 1.0f);
			B_up_off->drawwith(580, 590, 505, 510, 1.0f);
			B_down->drawwith(782, 587, 708, 513, 1.0f);
			Bag->drawwith(1255, 130, 1150, 15, 1.0f);
			gfx->Drawtext(eu_status, D2D1::ColorF::White, 50.0f, 925, 10, 545, 0);
		}
		else if (pressflag == 1) {
			wchar_t text[1000];
			wcscpy_s(text,1000, L"ITEMS");

			bckgrnd->drawwith();
			kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 500, 627, 437);
			buttonNpressoff->drawwith(100, by, 410, by + 218, 1.0f);
			buttonNpressoff->drawwith(880, by, 1190, by + 218, 1.0f);
			B_up_off->drawwith(580, 590, 505, 510, 1.0f);
			B_down_off->drawwith(785, 590, 705, 510, 1.0f);
			Bag_open->drawwith(1255, 135, 1150, 1, 1.0f);
			gfx->FillRectangle(965, 545, 1.0f, D2D1::ColorF::Yellow);
			gfx->FillRectangle(960, 540, 1.0f, D2D1::ColorF::Black);
			gfx->Drawtext(text, D2D1::ColorF::White, 60.0f, 1280, 250, 548, 175);
			close_button->drawwith(950, 220, 915, 185, 1.0f);
			gfx->Drawtext(eu_status, D2D1::ColorF::White, 50.0f, 925, 10, 545, 0);

			bagstuff();

			if (kpress == 7 ) {
				if (Class_items.buscar_algo_na_bolsa > 0) {
					Class_items.buscar_algo_na_bolsa--;
					Class_items.USED_buscar_algo_na_bolsa++;
				}		
			}
			else if (kpress == 8 ){
				if (Class_items.lembrar_do_nada > 0) {
					Class_items.lembrar_do_nada--;
					Class_items.USED_lembrar_do_nada++;
				}
			}
			else if (kpress == 9) {
				if (Class_items.pegar_o_celular > 0) {
					Class_items.pegar_o_celular--;
					Class_items.USED_pegar_o_celular++;
				}
			}
			else if (kpress == 10 ) {
				if (Class_items.pedir_ao_coleguinha > 0) {
					Class_items.pedir_ao_coleguinha--;
					Class_items.USED_pedir_ao_coleguinha++;
				}
			}
		}
		else if (kpress == 6) {

			 wchar_t text[1000];
			 wcscpy_s(text, 1000, L"ITEMS");

			 bckgrnd->drawwith();
			 kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			 if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			 gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 500, 627, 437);
			 buttonNpressoff->drawwith(100, by, 410, by + 218, 1.0f);
			 buttonNpressoff->drawwith(880, by, 1190, by + 218, 1.0f);
			 B_up_off->drawwith(580, 590, 505, 510, 1.0f);
			 B_down_off->drawwith(785, 590, 705, 510, 1.0f);
			 Bag_open->drawwith(1255, 135, 1150, 1, 1.0f);
			 gfx->FillRectangle(965, 545, 1.0f, D2D1::ColorF::Yellow);
			 gfx->FillRectangle(960, 540, 1.0f, D2D1::ColorF::Black);
			 gfx->Drawtext(text, D2D1::ColorF::White, 60.0f, 1280, 250, 548, 175);
			 close_button->drawwith(945, 213, 920, 188, 1.0f);
			 gfx->Drawtext(eu_status, D2D1::ColorF::White, 50.0f, 925, 10, 545, 0);

			 bagstuff();
		 }

		else if (kpress == 11) {
			 wchar_t confidence[100];
			 wchar_t past_notes[100];
			 wchar_t prova[100];

			 wchar_t bad_confidence[100];
			 wchar_t medium_confidence[100];
			 wchar_t nice_confidence[100];
			 wchar_t good_confidence[100];

			 wchar_t bad_past_notes[100];
			 wchar_t medium_past_notes[100];
			 wchar_t nice_past_notes[100];
			 wchar_t good_past_notes[100];

			 wchar_t boss_imoral[100];
			 wchar_t boss_hard[100];
			 wchar_t boss_medium[100];
			 wchar_t boss_easy[100];

			 wcscpy_s(confidence, 100, L"CONFIANÇA");
			 wcscpy_s(past_notes, 100, L"NOTAS PASSADAS");
			 wcscpy_s(prova, 100, L"PROVA");

			 wcscpy_s(bad_confidence, 100, L"JOGEI LOL A SEMANA INTEIRA");
			 wcscpy_s(medium_confidence, 100, L"NÃO ESTUDEI TANTO ASSIM");
			 wcscpy_s(nice_confidence, 100, L"TA DIFICIL, MAS EU ESTUDEI");
			 wcscpy_s(good_confidence, 100, L"COM CERTEZA VOU TIRAR 10");

			 wcscpy_s(bad_past_notes, 100, L"TRANCA O CURSO QUE JA REPROVEI");
			 wcscpy_s(medium_past_notes, 100, L"RAPAZ... VAI QUE DÁ");
			 wcscpy_s(nice_past_notes, 100, L"TA BEM, SÓ VAI");
			 wcscpy_s(good_past_notes, 100, L"TA PASSADO JÁ FI");

			 wcscpy_s(boss_imoral, 100, L"OLHA O BIXO VINDO MULEKE");
			 wcscpy_s(boss_hard, 100, L" DEVERAS COMPLICADO");
			 wcscpy_s(boss_medium, 100, L"TA FAZIVEL FI SOH VAI");
			 wcscpy_s(boss_easy, 100, L"GG");

			 bckgrnd->drawwith();
			 kraklogo->drawwith(402, 74, 310, 5, 1.0f);
			 if (blink == 1)gfx->Drawtext(crack, D2D1::ColorF::White, 32.0f, 263, 18);
			 gfx->Drawtext(crackbet, D2D1::ColorF::White, 40.0f, 690, 500, 627, 437);
			 buttonNpressoff->drawwith(100, by, 410, by + 218, 1.0f);
			 buttonNpressoff->drawwith(880, by, 1190, by + 218, 1.0f);
			 B_up_off->drawwith(580, 590, 505, 510, 1.0f);
			 B_down_off->drawwith(785, 590, 705, 510, 1.0f);
			 Bag->drawwith(1255, 130, 1150, 15, 1.0f);
			 gfx->FillRectangle(1210, 710, 1.0f, D2D1::ColorF::Yellow);
			 gfx->FillRectangle(1200, 700, 1.0f, D2D1::ColorF::Black);
			 ME->drawwith(470, 650, 50, 50, 1.0f);

			 gfx->Drawtext(confidence, D2D1::ColorF::White, 50.0f, 1000, 100, 670, 30);
			 gfx->Drawtext(past_notes, D2D1::ColorF::White, 50.0f, 1200, 300, 580, 200);
			 gfx->Drawtext(prova, D2D1::ColorF::White, 50.0f, 1200, 470, 730, 370);

			 if (Class_B_alg.confidence < 40) {
				 gfx->Drawtext(bad_confidence, D2D1::ColorF::Red, 30.0f, 1000, 500, 670, 100);
			 }
			 else if (Class_B_alg.confidence >= 40 && Class_B_alg.confidence < 70) {
				 gfx->Drawtext(medium_confidence, D2D1::ColorF::Yellow, 30.0f, 1000, 500, 670, 100);
			 }
			 else if (Class_B_alg.confidence >= 70 && Class_B_alg.confidence < 90) {
				 gfx->Drawtext(nice_confidence, D2D1::ColorF::Blue, 30.0f, 1000, 500, 670, 100);
			 }
			 else if (Class_B_alg.confidence >= 90) {
				 gfx->Drawtext(good_confidence, D2D1::ColorF::Green, 30.0f, 1000, 500, 670, 100);
			 }
			 if (Class_B_alg.old_grades < 40) {
				 gfx->Drawtext(bad_past_notes, D2D1::ColorF::Red, 30.0f, 1000, 500, 670, 280);
			 }
			 else if (Class_B_alg.old_grades >= 40 && Class_B_alg.old_grades < 60) {
				 gfx->Drawtext(medium_past_notes, D2D1::ColorF::Yellow, 30.0f, 1000, 500, 670, 280);
			 }
			 else if (Class_B_alg.old_grades >= 60 && Class_B_alg.old_grades < 90) {
				 gfx->Drawtext(nice_past_notes, D2D1::ColorF::Blue, 30.0f, 1000, 500, 670, 280);
			 }
			 else if (Class_B_alg.old_grades >= 90) {
				 gfx->Drawtext(good_past_notes, D2D1::ColorF::Green, 30.0f, 1000, 500, 670, 280);
			 }
			 if (Class_B_alg.boss_diff >= 90) {
				 gfx->Drawtext(boss_imoral, D2D1::ColorF::Red, 30.0f, 1000, 580, 670, 480);
			 }
			 else if (Class_B_alg.boss_diff >= 60 && Class_B_alg.boss_diff < 90) {
				 gfx->Drawtext(boss_hard, D2D1::ColorF::Yellow, 30.0f, 1000, 500, 670, 480);
			 }
			 else if (Class_B_alg.boss_diff >= 40 && Class_B_alg.boss_diff < 60) {
				 gfx->Drawtext(boss_medium, D2D1::ColorF::Blue, 30.0f, 1000, 500, 670, 480);
			 }
			 else if (Class_B_alg.boss_diff < 40) {
				 gfx->Drawtext(boss_easy, D2D1::ColorF::Green, 30.0f, 1000, 500, 670, 480);
			 }
		 }
		 gfx->FillRectangle(NULL, NULL, alpha1, D2D1::ColorF::White);
		gfx->EndDraw();
	}
}

void Bet::data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, 
	int* win, int* loses, float* W_S_alg, int* beted, int* lost) {
	
	if (crackcount == 1) {	
		crackvar = *crackin;
		Class_items = *Items;
		Class_B_alg = *B_Alg;
		class_win = *win;
		class_loss = *loses;
		win_loss_alg = *W_S_alg;
		dey = *day;
		crackbett = 0;
		crackcount = 0;
		if (*win == 3 && *loses == 0) {
			Class_items.lembrar_do_nada++;
		}
	}
	*B_Alg = Class_B_alg;
	*Items = Class_items;
	*crackin = crackvar;
	*yeano = yeaano;
	*win = class_win;
	*loses = class_loss;
	*beted = crackbett;
	*W_S_alg = win_loss_alg;
}

void Bet::battle() {

	float confi;
	float old_G;
	float boss;
	float bossfactor;
	int item_rand;
	int x;
	
	if (kpress != 1 && kpress != 2) {

		for (x = 0, confi = rand() % 100 + 1; x < 4; x++) {
			confi = rand() % 100 + 1;
			if (confi >= 60) {
				Class_B_alg.confidence = confi;
				break;
			}
			Class_B_alg.confidence = confi;
		}

		for (x = 0, old_G = rand() % 100 + 1; x < 2; x++) {
			old_G = rand() % 100 + 1;
			if (old_G >= 60) {
				Class_B_alg.old_grades = old_G;
				break;
			}
			Class_B_alg.old_grades = old_G;
		}

		Class_B_alg.my_diff = (confi + old_G) / 2;

		if (dey == 1) {
			boss = rand() % 61 + 40;

			bossfactor = rand() % 61 + 40;
			bossfactor /= 70;
			boss *= bossfactor;
			Class_B_alg.boss_diff = boss;
		}
		if (dey == 2) {
			boss = rand() % 51 + 50;

			bossfactor = rand() % 51 + 50;
			bossfactor /= 70;
			boss *= bossfactor;
			Class_B_alg.boss_diff = boss;
		}
		if (dey == 3) {
			boss = 0;
			Class_B_alg.boss_diff = boss;
		}
		if (dey == 4) {
			boss = rand() % 41 + 60;

			bossfactor = rand() % 41 + 60;
			bossfactor /= 70;
			boss *= bossfactor;
			Class_B_alg.boss_diff = boss;
		}
		if (dey == 5) {
			boss = rand() % 31 + 70;

			bossfactor = rand() % 31 + 70;
			bossfactor /= 70;
			boss *= bossfactor;
			Class_B_alg.boss_diff = boss;
		}
	}

	if (kpress == 1 || kpress == 2) {

		if (Class_items.USED_lembrar_do_nada > 0) {

			item_rand = rand() % 41 + 60;
			Class_B_alg.my_diff += (Class_items.USED_lembrar_do_nada * item_rand);
			
		}
		if (Class_items.USED_pegar_o_celular > 0) {

			item_rand = rand() % 41 + 20;
			Class_B_alg.my_diff += (Class_items.USED_pegar_o_celular * item_rand);
		
		}
		if (Class_items.USED_buscar_algo_na_bolsa > 0) {

			item_rand = rand() % 9 + 1;
			Class_B_alg.my_diff += (Class_items.USED_buscar_algo_na_bolsa * item_rand);
			
		}
		if (Class_items.USED_pedir_ao_coleguinha > 0) {
			item_rand = rand() % 11 + 10;
			Class_B_alg.my_diff += (Class_items.USED_pedir_ao_coleguinha * item_rand);
			
		}
	}
}

void Bet::bagstuff() {
	wchar_t amount[10];
	int Item1_x, Item1_y, Item1_x2, Item1_y2;
	int Item2_x, Item2_y, Item2_x2, Item2_y2;
	int Item3_x, Item3_y, Item3_x2, Item3_y2;
	int Item4_x, Item4_y, Item4_x2, Item4_y2;

	Item1_x = 450;
	Item1_y = 650;
	Item1_x2 = 400;
	Item1_y2 = 460;

	Item2_x = 555;
	Item2_y = 650;
	Item2_x2 = 550;
	Item2_y2 = 460;

	Item3_x = 855;
	Item3_y = 650;
	Item3_x2 = 850;
	Item3_y2 = 460;

	Item4_x = 705;
	Item4_y = 650;
	Item4_x2 = 700;
	Item4_y2 = 460;

	wchar_t Buscar_mochila[100];
	wchar_t lembra[100];
	wchar_t celular[100];
	wchar_t ask[100];
	wcscpy_s(Buscar_mochila, 100, L"Buscar algo na mochila");
	wcscpy_s(lembra, 100, L"Lembrar do nada");
	wcscpy_s(celular, 100, L"Pegar o celular");
	wcscpy_s(ask, 100, L"Perguntar ao coleguinha");

	gfx->Drawtext(Buscar_mochila, D2D1::ColorF::White, 20.0f, 400, 560, 800, 555);
	gfx->Drawtext(lembra, D2D1::ColorF::White, 20.0f, 400, 600, 800, 595);
	gfx->Drawtext(celular, D2D1::ColorF::White, 20.0f, 400, 640, 800, 635);
	gfx->Drawtext(ask, D2D1::ColorF::White, 20.0f, 400, 680, 800, 675);

	Busca_bolsa->drawwith(390, 590, 350, 550, 1.0f);
	Lembra->drawwith(390, 635, 350, 595, 1.0f);
	P_celular->drawwith(388, 670, 352, 630, 1.0f);
	ask_friend->drawwith(390, 710, 350, 670, 1.0f);

	if (kpos < 7) {
		Busca_bolsa->drawwith(460, 340, 350, 450, 1.0f);
		Lembra->drawwith(643, 480, 473, 320, 1.0f);
		P_celular->drawwith(765, 450, 677, 350, 1.0f);
		ask_friend->drawwith(915, 450, 795, 350, 1.0f);
	}
	if (kpress < 7) {
		if (kpos == 7) {
			Busca_bolsa->drawwith(470, 460, 340, 330, 1.0f);
			Lembra->drawwith(643, 480, 473, 320, 1.0f);
			P_celular->drawwith(765, 450, 677, 350, 1.0f);
			ask_friend->drawwith(915, 450, 795, 350, 1.0f);
		}
		else if (kpos == 8) {
			Busca_bolsa->drawwith(460, 340, 350, 450, 1.0f);
			Lembra->drawwith(653, 490, 463, 310, 1.0f);
			P_celular->drawwith(765, 450, 677, 350, 1.0f);
			ask_friend->drawwith(915, 450, 795, 350, 1.0f);
		}
		else if (kpos == 9) {
			Busca_bolsa->drawwith(460, 340, 350, 450, 1.0f);
			Lembra->drawwith(643, 480, 473, 320, 1.0f);
			P_celular->drawwith(775, 460, 667, 340, 1.0f);
			ask_friend->drawwith(915, 450, 795, 350, 1.0f);
		}
		else if (kpos == 10) {
			Busca_bolsa->drawwith(460, 340, 350, 450, 1.0f);
			Lembra->drawwith(643, 480, 473, 320, 1.0f);
			P_celular->drawwith(765, 450, 677, 350, 1.0f);
			ask_friend->drawwith(925, 460, 785, 340, 1.0f);
		}
	}
	else {
		if (kpress == 7) {
			Busca_bolsa->drawwith(450, 450, 360, 360, 1.0f);
			Lembra->drawwith(643, 480, 473, 320, 1.0f);
			P_celular->drawwith(765, 450, 677, 350, 1.0f);
			ask_friend->drawwith(915, 450, 795, 350, 1.0f);
		}
		else if (kpress == 8) {
			Busca_bolsa->drawwith(460, 340, 350, 450, 1.0f);
			Lembra->drawwith(633, 470, 483, 330, 1.0f);
			P_celular->drawwith(765, 450, 677, 350, 1.0f);
			ask_friend->drawwith(915, 450, 795, 350, 1.0f);
		}
		else if (kpress == 9) {
			Busca_bolsa->drawwith(460, 340, 350, 450, 1.0f);
			Lembra->drawwith(643, 480, 473, 320, 1.0f);
			P_celular->drawwith(755, 440, 687, 360, 1.0f);
			ask_friend->drawwith(915, 450, 795, 350, 1.0f);
		}
		else if (kpress == 10) {
			Busca_bolsa->drawwith(460, 340, 350, 450, 1.0f);
			Lembra->drawwith(643, 480, 473, 320, 1.0f);
			P_celular->drawwith(765, 450, 677, 350, 1.0f);
			ask_friend->drawwith(900, 440, 805, 360, 1.0f);
		}
	}

	/////////ITEM 1///////////
	if (Class_items.buscar_algo_na_bolsa == 0) {
		
		wcscpy_s(amount, 10, L"0");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item1_x, Item1_y, Item1_x2, Item1_y2);
	}
	else if (Class_items.buscar_algo_na_bolsa == 1) {
		
		wcscpy_s(amount, 10, L"1");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item1_x, Item1_y, Item1_x2, Item1_y2);
	}
	else if (Class_items.buscar_algo_na_bolsa == 2) {
		
		wcscpy_s(amount, 10, L"2");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item1_x, Item1_y, Item1_x2, Item1_y2);
	}
	else if (Class_items.buscar_algo_na_bolsa == 3) {
		
		wcscpy_s(amount, 10, L"3");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item1_x, Item1_y, Item1_x2, Item1_y2);
	}
	else if (Class_items.buscar_algo_na_bolsa == 4) {
		
		wcscpy_s(amount, 10, L"4");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item1_x, Item1_y, Item1_x2, Item1_y2);
	}
	else if (Class_items.buscar_algo_na_bolsa == 5) {
		
		wcscpy_s(amount, 10, L"5");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item1_x, Item1_y, Item1_x2, Item1_y2);
	}

	/////////ITEM 2///////////

	if (Class_items.lembrar_do_nada == 0) {
		
		wcscpy_s(amount, 10, L"0");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item2_x, Item2_y, Item2_x2, Item2_y2);
	}
	else if (Class_items.lembrar_do_nada == 1) {
		
		wcscpy_s(amount, 10, L"1");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item2_x, Item2_y, Item2_x2, Item2_y2);
	}
	else if (Class_items.lembrar_do_nada == 2) {
		
		wcscpy_s(amount, 10, L"2");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item2_x, Item2_y, Item2_x2, Item2_y2);
	}
	else if (Class_items.lembrar_do_nada == 3) {
	
		wcscpy_s(amount, 10, L"3");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item2_x, Item2_y, Item2_x2, Item2_y2);
	}
	else if (Class_items.lembrar_do_nada == 4) {
		
		wcscpy_s(amount, 10, L"4");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item2_x, Item2_y, Item2_x2, Item2_y2);
	}
	else if (Class_items.lembrar_do_nada == 5) {
		
		wcscpy_s(amount, 10, L"5");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item2_x, Item2_y, Item2_x2, Item2_y2);
	}
	/////////ITEM 3///////////

	if (Class_items.pedir_ao_coleguinha == 0) {
		
		wcscpy_s(amount, 10, L"0");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item3_x, Item3_y, Item3_x2, Item3_y2);
	}
	else if (Class_items.pedir_ao_coleguinha == 1) {
	
		wcscpy_s(amount, 10, L"1");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item3_x, Item3_y, Item3_x2, Item3_y2);
	}
	else if (Class_items.pedir_ao_coleguinha == 2) {
		
		wcscpy_s(amount, 10, L"2");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item3_x, Item3_y, Item3_x2, Item3_y2);
	}
	else if (Class_items.pedir_ao_coleguinha == 3) {
		
		wcscpy_s(amount, 10, L"3");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item3_x, Item3_y, Item3_x2, Item3_y2);
	}
	else if (Class_items.pedir_ao_coleguinha == 4) {
		
		wcscpy_s(amount, 10, L"4");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item3_x, Item3_y, Item3_x2, Item3_y2);
	}
	else if (Class_items.pedir_ao_coleguinha == 5) {
		
		wcscpy_s(amount, 10, L"5");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item3_x, Item3_y, Item3_x2, Item3_y2);
	}
	/////////ITEM 4///////////

	if (Class_items.pegar_o_celular == 0) {
	
		wcscpy_s(amount, 10, L"0");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item4_x, Item4_y, Item4_x2, Item4_y2);
	}
	else if (Class_items.pegar_o_celular == 1) {
		
		wcscpy_s(amount, 10, L"1");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item4_x, Item4_y, Item4_x2, Item4_y2);
	}
	else if (Class_items.pegar_o_celular == 2) {
		
		wcscpy_s(amount, 10, L"2");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item4_x, Item4_y, Item4_x2, Item4_y2);
	}
	else if (Class_items.pegar_o_celular == 3) {
		
		wcscpy_s(amount, 10, L"3");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item4_x, Item4_y, Item4_x2, Item4_y2);
	}
	else if (Class_items.pegar_o_celular == 4) {
		
		wcscpy_s(amount, 10, L"4");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item4_x, Item4_y, Item4_x2, Item4_y2);
	}
	else if (Class_items.pegar_o_celular == 5) {
		
		wcscpy_s(amount, 10, L"5");
		gfx->Drawtext(amount, D2D1::ColorF::White, 20.0f, Item4_x, Item4_y, Item4_x2, Item4_y2);
	}
}

#include "history.h"
#include "historylvl2.h"
#include "Gamecontroller.h"
#include "Gamemenu.h"
#include "Bet.h"
#include <wchar.h>

void history::load() {
////////vo explica mais n vey aff//////// 
	sprite = new Spritesheet(L"history//background classroom2.png", gfx);
	sprite2 = new Spritesheet(L"history//eu.png", gfx);
	sprite3 = new Spritesheet(L"history//giu.png", gfx);
	sprite4 = new Spritesheet(L"history//leu.png", gfx);
	sprite5 = new Spritesheet(L"history//ozi.png", gfx);
	MEy = 720.0F;
	GIx = 1280.0f;
	LEx = 1280.0f;
	OZx = 1280.0f;
	fps2 = 0;
	fps3 = 0;
	start = 0;
	backalpha = 0.0f;
	PPalpha = 1.0f;
	textboxalpha = 0.0f;
	textonoff = false;
	h = 0;
	textv = 0;
	texts = 0;
	nexttext = 0;
	LEmov = 0;
	OZmov = 0;
	GImov = 0;
	recalpha = 1.0f;
}

void history::unload() {


	
}
int history::update(int kpos, int kpress) {

	if (fpscount == 1) {
		fps = 5 + clock();
		fpscount = 0;
		fps2 += 2;
		fps3 += 2;

		if (start >= 1 && backalpha >= 1.5f && nexttext != 4) {

			if (MEy >= 140.0f) {
				MEy -= 20.0f;
			}
			if (MEy <= 140.0f && GIx >= 840.0f && GImov < 1) {
				GIx -= 20.0f;
			}
			if (MEy <= 140.0f && LEx >= 700.0f && LEmov < 1) {
				LEx -= 20.0f;
			}
			if (MEy <= 140.0f && OZx >= 520.0f && OZmov < 1) {
				OZx -= 20.0f;
			}
		}
		if (start != 5) {
			if (LEmov == 1) {
				if (LEx <= 780.0f && start == 1) {
					LEx += 10.0f;
				}
				else if (LEx >= 700.0f && start == 2) {
					LEx -= 10.0f;
				}
				else {
					start = 2;
				}
			}
			else if (OZmov == 1) {
				if (OZx >= 420.0f && start == 2) {
					OZx -= 10.0f;
				}
				else if (OZx <= 520.0f && start == 3) {
					OZx += 10.0f;
				}
				else {
					start = 3;
				}
			}
			else if (GImov == 1) {
				if (GIx <= 940.0f && start == 3) {
					GIx += 10.0f;
				}
				else if (GIx >= 320.0f && start == 4) {
					GIx -= 30.0f;
				}
				else {
					start = 4;
				}
			}
		}
	}

	if (fps2 == 120) {
		fps2 = 0;
		if (start == 0) {
			start = 1;
		}
	}

	if (fps3 == 8) {
		if (start == 1) {
			if (backalpha <= 1.5f) {
				backalpha += 0.05f;
			}
			else {
				if (textboxalpha < 1.0f) {
					textboxalpha += 0.2f;
				}
				else if(MEy<=140.0f) {
					textonoff = true;
				}
			}
		}
		if (textonoff == true) {
			if (textv >= (texts*1.5)) {
				nexttext++;
				textv = 0;

				if (nexttext == 1) {
					LEmov = 1;
				}
				else if (nexttext == 2) {
					LEmov = 0;
					OZmov = 1;
				}
				else if (nexttext == 3) {
					OZmov = 0;
					GImov = 1;
				}
			}
			else {
				textv++;
			}	
		}
		if (nexttext == 4) {
			start = 5;
			backalpha -= 0.2f;
			PPalpha -= 0.2f;
			recalpha -= 0.2f;
			if (backalpha <= -0.4f) {
				Gamecontroller::SwitchLevel(new Bet());
			}
		}
		fps3 = 0;
	}

	if (fps <= clock()) {
		fpscount = 1;
	}

	return 2;
}
void history::render() {

	wchar_t MEspeech1[1000];
	wchar_t MEspeech1s[1000];
	wchar_t NAME[1000];

	if (nexttext == 0) {
		wcscpy_s(NAME, 1000, L"ATHOS");
		wcscpy_s(MEspeech1s, 1000, L"EAE GALERE,  CEIS ESTUDARU PRESSA PROVA DE RAUL?");
		wcscpy_s(MEspeech1, 1000, L"");
	}
	else if (nexttext == 1) {
		wcscpy_s(NAME, 1000, L"LEU");
		wcscpy_s(MEspeech1s, 1000, L"OXE CORNO CLARO NE, MAS MESMO ASSIM AINDA ACHO Q VOU ME FERRA");
		wcscpy_s(MEspeech1, 1000, L"");
	}
	else if (nexttext == 2) {
		wcscpy_s(NAME, 1000, L"OZIRIS");
		wcscpy_s(MEspeech1s, 1000, L"AH VEY EU NEM ESTUDEI, TAVA COM FAMILIA EM CASA...");
		wcscpy_s(MEspeech1, 1000, L"");
	}
	else if (nexttext == 3) {
		wcscpy_s(NAME, 1000, L"GIULIA");
		wcscpy_s(MEspeech1s, 1000, L" BOOOOOOOOOOHHHHHHHHHHHHHHHH O PROFESSOR TA NA SALA JA");
		wcscpy_s(MEspeech1, 1000, L"");
	}
	else if (nexttext == 4) {
		textonoff == false;

	}
	if (nexttext != 4) {
		texts = wcsnlen_s(MEspeech1s, 1000);
		wcsncat_s(MEspeech1, MEspeech1s, textv);
	}

	if (fpscount == 1) {

		gfx->BeginDraw();
		gfx->ClearScreen(D2D1::ColorF::Black);
		if (start == 1) {
			sprite->drawwith(NULL,NULL,backalpha);
			sprite2->drawwith(-100.0f, MEy, 562.0f, 1052.0f + MEy, PPalpha);
			sprite3->drawwith(GIx, 100.0f, GIx + 662.0f, 1102.0f, PPalpha);
			sprite4->drawwith(LEx, 100.0f, LEx + 662.0f, 1102.0f, PPalpha);
			sprite5->drawwith(OZx, 120.0f, OZx + 652.0f, 1102.0f, PPalpha);
		//	gfx->FillRectangle(1200.0f, 700.0f, 80.0f, 500.0f, textboxalpha, D2D1::ColorF::Black);
			gfx->FillRectangle(1280.0f, 120.0f,0.0f,0.0f, 1.0f, D2D1::ColorF::Black);
			gfx->FillRectangle(1280.0f, 720.0f, 0.0f, 600.0f, 1.0f, D2D1::ColorF::Black);
			if (textonoff == true) {
				gfx->Drawtext(NAME, D2D1::ColorF::Yellow, 20.0f, 1200.0f, 720.0f, 90.0f, 610.0f);
				gfx->Drawtext(MEspeech1, D2D1::ColorF::White, 20.0f, 1150.0f, 720.0f, 180.0f, 610.0f);
			}
		}
		else if (start == 2) {
			sprite->drawwith(NULL, NULL, backalpha);
			sprite2->drawwith(-100.0f, MEy, 562.0f, 1052.0f + MEy, PPalpha);
			sprite3->drawwith(GIx, 100.0f, GIx + 662.0f, 1102.0f, PPalpha);
			sprite5->drawwith(OZx, 120.0f, OZx + 652.0f, 1102.0f, PPalpha);
			sprite4->drawwith(LEx, 100.0f, LEx + 662.0f, 1102.0f, PPalpha);
			//	gfx->FillRectangle(1200.0f, 700.0f, 80.0f, 500.0f, textboxalpha, D2D1::ColorF::Black);
			gfx->FillRectangle(1280.0f, 120.0f, 0.0f, 0.0f, 1.0f, D2D1::ColorF::Black);
			gfx->FillRectangle(1280.0f, 720.0f, 0.0f, 600.0f, 1.0f, D2D1::ColorF::Black);
			if (textonoff == true) {
				gfx->Drawtext(NAME, D2D1::ColorF::Yellow, 20.0f, 1200.0f, 720.0f, 90.0f, 610.0f);
				gfx->Drawtext(MEspeech1, D2D1::ColorF::White, 20.0f, 1150.0f, 720.0f, 180.0f, 610.0f);
			}
		}
		else if (start == 3) {
			sprite->drawwith(NULL, NULL, backalpha);
			sprite2->drawwith(-100.0f, MEy, 562.0f, 1052.0f + MEy, PPalpha);
			sprite3->drawwith(GIx, 100.0f, GIx + 662.0f, 1102.0f, PPalpha);
			sprite4->drawwith(LEx, 100.0f, LEx + 662.0f, 1102.0f, PPalpha);
			sprite5->drawwith(OZx, 120.0f, OZx + 652.0f, 1102.0f, PPalpha);
			//	gfx->FillRectangle(1200.0f, 700.0f, 80.0f, 500.0f, textboxalpha, D2D1::ColorF::Black);
			gfx->FillRectangle(1280.0f, 120.0f, 0.0f, 0.0f, 1.0f, D2D1::ColorF::Black);
			gfx->FillRectangle(1280.0f, 720.0f, 0.0f, 600.0f, 1.0f, D2D1::ColorF::Black);
			if (textonoff == true) {
				gfx->Drawtext(NAME, D2D1::ColorF::Yellow, 20.0f, 1200.0f, 720.0f, 90.0f, 610.0f);
				gfx->Drawtext(MEspeech1, D2D1::ColorF::White, 20.0f, 1150.0f, 720.0f, 180.0f, 610.0f);
			}
		}
		else if (start == 4) {
			sprite->drawwith(NULL, NULL, backalpha);
			sprite2->drawwith(-100.0f, MEy, 562.0f, 1052.0f + MEy, PPalpha);
			sprite4->drawwith(LEx, 100.0f, LEx + 662.0f, 1102.0f, PPalpha);
			sprite5->drawwith(OZx, 120.0f, OZx + 652.0f, 1102.0f, PPalpha);
			sprite3->drawwith(GIx, 100.0f, GIx + 662.0f, 1102.0f, PPalpha);
			//	gfx->FillRectangle(1200.0f, 700.0f, 80.0f, 500.0f, textboxalpha, D2D1::ColorF::Black);
			gfx->FillRectangle(1280.0f, 120.0f, 0.0f, 0.0f, 1.0f, D2D1::ColorF::Black);
			gfx->FillRectangle(1280.0f, 720.0f, 0.0f, 600.0f, 1.0f, D2D1::ColorF::Black);
			if (textonoff == true) {
				gfx->Drawtext(NAME, D2D1::ColorF::Yellow, 20.0f, 1200.0f, 720.0f, 90.0f, 610.0f);
				gfx->Drawtext(MEspeech1, D2D1::ColorF::White, 20.0f, 1150.0f, 720.0f, 180.0f, 610.0f);
			}
		}
		else if (start == 5) {
			sprite->drawwith(NULL, NULL, backalpha);
			sprite2->drawwith(-100.0f, MEy, 562.0f, 1052.0f + MEy, PPalpha);
			sprite4->drawwith(LEx, 100.0f, LEx + 662.0f, 1102.0f, PPalpha);
			sprite5->drawwith(OZx, 120.0f, OZx + 652.0f, 1102.0f, PPalpha);
			sprite3->drawwith(GIx, 100.0f, GIx + 662.0f, 1102.0f, PPalpha);
			//	gfx->FillRectangle(1200.0f, 700.0f, 80.0f, 500.0f, textboxalpha, D2D1::ColorF::Black);
			gfx->FillRectangle(1280.0f, 120.0f, 0.0f, 0.0f, recalpha, D2D1::ColorF::Black);
			gfx->FillRectangle(1280.0f, 720.0f, 0.0f, 600.0f, recalpha, D2D1::ColorF::Black);
			
		}
		gfx->EndDraw();

	}
}

void history::data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win, 
	int* loses, float* W_S_alg, int* beted, int* lost) {
	
}

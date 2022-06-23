#include "Gamemenu.h"
#include "Gamecontroller.h"
#include "day.h"
#include "history.h"
#include "Arcade.h"

void Gamemenu::load() {
////////LOADANDO AS IMAGEM////////
	sprite = new Spritesheet(L"menu//cenario//skybckgrd.png", gfx);
	sprite2 = new Spritesheet(L"menu//cenario//cloudsbckgrd.png", gfx);
	sprite3 = new Spritesheet(L"menu//cenario//schoollayer.png", gfx);
	sprite4 = new Spritesheet(L"menu//cenario//treemove.png", gfx);
	sprite5 = new Spritesheet(L"menu//press a button2.png", gfx);
	sprite6 = new Spritesheet(L"menu//nmenu.png", gfx);
	sprite7 = new Spritesheet(L"menu//nmenu history.png", gfx);
	sprite8 = new Spritesheet(L"menu//nmenu history arcade.png", gfx);
	sprite9 = new Spritesheet(L"menu//nmenu history arcade quit.png", gfx);
	sprite10 = new Spritesheet(L"menu//ATHO’S EDITION.png", gfx);
	sprite11 = new Spritesheet(L"menu//nmenub1.png", gfx);
	sprite12 = new Spritesheet(L"menu//nmenub2.png", gfx);
	sprite13 = new Spritesheet(L"menu//nmenua1.png", gfx);
	sprite14 = new Spritesheet(L"menu//nmenua2.png", gfx);
	sprite15 = new Spritesheet(L"menu//nmenuq1.png", gfx);
	sprite16 = new Spritesheet(L"menu//nmenuq2.png", gfx);
	



	explosion = new Spritesheet(L"menu//explosion//sprite_00.png", gfx);
	explosion2 = new Spritesheet(L"menu//explosion//sprite_01.png", gfx);
	explosion3 = new Spritesheet(L"menu//explosion//sprite_02.png", gfx);
	explosion4 = new Spritesheet(L"menu//explosion//sprite_03.png", gfx);
	explosion5 = new Spritesheet(L"menu//explosion//sprite_04.png", gfx);
	explosion6 = new Spritesheet(L"menu//explosion//sprite_05.png", gfx);
	explosion7 = new Spritesheet(L"menu//explosion//sprite_06.png", gfx);
	explosion8 = new Spritesheet(L"menu//explosion//sprite_07.png", gfx);
	explosion9 = new Spritesheet(L"menu//explosion//sprite_08.png", gfx);
	explosion10 = new Spritesheet(L"menu//explosion//sprite_09.png", gfx);
	explosion11 = new Spritesheet(L"menu//explosion//sprite_10.png", gfx);
	explosion12 = new Spritesheet(L"menu//explosion//sprite_11.png", gfx);
	explosion13 = new Spritesheet(L"menu//explosion//sprite_12.png", gfx);
	explosion14 = new Spritesheet(L"menu//explosion//sprite_13.png", gfx);
	explosion15 = new Spritesheet(L"menu//explosion//sprite_14.png", gfx);
	explosion16 = new Spritesheet(L"menu//explosion//sprite_15.png", gfx);
	explosion17 = new Spritesheet(L"menu//explosion//sprite_16.png", gfx);

////////BOTANDO AKELE VALOR PADRAOZIN PRA NE PQ N?////////
	x = 0;
	x2 = 3840;
	x3 = 0;
	y = 0;
	flag = 0;
	flag2 = 0;
	flag3 = 1;
	kpos = 0;
	kpress = 0;
	alpha = 0.0f;
	alpha2 = 0.0f;
	alpha3 = 1.0f;
	soundflag = 1;
	flash = 0;
	u = 0;
	fps3 = 0;
	sx = 500.0f;
	menu2 = 0;
	
}

void Gamemenu::unload() {


}

int Gamemenu::update(int kpos, int kpress) {
	this->kpress = kpress;
	this->kpos = kpos;
////////LIMITADOR DE FPS DAS CAVERNAS MAIS 1 ZILHAO DE COISA Q EU BOTEI DENTRO PRA FACILITAR A MINHA VIDA E APARENTEMENTE SO PIOROU MAS TA AI JA NE FAZER OQ//////// 
	if (fpscount == 1) {
		fps = 5 + clock();
		fpscount = 0;
		x -= 2;
		x2 -= 2;
		flag += 2;	
		fps3 += 2;
	}

		if (flag==50) {

			frag = flag;
			if (flag2 == 3) {
				x3 = -2;
				
				flag2 = 0;
				y = -2;
			}
			else if (flag2 == 2) {
				x3 = 0;
				
				flag2++;
				y = 2;
			}
			else if (flag2 == 1) {
				x3 = 2;
				
				flag2++;
				y = -2;
			}
			else if (flag2 == 0) {
				x3 = 0;
				
				flag2++;
				y = 2;
			}
			if (alpha  > 1.0f) {
				alpha += 0.1f;
			}
			flag = 0;
		}
	
		if (fps3 == 8) {

			if (alpha3 <= 0.0f) {
				u++;
			}
			fps3 = 0;
		}

	if (fps <= clock()) {
		fpscount = 1;
		if (alpha <= 1.6f) {
			alpha += 0.01f;
		}
		if (alpha>=1.0f) {
			if (alpha2 < 1.0f && kpress!=1) {
				alpha2 += 0.05f;
			}
		}
		if (kpress == 1 && alpha3>0.0f) {
			alpha2 -= 0.1f;
			alpha3 -= 0.05f;
		}

	}

	if (x <= -1980) {
		x = -30;
		x2 = 3810;
	}
	return 1;
}
void Gamemenu::render() {
	////////AH FDS DEU PREQUICA OLHA SO ISSAKI EH O Q PRINTA NA TELA COMM VARIAS CONDICOES PRAS PORA Q EU PRECISO EH SO ISSO CHEGA//////// 
	if (fpscount==1)
	{
	gfx->BeginDraw();

	sprite->drawwith(NULL, NULL, alpha);
	sprite2->drawwith(x, -140, x2, 550, alpha - 0.6f);
	sprite3->drawwith(0, 210, NULL, 720, alpha);
	sprite4->drawwith(NULL, NULL, x3, NULL, alpha);
	sprite5->drawwith(500, 670 + y, 320 + 500, 32.5 + 670 + y, alpha2);

	 if (kpress>0 && kpress!=2) {

		if (flash == 0) {

			sprite6->drawwith();
			if (u > 27) { sprite7->drawwith(); }
			if (u > 11) { 
			sprite10->drawwith(1134.0f+sx, 470.0f, 850.0f+sx, 341.0f, 1.0f); 
				if (sx > 0.0f) {
					sx -= 50.0f;
				}
			}
			if (u == 21) { explosion->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 22) { explosion2->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 23) { explosion3->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 24) { explosion4->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 25) { explosion5->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 26) { explosion6->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 27) { explosion7->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 28) { explosion8->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 29) { explosion9->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 30) { explosion10->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 31) { explosion11->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 32) { explosion12->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 33) { explosion13->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 34) { explosion14->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 35) { explosion15->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 36) { explosion16->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 37) { explosion17->drawwith(332.0f, 702.0f, 120.0f, 490.0f, 1.0f); }
			if (u == 38) { u = 0;  flash++; }
			
		}
		if (flash == 1) {
			sprite7->drawwith();
			if (u > 7) { sprite8->drawwith(); }
			sprite10->drawwith(1134.0f, 470.0f, 850.0f, 341.0f, 1.0f);
			if (u == 1) { explosion->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 2) { explosion2->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 3) { explosion3->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 4) { explosion4->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 5) { explosion5->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 6) { explosion6->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 7) { explosion7->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 8) { explosion8->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 9) { explosion9->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 10) { explosion10->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 11) { explosion11->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 12) { explosion12->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 13) { explosion13->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 14) { explosion14->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 15) { explosion15->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 16) { explosion16->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 17) { explosion17->drawwith(750.0f, 702.0f, 530.0f, 490.0f, 1.0f); }
			if (u == 18) { u = 0;  flash++; }
		}
		if (flash == 2) {
			sprite8->drawwith();
			if (u > 7) { sprite9->drawwith(); }
			sprite10->drawwith(1134.0f, 470.0f, 850.0f, 341.0f, 1.0f);
			if (u == 1) { explosion->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 2) { explosion2->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 3) { explosion3->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 4) { explosion4->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 5) { explosion5->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 6) { explosion6->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 7) { explosion7->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 8) { explosion8->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 9) { explosion9->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 10) { explosion10->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 11) { explosion11->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 12) { explosion12->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 13) { explosion13->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 14) { explosion14->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 15) { explosion15->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 16) { explosion16->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 17) { explosion17->drawwith(1142.0f, 702.0f, 930.0f, 490.0f, 1.0f); }
			if (u == 18) { u = 0;  flash++; }

		}
		if (flash == 3) {

			sprite9->drawwith();
			sprite10->drawwith(1134.0f, 470.0f, 850.0f, 341.0f, 1.0f);
			menu2 = 1;
			
		}
		gfx->FillRectangle(NULL, NULL, alpha3, D2D1::ColorF::White);
	}

	 if (menu2 == 1) {
		 if (kpos == 1)
		 {
			 if (soundflag == 2 || soundflag == 3) {
				 PlaySound("menu//beep menu.wav", NULL, SND_ASYNC);
				 soundflag = 1;
			 }
			 ///BOTA O SON AKI CORNO
			 else if (flag3 == 1) {
				 sprite11->drawwith();
				 sprite10->drawwith(1134.0f, 470.0f, 850.0f, 341.0f, 1.0f);
				 if (frag == 50) { flag3 = 2; }
			 }
			 else if (flag3 == 2) {
				 sprite12->drawwith();
				 sprite10->drawwith(1134.0f, 470.0f, 850.0f, 341.0f, 1.0f);
				 if (frag == 50) { flag3 = 1; }
			 }
			 frag = 0;

			 if (kpress == 2) {
				 PlaySound("menu//beep menu confirm.wav", NULL, SND_ASYNC);
				 Gamecontroller::SwitchLevel(new day());
			 }
		 }
		 if (kpos == 2)
		 {
			 if (soundflag == 1 || soundflag == 3) {
				 PlaySound("menu//beep menu.wav", NULL, SND_ASYNC);
				 soundflag = 2;
			 }
			 else if (flag3 == 1) {
				 sprite13->drawwith();
				 sprite10->drawwith(1134.0f, 470.0f, 850.0f, 341.0f, 1.0f);
				 if (frag == 50) { flag3 = 2; }
			 }
			 else if (flag3 == 2) {
				 sprite14->drawwith();
				 sprite10->drawwith(1134.0f, 470.0f, 850.0f, 341.0f, 1.0f);
				 if (frag == 50) { flag3 = 1; }
			 }
			 frag = 0;

			 if (kpress == 2) {
				 PlaySound("menu//beep menu confirm.wav", NULL, SND_ASYNC);
				 Gamecontroller::SwitchLevel(new Arcade());
			 }
		 }
		 if (kpos == 3)
		 {
			 if (soundflag == 1 || soundflag == 2) {
				 PlaySound("menu//beep menu.wav", NULL, SND_ASYNC);
				 soundflag = 3;
			 }
			 else if (flag3 == 1) {
				 sprite15->drawwith();
				 sprite10->drawwith(1134.0f, 470.0f, 850.0f, 341.0f, 1.0f);
				 if (frag == 50) { flag3 = 2; }
			 }
			 else if (flag3 == 2) {
				 sprite16->drawwith();
				 sprite10->drawwith(1134.0f, 470.0f, 850.0f, 341.0f, 1.0f);
				 if (frag == 50) { flag3 = 1; }
			 }
			 frag = 0;

			 if (kpress == 2) {
				 PlaySound("menu//beep menu confirm.wav", NULL, SND_ASYNC);
				 PostQuitMessage(0);
			 }
		 }
	 }

	gfx->EndDraw();
	}
}

void Gamemenu::data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win, 
	int* loses, float* W_S_alg, int* beted, int* lost) {

}
#include "Intro.h"
#include "Gamemenu.h"
#include "Gamecontroller.h"
#include "historylvl2.h"
#include "Bet.h"
#include "day.h"
#include "WinLoss_screen.h"
#include "Arcade.h"
#include "credits.h"

///////AS FAMOSAS VAIRAVEIS UNIVERSAIS///////
Graphics* graphics;
int level = 0;
int kpos = 0;
int kpress = 0;
int crack = 10;
int yaeno = 0;
int dey = 0;
int wins = 0;
int loses = 0;
float W_S_alg = 1;
int beted = 0;
int lost = 0;

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

struct items Items;
struct battle_alg Battle_alg;

///////ESSE EH O VAGABUNDO Q LIDA COM AS MSGS///////
LRESULT CALLBACK WindowProc(
	HWND hwnd,
	UINT uMsg,
	WPARAM wParam,
	LPARAM lParam
) {

	switch (uMsg) {
		///////CASO EU FECHE A JANELA///////
		case WM_CLOSE:
		{
			if ((MessageBox(hwnd, "Certeza q c quer quitar fi?", "ARREGOO!!!", MB_YESNO | MB_ICONHAND)) == IDYES) {
				PostQuitMessage(0);
				return 0;
			}
			else {
				break;
			}
		}
		///////CASO EU APERTE ALGM BUTAO DO TECLADO///////
		case WM_KEYDOWN:
		{
			if (level == 1) {
				
				if (wParam == VK_SPACE) { ///////ESPACO 
					kpress = 1;
				}
				if (kpress > 0) {

					if (wParam == VK_RIGHT) { ///////SETA PA BAXO
						if (kpos < 3) {
							kpos++;
						}
					}
					else if (wParam == VK_LEFT) { ///////SETA PA CIMA
						if (kpos > 1) {
							kpos--;
						}
					}

					else if (wParam == VK_RETURN) { ///////ENTER 
						if (kpos == 1) {
							level = 2;
						}
						kpress = 2;
					}
				}
			}

			 if (level == 3) {
		
			}

			break;
		}
		///////ESSE EH PRA QND EU LEVANTA A DISAPERTA A TECLA ELE N FICA DE CORNICE///////
		case WM_KEYUP:
		{
			if (level == 1) {
				if (wParam == VK_RETURN) {
					kpress = 1;
				}
			}
		}
		///////ESSE AKI PEGA A POSICAO E O MOVIMENTO DO MOUSE///////
		case WM_MOUSEMOVE:
		{
			const POINTS pt = MAKEPOINTS(lParam);
			if (level == 1) {
				if (kpress > 0) {
					if (pt.x >= 100 && pt.x < 365 && pt.y>575 && pt.y < 645) {
						kpos = 1;
					}
					if (pt.x >= 520 && pt.x < 755 && pt.y>575 && pt.y < 645) {
						kpos = 2;
					}
					if (pt.x >= 935 && pt.x < 1135 && pt.y>575 && pt.y < 645) {
						kpos = 3;
					}
				}
			}
			if (level == 3) {

				if (pt.x >= 125 && pt.x <= 385 && pt.y>=435 && pt.y <= 645) {
					kpos = 1;
				}
				else if (pt.x >= 905 && pt.x < 1165 && pt.y>435 && pt.y < 645) {
					kpos = 2;
				}
				else if (pt.x >= 505 && pt.x <= 585 && pt.y >= 512 && pt.y <= 590) {
					kpos = 3;
				}
				else if (pt.x >= 705 && pt.x <= 785 && pt.y >= 510 && pt.y <= 590) {
					kpos = 4;
				}
				else if (pt.x >= 1150 && pt.x <= 1255  && pt.y >= 15 && pt.y <= 130) {
					kpos = 5;
				}
				else if (pt.x >= 915 && pt.x <= 950 && pt.y >= 185 && pt.y <= 220) {
					kpos = 6;
				}
				else if (pt.x >= 355 && pt.x <= 455 && pt.y >= 370 && pt.y <= 475) {
					kpos = 7;
				}
				else if (pt.x >= 500 && pt.x <= 620 && pt.y >= 370 && pt.y <= 475) {
					kpos = 8;
				}
				else if (pt.x >= 680 && pt.x <= 765 && pt.y >= 370 && pt.y <= 475) {
					kpos = 9;
				}
				else if (pt.x >= 800 && pt.x <= 915 && pt.y >= 370 && pt.y <= 475) {
					kpos = 10;
				}
				else if (pt.x >= 545 && pt.x <= 770 && pt.y >= 20 && pt.y <= 60) {
					kpos = 11;
				}

				else {
					kpos = 0;
				}
			}

			if (level == 5) {
				if (pt.x >= 980 && pt.x <= 1265 && pt.y >= 608 && pt.y <= 700) {
					kpos = 1;
				}
				else if (pt.x >= 420 && pt.x <= 830 && pt.y >= 415 && pt.y <= 505) {
					kpos = 2;
 				}
				else {
					kpos = 0;
				}
			}

			if (level == 6) {
				if (pt.x >= 720 && pt.x <= 1230 && pt.y >= 200 && pt.y <= 290) {
					kpos = 1;
				}
				else if (pt.x >= 375 && pt.x <= 890 && pt.y >= 473 && pt.y <= 562) {
					kpos = 2;
				}
				else if (pt.x >= 415 && pt.x <= 540 && pt.y >= 40 && pt.y <= 220) {
					kpos = 3;
				}
				else if (pt.x >= 565 && pt.x <= 690 && pt.y >= 40 && pt.y <= 220) {
					kpos = 4;
				}
				else if (pt.x >= 720 && pt.x <= 856 && pt.y >= 40 && pt.y <= 220) {
					kpos = 5;
				}
				else if (pt.x >= 330 && pt.x <= 465 && pt.y >= 250 && pt.y <= 430) {
					kpos = 6;
				}
				else if (pt.x >= 645 && pt.x <= 775 && pt.y >= 250 && pt.y <= 430) {
					kpos = 7;
				}
				else if (pt.x >= 800 && pt.x <= 930 && pt.y >= 250 && pt.y <= 430) {
					kpos = 8;
				}
				else if (pt.x >= 410 && pt.x <= 540 && pt.y >= 475 && pt.y <= 673) {
					kpos = 9;
				}
				else if (pt.x >= 565 && pt.x <= 695 && pt.y >= 475 && pt.y <= 673) {
					kpos = 10;
				}
				else if (pt.x >= 730 && pt.x <= 846 && pt.y >= 475 && pt.y <= 673) {
					kpos = 11;
				}
				else {
					kpos = 0;
				}
			}

			break;
		}
		///////AKI EH PRA QND EU APERTA O BOTAO ESQUERDO DO MOUSE
		case WM_LBUTTONDOWN:
		{

			if (level == 1) {
				if (kpress > 0) {
					kpress = 2;
				}
			}

			if (level == 3) {
				if (kpos == 1) {
					kpress = 1;
				}
				else if (kpos == 2) {
					kpress = 2;
				}
				else if (kpos == 3) {
					kpress = 3;
				}
				else if (kpos == 4) {
					kpress = 4;
				}
				else if (kpos == 5) {
					kpress = 5;
				}
				else if (kpos == 6) {
					kpress = 6;
				}
				else if (kpos == 7) {
					kpress = 7;
				}
				else if (kpos == 8) {
					kpress = 8;
				}
				else if (kpos == 9) {
					kpress = 9;
				}
				else if (kpos == 10) {
					kpress = 10;
				}
				else if (kpos == 11) {
					kpress = 11;
				}
			}
			if (level == 5) {
				if (kpos == 1) {
					kpress = 1;
				}
				else if (kpos == 2) {
					kpress = 2;
				}
			}
			if (level == 6) {
				
					kpress = 1;
				
			}

			break;
		}
		///////A MESMA BOXTA LA DE QND EU SOLTA A TECLA DO TECLADO FDS///////
		case WM_LBUTTONUP:
		{
			if (level == 0) {
				kpress = 0;
				kpos = 0;
			}
			else if (level == 1) {
				kpress = 0;
			}
			else if (level == 3) {
				kpress = 0;
			}
			else if (level == 5) {
				kpress = 0;
			}
			else if (level == 6) {
				kpress = 0;
			}

			break;
		}	
		default:
		{
			return DefWindowProc(hwnd, uMsg, wParam, lParam);
		}
	}
///////AKI EH PRA ELE FAZE AS MSG Q EU N TO USANDO SE COMPORTAREM NUM MODE DEFAULT TLGD///////
}

///////MAIN 2.0 CHATO PRA KRL///////
int WINAPI wWinMain(
	HINSTANCE hInstance,
	HINSTANCE prevInstance,
	LPWSTR cmd,
	int nCmdShow
) {
///////SETUP DOS ITENS INICIAIS///////
	Items.lembrar_do_nada = 0;
	Items.buscar_algo_na_bolsa = 2;
	Items.pedir_ao_coleguinha = 1;
	Items.pegar_o_celular = 1;

	Items.USED_buscar_algo_na_bolsa = 0;
	Items.USED_lembrar_do_nada = 0;
	Items.USED_pedir_ao_coleguinha = 0;
	Items.USED_pegar_o_celular = 0;

	//////SETUP ALGORITIMO BATALHA//////////
	Battle_alg.confidence = 0;
	Battle_alg.old_grades = 0;
	Battle_alg.boss_diff = 0;
	Battle_alg.my_diff = 0;
///////CLASSE DA JANELA / CRIANDO A JANELA E AJUSTANDO 1 MONTE DE PIKA AUTOEXPLICATIVA///////
	WNDCLASSEX windowclass;
	ZeroMemory(&windowclass, sizeof(WNDCLASSEX));
	windowclass.cbSize = sizeof(WNDCLASSEX);
	windowclass.hbrBackground = (HBRUSH)COLOR_WINDOW;
	windowclass.hInstance = hInstance;
	windowclass.lpfnWndProc = WindowProc;
	windowclass.lpszClassName = "MainWindow";
	windowclass.style = CS_HREDRAW | CS_VREDRAW;

	RegisterClassEx(&windowclass);

	RECT rc{0,0,1280,720};
	AdjustWindowRectEx(&rc, WS_OVERLAPPEDWINDOW, false, WS_EX_OVERLAPPEDWINDOW);

	HWND hwnd=CreateWindowEx(WS_EX_OVERLAPPEDWINDOW,
		"MainWindow", "JANELA DE CORNO",
		WS_OVERLAPPEDWINDOW,
		0, 0, rc.right-rc.left, rc.bottom-rc.top,
		NULL, NULL, hInstance, 0
	);
	
	graphics = new Graphics();

	if (!graphics->Init(hwnd)) {
		delete graphics;
		return -1;
	}
///////TO USANDO MAIS PRA TEXTA///////
	Gamelevel::init(graphics);

	ShowWindow(hwnd, nCmdShow);
///////LOADANDO A PRIMERA COISA Q VAI APARECE NA TELA///////
	Gamecontroller::loadiniciallevel(new intro());

///////AKI TA OS CORNO Q PEGA AS MSG E MANDA LA PA CIMA///////
	MSG msg;

	while (1) {
		if (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE)) {
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		if (msg.message == WM_QUIT) {
			break; 
		}
		Gamecontroller::data(&Items, &Battle_alg, &crack, &yaeno, &dey, &wins, &loses, &W_S_alg, &beted, &lost);
		level = Gamecontroller::Update(kpos, kpress);
		Gamecontroller::Render();
	
	}

	delete graphics;
	return 0;
}
#include "Fighters.h"
struct FIGHTER {
	int wins;
	int losses;
	int fights;
	int alg;
	double diff;
};


FIGHTER athos_fighter;
FIGHTER giulia_fighter;
FIGHTER leu_fighter;
FIGHTER oziris_fighter;
FIGHTER alberto_fighter;
FIGHTER pires_fighter;
FIGHTER bruno_fighter;
FIGHTER raul_fighter;
FIGHTER wilfredo_fighter;


void Fighters::create(int fighter) {
	srand(time(NULL));
	
	if (fighter == 1) {
		if (athos_fighter.wins == 0) {
			athos_fighter.alg = rand() % 5 + 0;
			athos_fighter.wins = rand() % 5 + 1;
			athos_fighter.losses = rand() % 5 + 1;
			athos_fighter.fights = athos_fighter.wins + athos_fighter.losses;
		}
	}
	if (fighter == 2) {
		if (giulia_fighter.wins == 0) {
			giulia_fighter.alg = rand() % 5 + 0;
			giulia_fighter.wins = rand() % 5 + 1;
			giulia_fighter.losses = rand() % 5 + 1;
			giulia_fighter.fights = giulia_fighter.wins + giulia_fighter.losses;
		}
	}
	if (fighter == 3) {
		if (giulia_fighter.wins == 0) {
			giulia_fighter.alg = rand() % 5 + 0;
			giulia_fighter.wins = rand() % 5 + 1;
			giulia_fighter.losses = rand() % 5 + 1;
			giulia_fighter.fights = leu_fighter.wins + leu_fighter.losses;
		}
	}
	if (fighter == 4) {
		if (oziris_fighter.wins == 0) {
			oziris_fighter.alg = rand() % 5 + 0;
			oziris_fighter.wins = rand() % 5 + 1;
			oziris_fighter.losses = rand() % 5 + 1;
			oziris_fighter.fights = oziris_fighter.wins + oziris_fighter.losses;
		}
	}
	if (fighter == 5) {
		if (alberto_fighter.wins == 0) {
			alberto_fighter.alg = rand() % 5 + 0;
			alberto_fighter.wins = rand() % 5 + 1;
			alberto_fighter.losses = rand() % 5 + 1;
			alberto_fighter.fights = alberto_fighter.wins + alberto_fighter.losses;
		}
	}
	if (fighter == 6) {
		if (pires_fighter.wins == 0) {
			pires_fighter.alg = rand() % 5 + 0;
			pires_fighter.wins = rand() % 5 + 1;
			pires_fighter.losses = rand() % 5 + 1;
			pires_fighter.fights = pires_fighter.wins + pires_fighter.losses;
		}
	}
	if (fighter == 7) {
		if (bruno_fighter.wins == 0) {
			bruno_fighter.alg = rand() % 6 + 1;
			bruno_fighter.wins = rand() % 5 + 1;
			bruno_fighter.losses = rand() % 5 + 1;
			bruno_fighter.fights = bruno_fighter.wins + bruno_fighter.losses;
		}
	}
	if (fighter == 8) {
		if (raul_fighter.wins == 0) {
			raul_fighter.alg = rand() % 5 + 0;
			raul_fighter.wins = rand() % 5 + 1;
			raul_fighter.losses = rand() % 5 + 1;
			raul_fighter.fights = raul_fighter.wins + raul_fighter.losses;
		}
	}
	if (fighter == 9) {
		if (wilfredo_fighter.wins == 0) {
			wilfredo_fighter.alg = rand() % 5 + 0;
			wilfredo_fighter.wins = rand() % 5 + 1;
			wilfredo_fighter.losses = rand() % 5 + 1;
			wilfredo_fighter.fights = wilfredo_fighter.wins + wilfredo_fighter.losses;
		}
	}
}

double Fighters::Alg_generator(int fighter) {
	create(fighter);

	if (fighter == 1) athos_fighter.diff = ((((athos_fighter.wins * 1.0) / (athos_fighter.fights * 1.0)) - ((athos_fighter.losses * 1.0) / 10)) - ((athos_fighter.alg * 1.0) / 10));  return athos_fighter.diff;
	if (fighter == 2) giulia_fighter.diff = ((((giulia_fighter.wins * 1.0) / (giulia_fighter.fights * 1.0)) - ((giulia_fighter.losses * 1.0) / 10)) - ((giulia_fighter.alg * 1.0) / 10)); return giulia_fighter.diff;
	if (fighter == 3) leu_fighter.diff = ((((leu_fighter.wins * 1.0) / (leu_fighter.fights * 1.0)) - ((leu_fighter.losses * 1.0) / 10)) - ((leu_fighter.alg * 1.0) / 10)); return leu_fighter.diff;
	if (fighter == 4) oziris_fighter.diff = (((((oziris_fighter.wins * 1.0) / oziris_fighter.fights * 1.0)) - ((oziris_fighter.losses * 1.0)) / 10) - ((oziris_fighter.alg * 1.0) / 10)); return oziris_fighter.diff;
	if (fighter == 5) alberto_fighter.diff = ((((alberto_fighter.wins * 1.0) / (alberto_fighter.fights * 1.0)) - ((alberto_fighter.losses * 1.0) / 10)) - ((alberto_fighter.alg * 1.0) / 10)); return alberto_fighter.diff;
	if (fighter == 6) pires_fighter.diff = ((((pires_fighter.wins * 1.0) / (pires_fighter.fights * 1.0)) - ((pires_fighter.losses * 1.0) / 10)) - ((pires_fighter.alg * 1.0) / 10)); return pires_fighter.diff;
	if (fighter == 7) bruno_fighter.diff = ((((bruno_fighter.wins * 1.0) / (bruno_fighter.fights * 1.0)) - ((bruno_fighter.losses * 1.0) / 10)) - ((bruno_fighter.alg * 1.0) / 10)); return bruno_fighter.diff;
	if (fighter == 8) raul_fighter.diff = ((((raul_fighter.wins * 1.0) / (raul_fighter.fights * 1.0)) - ((raul_fighter.losses * 1.0) / 10)) - ((raul_fighter.alg * 1.0) / 10)); return raul_fighter.diff;
	if (fighter == 9) wilfredo_fighter.diff = ((((wilfredo_fighter.wins * 1.0) / (wilfredo_fighter.fights * 1.0)) - ((wilfredo_fighter.losses * 1.0) / 10)) - ((wilfredo_fighter.alg * 1.0) / 10.0)); return wilfredo_fighter.diff;
}

int Fighters::get_win(int fighter) {
	if (fighter == 1)return athos_fighter.wins;
	if (fighter == 2)return giulia_fighter.wins;
	if (fighter == 3)return leu_fighter.wins;
	if (fighter == 4)return oziris_fighter.wins;
	if (fighter == 5)return alberto_fighter.wins;
	if (fighter == 6)return pires_fighter.wins;
	if (fighter == 7)return bruno_fighter.wins;
	if (fighter == 8)return raul_fighter.wins;
	if (fighter == 9)return wilfredo_fighter.wins;
}
int Fighters::get_loss(int fighter) {
	if (fighter == 1)return athos_fighter.losses;
	if (fighter == 2)return giulia_fighter.losses;
	if (fighter == 3)return leu_fighter.losses;
	if (fighter == 4)return oziris_fighter.losses;
	if (fighter == 5)return alberto_fighter.losses;
	if (fighter == 6)return pires_fighter.losses;
	if (fighter == 7)return bruno_fighter.losses;
	if (fighter == 8)return raul_fighter.losses;
	if (fighter == 9)return wilfredo_fighter.losses;
}
void Fighters::set_win(int fighter, int win) {
	if (fighter == 1) athos_fighter.wins = win;
	if (fighter == 2) giulia_fighter.wins = win;
	if (fighter == 3) leu_fighter.wins = win;
	if (fighter == 4) oziris_fighter.wins = win;
	if (fighter == 5) alberto_fighter.wins = win;
	if (fighter == 6) pires_fighter.wins = win;
	if (fighter == 7) bruno_fighter.wins = win;
	if (fighter == 8) raul_fighter.wins = win;
	if (fighter == 9) wilfredo_fighter.wins = win;

}
void Fighters::set_loss(int fighter, int loss) {
	if (fighter == 1) athos_fighter.losses=loss;
	if (fighter == 2) giulia_fighter.losses = loss;
	if (fighter == 3) leu_fighter.losses = loss;
	if (fighter == 4) oziris_fighter.losses = loss;
	if (fighter == 5) alberto_fighter.losses = loss;
	if (fighter == 6) pires_fighter.losses = loss;
	if (fighter == 7) bruno_fighter.losses = loss;
	if (fighter == 8) raul_fighter.losses = loss;
	if (fighter == 9) wilfredo_fighter.losses = loss;
}
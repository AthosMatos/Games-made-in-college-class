#pragma once
#include "Gamelevel.h"
#include <ctime>

class Fighters {
public:
	
	Fighters() {
		
	}
	double Alg_generator(int fighter);
	void create(int fighter);
	int get_win(int fighter);
	int get_loss(int fighter);
	void set_win(int fighter,int win);
	void set_loss(int fighter,int loss);
};
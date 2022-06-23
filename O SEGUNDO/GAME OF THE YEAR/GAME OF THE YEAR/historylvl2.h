#pragma once
#include "history.h"

class historylvl2 : public Gamelevel {
	////////DECLARANDO A PORRA TODA////////
	int fpscount = 1;
	int frame;
	int fps2;
	int fps3;
	float bossy;
	float bossyacce;
	int bosson;
	float cx;
	int me_Start_x;
	int wait_for_it;
	int frame2;
	int boss_attack_activate;
	int me_attack_activate;
	int attack_count;
	float boss_attack_xlr8;
	int attack_taken;
	int talkin_on_off;
	int talk_activate;
	int lifeB_x;
	int lifeB_x2;
	int lifebar_X;
	int lifebar2_X;
	int talk_bind;
	int YES_NO;
	int winner_winner_chicken_dinner;
	int data_flag;
	int explosion;
	int frame3;
	int std_animation;
	int poop_y;
	int poop_hit;
	int frame4;
	int death;
	int cracks;
	int bets;
	int wins;
	int losses;
	int wins_losses_flag;
	int c_lost;
	int laser_frame;
	int death_frame;
	int portal;
	int dey;
	int fps4;
	int mecha_frame;
	int mecha_x;
	int mekka_shoot;
	int W_bossy;
	int meteor_frame;
	int meteor_y;
	int meteor_x;

	clock_t fps;

	Spritesheet* poop;

	Spritesheet* explosion2_animation1;
	Spritesheet* explosion2_animation2;
	Spritesheet* explosion2_animation3;
	Spritesheet* explosion2_animation4;
	Spritesheet* explosion2_animation5;
	Spritesheet* explosion2_animation6;
	Spritesheet* explosion2_animation7;

	Spritesheet* portal1;
	Spritesheet* portal2;
	Spritesheet* portal3;
	Spritesheet* portal4;
	Spritesheet* portal5;
	Spritesheet* portal6;
	Spritesheet* portal7;
	Spritesheet* portal8;
	Spritesheet* portal9;
	Spritesheet* portal10;
	Spritesheet* portal11;
	

	Spritesheet* Lasersprite;
	Spritesheet* Lasersprite2;
	Spritesheet* Lasersprite3;
	Spritesheet* Lasersprite4;
	Spritesheet* Lasersprite5;
	Spritesheet* Lasersprite6;
	Spritesheet* Lasersprite7;
	Spritesheet* Lasersprite8;
	Spritesheet* Lasersprite9;
	Spritesheet* Lasersprite10;
	Spritesheet* Lasersprite11;
	Spritesheet* Lasersprite12;
	Spritesheet* Lasersprite13;
	Spritesheet* Lasersprite14;
	Spritesheet* Lasersprite15;
	Spritesheet* Lasersprite16;
	Spritesheet* Lasersprite17;
	Spritesheet* Lasersprite18;
	Spritesheet* Lasersprite19;
	Spritesheet* Lasersprite20;
	Spritesheet* Lasersprite21;
	Spritesheet* Lasersprite22;
	Spritesheet* Lasersprite23;

	Spritesheet* Lasers_end1;
	Spritesheet* Lasers_end2;
	Spritesheet* Lasers_end3;
	Spritesheet* Lasers_end4;
	Spritesheet* Lasers_end5;
	Spritesheet* Lasers_end6;
	Spritesheet* Lasers_end7;
	Spritesheet* Lasers_end8;
	Spritesheet* Lasers_end9;
	Spritesheet* Lasers_end10;
	Spritesheet* Lasers_end11;
	Spritesheet* Lasers_end12;
	Spritesheet* Lasers_end13;
	Spritesheet* Lasers_end14;
	Spritesheet* Lasers_end15;

	Spritesheet* Laser_body;

	Spritesheet* smoke1;
	Spritesheet* smoke2;
	Spritesheet* smoke3;
	Spritesheet* smoke4;
	Spritesheet* smoke5;
	Spritesheet* smoke6;
	Spritesheet* smoke7;
	Spritesheet* smoke8;
	Spritesheet* smoke9;
	Spritesheet* smoke10;
	//Spritesheet* Lasersprite;

	Spritesheet* me_walkin1;
	Spritesheet* me_walkin2;
	Spritesheet* me_walkin2_2;
	Spritesheet* me_walkin3;
	Spritesheet* me_lookin;

	Spritesheet* mecha_boss_red;
	Spritesheet* boss_life_raul;
	Spritesheet* boss_life_bruno;
	Spritesheet* boss_life_pires;
	Spritesheet* boss_life_mechalberto;
	Spritesheet* boss_life_wilfredo;
	Spritesheet* my_life_bar;
	Spritesheet* bar_red;
	Spritesheet* bar_red_reverse;
	Spritesheet* bar_green;
	Spritesheet* bar_green_reverse;
	Spritesheet* dialog_box;
	Spritesheet* dialog_box_reverse;
	Spritesheet* bckgrd;
	Spritesheet* cldbckgrd;
	///////raul booss///////////
	Spritesheet* boss;
	Spritesheet* boss_inclined;
	Spritesheet* boss_red;
	////////bruno bosss//////////
	Spritesheet* B_boss;
	Spritesheet* B_boss_inclined;
	Spritesheet* B_boss_red;
	///////pires boosss///////////
	Spritesheet* P_boss;
	Spritesheet* P_boss_inclined;
	Spritesheet* P_boss_red;
	////////alberto booossss////////
	Spritesheet* Mechalberto_boss_shoot;

	Spritesheet* Mechalberto_boss1;
	Spritesheet* Mechalberto_boss2;
	Spritesheet* Mechalberto_boss3;
	Spritesheet* Mechalberto_boss4;
	Spritesheet* Mechalberto_boss5;
	Spritesheet* Mechalberto_boss6;
	Spritesheet* Mechalberto_boss7;
	Spritesheet* Mechalberto_boss8;
	Spritesheet* Mechalberto_boss9;
	Spritesheet* Mechalberto_boss10;
	Spritesheet* Mechalberto_boss11;
	Spritesheet* Mechalberto_boss12;
	Spritesheet* Mechalberto_boss13;
	Spritesheet* Mechalberto_boss14;
	///////wlfredo bosss///////////
	Spritesheet* W_boss;
	Spritesheet* W_boss_red;

	Spritesheet* Meteor;
	Spritesheet* Meteor2;
	Spritesheet* Meteor3;
	Spritesheet* Meteor4;
	Spritesheet* Meteor5;
	Spritesheet* Meteor6;

	Spritesheet* explosion_animation1;
	Spritesheet* explosion_animation2;
	Spritesheet* explosion_animation3;
	Spritesheet* explosion_animation4;
	Spritesheet* explosion_animation5;
	Spritesheet* explosion_animation6;
	Spritesheet* explosion_animation7;
	Spritesheet* explosion_animation8;
	Spritesheet* explosion_animation9;

	Spritesheet* my_death_animation1;
	Spritesheet* my_death_animation2;
	Spritesheet* my_death_animation3;
	Spritesheet* my_death_animation4;
	Spritesheet* my_death_animation5;
	Spritesheet* my_death_animation6;
	Spritesheet* my_death_animation7;
	Spritesheet* my_death_animation8;
	Spritesheet* my_death_animation9;
	Spritesheet* my_death_animation10;
	Spritesheet* my_death_animation11;

	Spritesheet* laseranimation;
	Spritesheet* throwingThing;


public:
	virtual void load() override;
	virtual void unload() override;
	virtual int update(int kpos, int kpress) override;
	virtual void render() override;
	virtual void data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win,
		int* loses, float* W_S_alg, int* beted, int* lost) override;

	void laserdraw();
	void day1();
	void day2();
	void day3();
	void day4();
	void day5();


	void mecha_walk();
};
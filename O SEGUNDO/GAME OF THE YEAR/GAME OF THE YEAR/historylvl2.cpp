#include "historylvl2.h"
#include "Gamecontroller.h"
#include "WinLoss_screen.h"
#include "Gamemenu.h"
#include <wchar.h>
#include "credits.h"

struct battle_alg {
	float confidence;
	float old_grades;
	float boss_diff;
	float my_diff;
};
struct battle_alg Class2_B_alg;

void historylvl2::load() {
	////////vo explica mais n vey aff////////

	dialog_box = new Spritesheet(L"history//Fist fight//dialog box.png", gfx);
	dialog_box_reverse = new Spritesheet(L"history//Fist fight//dialog box reverse.png", gfx);
	my_life_bar = new Spritesheet(L"history//Fist fight//life_bar.png", gfx);
	bar_red = new Spritesheet(L"history//Fist fight//life_bar red_line.png", gfx);
	bar_red_reverse = new Spritesheet(L"history//Fist fight//life_bar red_line_reverse.png", gfx);
	bar_green = new Spritesheet(L"history//Fist fight//life_bar green_line.png", gfx);
	bar_green_reverse = new Spritesheet(L"history//Fist fight//life_bar green_line_reverse.png", gfx);

	me_walkin1 = new Spritesheet(L"history//walking animation me//sprite_0.png", gfx);
	me_walkin2 = new Spritesheet(L"history//walking animation me//sprite_1.png", gfx);
	me_walkin3 = new Spritesheet(L"history//walking animation me//sprite_2.png", gfx);
	me_walkin2_2 = new Spritesheet(L"history//walking animation me//sprite_2_2.png", gfx);

	bckgrd = new Spritesheet(L"history//fightbackground1.png", gfx);
	cldbckgrd = new Spritesheet(L"history//clouds fightbackground1.png", gfx);
	boss = new Spritesheet(L"history//Fist fight//raul boos//raul boss.png", gfx);
	boss_inclined = new Spritesheet(L"history//Fist fight//raul boos//raul boss inclinated.png", gfx);
	boss_red = new Spritesheet(L"history//Fist fight//raul boos//raul boss red.png", gfx);
	boss_life_raul = new Spritesheet(L"history//Fist fight//boss_raul.png", gfx);
	boss_life_bruno = new Spritesheet(L"history//Fist fight//boss_bruno.png", gfx);
	boss_life_pires = new Spritesheet(L"history//Fist fight//boss_pires.png", gfx);
	boss_life_mechalberto = new Spritesheet(L"history//Fist fight//boss_alberto.png", gfx);
	boss_life_wilfredo = new Spritesheet(L"history//Fist fight//boss_wilfredo.png", gfx);

	throwingThing = new Spritesheet(L"history//Fist fight//java logo.png", gfx);

	explosion_animation1 = new Spritesheet(L"history//Fist fight//explosion_pink//sprite_0.png", gfx);
	explosion_animation2 = new Spritesheet(L"history//Fist fight//explosion_pink//sprite_1.png", gfx);
	explosion_animation3 = new Spritesheet(L"history//Fist fight//explosion_pink//sprite_2.png", gfx);
	explosion_animation4 = new Spritesheet(L"history//Fist fight//explosion_pink//sprite_3.png", gfx);
	explosion_animation5 = new Spritesheet(L"history//Fist fight//explosion_pink//sprite_4.png", gfx);
	explosion_animation6 = new Spritesheet(L"history//Fist fight//explosion_pink//sprite_5.png", gfx);
	explosion_animation7 = new Spritesheet(L"history//Fist fight//explosion_pink//sprite_6.png", gfx);
	explosion_animation8 = new Spritesheet(L"history//Fist fight//explosion_pink//sprite_7.png", gfx);
	explosion_animation9 = new Spritesheet(L"history//Fist fight//explosion_pink//sprite_8.png", gfx);

	explosion2_animation1 = new Spritesheet(L"history//Fist fight//exploison_ani//sprite_0.png", gfx);
	explosion2_animation2 = new Spritesheet(L"history//Fist fight//exploison_ani//sprite_1.png", gfx);
	explosion2_animation3 = new Spritesheet(L"history//Fist fight//exploison_ani//sprite_2.png", gfx);
	explosion2_animation4 = new Spritesheet(L"history//Fist fight//exploison_ani//sprite_3.png", gfx);
	explosion2_animation5 = new Spritesheet(L"history//Fist fight//exploison_ani//sprite_4.png", gfx);
	explosion2_animation6 = new Spritesheet(L"history//Fist fight//exploison_ani//sprite_5.png", gfx);
	explosion2_animation7 = new Spritesheet(L"history//Fist fight//exploison_ani//sprite_6.png", gfx);

	poop = new Spritesheet(L"history//Fist fight//poop.png", gfx);

	smoke1 = new Spritesheet(L"history//Fist fight//smoke//sprite_00.png", gfx);
	smoke2 = new Spritesheet(L"history//Fist fight//smoke//sprite_01.png", gfx);
	smoke3 = new Spritesheet(L"history//Fist fight//smoke//sprite_02.png", gfx);
	smoke4 = new Spritesheet(L"history//Fist fight//smoke//sprite_03.png", gfx);
	smoke5 = new Spritesheet(L"history//Fist fight//smoke//sprite_04.png", gfx);
	smoke6 = new Spritesheet(L"history//Fist fight//smoke//sprite_05.png", gfx);
	smoke7 = new Spritesheet(L"history//Fist fight//smoke//sprite_06.png", gfx);
	smoke8 = new Spritesheet(L"history//Fist fight//smoke//sprite_07.png", gfx);
	smoke9 = new Spritesheet(L"history//Fist fight//smoke//sprite_08.png", gfx);
	smoke10 = new Spritesheet(L"history//Fist fight//smoke//sprite_09.png", gfx);

	Lasersprite = new Spritesheet(L"history//Fist fight//laser animation//sprite_00.png", gfx);
	Lasersprite2 = new Spritesheet(L"history//Fist fight//laser animation//sprite_01.png", gfx);
	Lasersprite3 = new Spritesheet(L"history//Fist fight//laser animation//sprite_02.png", gfx);
	Lasersprite4 = new Spritesheet(L"history//Fist fight//laser animation//sprite_03.png", gfx);
	Lasersprite5 = new Spritesheet(L"history//Fist fight//laser animation//sprite_04.png", gfx);
	Lasersprite6 = new Spritesheet(L"history//Fist fight//laser animation//sprite_05.png", gfx);
	Lasersprite7 = new Spritesheet(L"history//Fist fight//laser animation//sprite_06.png", gfx);
	Lasersprite8 = new Spritesheet(L"history//Fist fight//laser animation//sprite_07.png", gfx);
	Lasersprite9 = new Spritesheet(L"history//Fist fight//laser animation//sprite_08.png", gfx);
	Lasersprite10 = new Spritesheet(L"history//Fist fight//laser animation//sprite_09.png", gfx);
	Lasersprite11 = new Spritesheet(L"history//Fist fight//laser animation//sprite_10.png", gfx);
	Lasersprite12 = new Spritesheet(L"history//Fist fight//laser animation//sprite_11.png", gfx);
	Lasersprite13 = new Spritesheet(L"history//Fist fight//laser animation//sprite_12.png", gfx);
	Lasersprite14 = new Spritesheet(L"history//Fist fight//laser animation//sprite_13.png", gfx);
	Lasersprite15 = new Spritesheet(L"history//Fist fight//laser animation//sprite_14.png", gfx);
	Lasersprite16 = new Spritesheet(L"history//Fist fight//laser animation//sprite_15.png", gfx);
	Lasersprite17 = new Spritesheet(L"history//Fist fight//laser animation//sprite_16.png", gfx);
	Lasersprite18 = new Spritesheet(L"history//Fist fight//laser animation//sprite_17.png", gfx);
	Lasersprite19 = new Spritesheet(L"history//Fist fight//laser animation//sprite_18.png", gfx);
	Lasersprite20 = new Spritesheet(L"history//Fist fight//laser animation//sprite_19.png", gfx);
	Lasersprite21 = new Spritesheet(L"history//Fist fight//laser animation//sprite_20.png", gfx);
	Lasersprite22 = new Spritesheet(L"history//Fist fight//laser animation//sprite_21.png", gfx);
	Lasersprite23 = new Spritesheet(L"history//Fist fight//laser animation//sprite_22.png", gfx);

	Lasers_end1 = new Spritesheet(L"history//Fist fight//laser to right//sprite_00.png", gfx);
	Lasers_end2 = new Spritesheet(L"history//Fist fight//laser to right//sprite_01.png", gfx);
	Lasers_end3 = new Spritesheet(L"history//Fist fight//laser to right//sprite_02.png", gfx);
	Lasers_end4 = new Spritesheet(L"history//Fist fight//laser to right//sprite_03.png", gfx);
	Lasers_end5 = new Spritesheet(L"history//Fist fight//laser to right//sprite_04.png", gfx);
	Lasers_end6 = new Spritesheet(L"history//Fist fight//laser to right//sprite_05.png", gfx);
	Lasers_end7 = new Spritesheet(L"history//Fist fight//laser to right//sprite_06.png", gfx);
	Lasers_end8 = new Spritesheet(L"history//Fist fight//laser to right//sprite_07.png", gfx);
	Lasers_end9 = new Spritesheet(L"history//Fist fight//laser to right//sprite_08.png", gfx);
	Lasers_end10 = new Spritesheet(L"history//Fist fight//laser to right//sprite_09.png", gfx);
	Lasers_end11 = new Spritesheet(L"history//Fist fight//laser to right//sprite_10.png", gfx);
	Lasers_end12 = new Spritesheet(L"history//Fist fight//laser to right//sprite_11.png", gfx);
	Lasers_end13 = new Spritesheet(L"history//Fist fight//laser to right//sprite_12.png", gfx);
	Lasers_end14 = new Spritesheet(L"history//Fist fight//laser to right//sprite_13.png", gfx);
	Lasers_end15 = new Spritesheet(L"history//Fist fight//laser to right//sprite_14.png", gfx);

	Laser_body = new Spritesheet(L"history//Fist fight//laser body.png", gfx);

	my_death_animation1 = new Spritesheet(L"history//me dying//sprite_00.png", gfx);
	my_death_animation2 = new Spritesheet(L"history//me dying//sprite_01.png", gfx);
	my_death_animation3 = new Spritesheet(L"history//me dying//sprite_02.png", gfx);
	my_death_animation4 = new Spritesheet(L"history//me dying//sprite_03.png", gfx);
	my_death_animation5 = new Spritesheet(L"history//me dying//sprite_04.png", gfx);
	my_death_animation6 = new Spritesheet(L"history//me dying//sprite_05.png", gfx);
	my_death_animation7 = new Spritesheet(L"history//me dying//sprite_06.png", gfx);
	my_death_animation8 = new Spritesheet(L"history//me dying//sprite_07.png", gfx);
	my_death_animation9 = new Spritesheet(L"history//me dying//sprite_08.png", gfx);
	my_death_animation10 = new Spritesheet(L"history//me dying//sprite_09.png", gfx);
	my_death_animation11 = new Spritesheet(L"history//me dying//sprite_10.png", gfx);

	B_boss = new Spritesheet(L"history//Fist fight//bruno boss//bruno_boss.png", gfx);
	B_boss_inclined = new Spritesheet(L"history//Fist fight//bruno boss//bruno_boss_inclinated.png", gfx);
	B_boss_red = new Spritesheet(L"history//Fist fight//bruno boss//bruno_boss_red.png", gfx);

	P_boss = new Spritesheet(L"history//Fist fight//pires boss//pires_boss_full_1.png", gfx);
	P_boss_inclined = new Spritesheet(L"history//Fist fight//pires boss//pires_boss_full_2.png", gfx);
	P_boss_red = new Spritesheet(L"history//Fist fight//pires boss//pires_boss_full_3.png", gfx);

	mecha_boss_red = new Spritesheet(L"history//Fist fight//robot_alberto//mecha_boss_red.png", gfx);

	portal1 = new Spritesheet(L"history//Fist fight//portal//sprite_10.png", gfx);
	portal2 = new Spritesheet(L"history//Fist fight//portal//sprite_09.png", gfx);
	portal3 = new Spritesheet(L"history//Fist fight//portal//sprite_08.png", gfx);
	portal4 = new Spritesheet(L"history//Fist fight//portal//sprite_07.png", gfx);
	portal5 = new Spritesheet(L"history//Fist fight//portal//sprite_06.png", gfx);
	portal6 = new Spritesheet(L"history//Fist fight//portal//sprite_05.png", gfx);
	portal7 = new Spritesheet(L"history//Fist fight//portal//sprite_04.png", gfx);
	portal8 = new Spritesheet(L"history//Fist fight//portal//sprite_03.png", gfx);
	portal9 = new Spritesheet(L"history//Fist fight//portal//sprite_02.png", gfx);
	portal10 = new Spritesheet(L"history//Fist fight//portal//sprite_01.png", gfx);
	portal11 = new Spritesheet(L"history//Fist fight//portal//sprite_00.png", gfx);

	Mechalberto_boss1 = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_00.png", gfx);
	Mechalberto_boss2 = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_01.png", gfx);
	Mechalberto_boss3 = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_02.png", gfx);
	Mechalberto_boss4 = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_03.png", gfx);
	Mechalberto_boss5 = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_04.png", gfx);
	Mechalberto_boss6 = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_05.png", gfx);
	Mechalberto_boss7 = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_06.png", gfx);
	Mechalberto_boss8 = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_07.png", gfx);
	Mechalberto_boss9 = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_08.png", gfx);
	Mechalberto_boss10 = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_09.png", gfx);
	Mechalberto_boss11 = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_10.png", gfx);
	Mechalberto_boss12 = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_11.png", gfx);
	Mechalberto_boss13 = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_12.png", gfx);
	Mechalberto_boss14 = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_13.png", gfx);

	W_boss = new Spritesheet(L"history//Fist fight//wilfredo head//wlfredo head.png", gfx);
	W_boss_red = new Spritesheet(L"history//Fist fight//wilfredo head//wlfredo head_red.png", gfx);

	Mechalberto_boss_shoot = new Spritesheet(L"history//Fist fight//robot_alberto//sprite_00_shoot.png", gfx);

	Meteor = new Spritesheet(L"history//Fist fight//meteor//sprite_0.png", gfx);
	Meteor2 = new Spritesheet(L"history//Fist fight//meteor//sprite_1.png", gfx);
	Meteor3 = new Spritesheet(L"history//Fist fight//meteor//sprite_2.png", gfx);
	Meteor4 = new Spritesheet(L"history//Fist fight//meteor//sprite_3.png", gfx);
	Meteor5 = new Spritesheet(L"history//Fist fight//meteor//sprite_4.png", gfx);
	Meteor6 = new Spritesheet(L"history//Fist fight//meteor//sprite_5.png", gfx);

	frame = -1;
	frame2 = -1;
	fps2 = 0;
	fps3 = 0;
	fps4 = 0;
	cx = -1900;
	bossy = -660;
	bossyacce = 0.0f;
	bosson = 0;
	me_Start_x = -340;
	wait_for_it = 0;
	boss_attack_activate = 0;
	attack_count = 0;
	boss_attack_xlr8 = -1.0f;
	talkin_on_off = 1;
	talk_activate = 1;
	talk_bind = 0;
	lifeB_x = 0;
	lifeB_x2 = 0;
	lifebar_X = -510;
	lifebar2_X = 510;
	data_flag = 1;
	attack_taken = 0;
	explosion = 0;
	me_attack_activate = 0;
	frame3 = 0;
	poop_y = 10;
	poop_hit = 0;
	frame4 = 0;
	death = 0;
	wins_losses_flag = 0;
	laser_frame = 0;
	death_frame = -1;
	portal = 0;
	mecha_frame = 0;
	mecha_x = 250;
	mekka_shoot = 0;
	W_bossy = 0;
	meteor_x = 800;
	meteor_y = -300;
	meteor_frame = 0;
}

void historylvl2::unload() {
	delete dialog_box;
	delete dialog_box_reverse;
	delete my_life_bar;
	delete bar_red;
	delete 	bar_red_reverse;
	delete bar_green;
	delete bar_green_reverse;

	delete me_walkin1;
	delete me_walkin2;
	delete me_walkin3;
	delete 	me_walkin2_2;

	delete bckgrd;
	delete 	cldbckgrd;

	delete boss;
	delete boss_inclined;
	delete 	boss_red;
	delete boss_life_raul;

	delete Laser_body;

	delete throwingThing;

	delete explosion_animation1;
	delete explosion_animation2;
	delete explosion_animation3;
	delete explosion_animation4;
	delete explosion_animation5;
	delete explosion_animation6;
	delete explosion_animation7;
	delete explosion_animation8;
	delete explosion_animation9;

	delete explosion2_animation1;
	delete explosion2_animation2;
	delete explosion2_animation3;
	delete explosion2_animation4;
	delete explosion2_animation5;
	delete explosion2_animation6;
	delete explosion2_animation7;

	delete poop;

	delete smoke1;
	delete smoke2;
	delete smoke3;
	delete smoke4;
	delete smoke5;
	delete smoke6;
	delete smoke7;
	delete smoke8;
	delete smoke9;
	delete smoke10;
}

int historylvl2::update(int kpos, int kpress) {
	///CONTADOR FRAME PADRAO
	if (winner_winner_chicken_dinner == 1) {

		if (fpscount == 1) {
			fps = 1 + clock();
			fps2 += 1;
			fps3 += 10;
			fps4 += 2;
			fpscount = 0;

			if (wait_for_it < 301) {
				wait_for_it++;
			}
			if (boss_attack_activate == 1 && attack_count < 101 && talkin_on_off != 1) {
				attack_count++;
			}
			if (talk_activate >= 1 && talk_activate <= 900) {
				talk_activate++;
			}
			if (talk_activate >= 700) {
				talk_bind = 1;
			}
			if (talk_activate >= 900) {
				talk_bind = 2;
				talkin_on_off = 0;
			}
		}

		if (fps <= clock()) {
			fpscount = 1;

			if (lifebar_X != 0) {
				lifebar_X += 10;
				lifebar2_X -= 10;
			}

			if (dey != 4 && dey != 3 && dey != 5 && attack_taken == 1 && lifeB_x >= -200) {
				lifeB_x -= 5;
			}
			if (frame4 >= 1 && lifeB_x2 < 500) {
				lifeB_x2 += 5;
			}
		}
		//CONTADOR FRAME 1
		if (fps2 == 5) {
			fps2 = 0;
			cx += 2;


			if (attack_taken == 1 && explosion <= 9) {
				explosion++;
			}

			if (dey == 3) {

				if (bossy <= 15 && wait_for_it >= 300) {
					bossy += bossyacce;
					bossyacce += 1.0f;
				}
				if (bossy >= -20 && bosson != 2 && wait_for_it >= 300) {
					//bossyacce -= 30.0f;
					bosson++;
				}
			}

			if (dey != 3) {

				if (bossy <= 15 && wait_for_it >= 300) {
					bossy += bossyacce;
					bossyacce += 2.0f;
				}
				if (bossy >= -20 && bosson != 2 && wait_for_it >= 300) {
					bossyacce -= 30.0f;
					bosson++;
				}
			}

			if (bosson == 2) {
				boss_attack_activate = 1;
			}
			if (attack_count >= 100) {
				boss_attack_activate = 2;
			}

			if (talkin_on_off != 1) {

				if (boss_attack_activate == 2) {
					if (boss_attack_xlr8 <= -850.0f) {
						attack_taken = 1;
					}
					if (boss_attack_xlr8 > -1150.0f && boss_attack_xlr8 < 0.0f) {

						boss_attack_xlr8 -= 5.0f;
						boss_attack_xlr8 *= 1.5;
					}
					else if (boss_attack_xlr8 <= -1150.0f) {
						boss_attack_xlr8 = 300.0f;
					}
					else {
						if (boss_attack_xlr8 > 0.0f) {
							boss_attack_xlr8 -= 10.0f;
						}
						else {
							me_attack_activate = 1;
							boss_attack_activate = 1;
						}
					}
				}
			}
		}
		if (poop_hit == 1) {
			death = 1;
		}
		//CONTADOR FRAME 2
		if (fps3 == 100) {
			if (portal < 12) {
				portal++;
			}
			if (frame3 >= 23)poop_y += 25;

			if (poop_y >= 1200) {
				Gamecontroller::SwitchLevel(new WinLoss());
			}
			if (boss_attack_activate==1 && W_bossy > -400) {
				W_bossy -= 20;
			}
			frame++;
			frame2++;
			if (me_Start_x < -200) {
				me_Start_x += 5;
			}
			if (me_attack_activate == 1 && frame3 < 24) {
				frame3++;
			}
			/*else {
				frame3 = 1;
			}*/
			if (death == 1) {
				frame4++;
			}
			fps3 = 0;
		}
		//RESETA FRAME
		if (frame == 4) {
			frame = 1;
		}
		if (frame2 == 7) {
			frame2 = 0;
		}
		//ANIMACAO NUVEM
		if (cx >= 50) {
			cx = -1580;
		}
	}
	else if (winner_winner_chicken_dinner == 0) {

		if (fpscount == 1) {
			fps = 1 + clock();
			fps2 += 1;
			fps3 += 10;
			fps4 += 2;
			fpscount = 0;

			if (wait_for_it < 301) {
				wait_for_it++;
			}
			if (boss_attack_activate == 1 && attack_count < 101 && talkin_on_off != 1) {
				attack_count++;
			}
			if (talk_activate >= 1 && talk_activate <= 900) {
				talk_activate++;
			}
			if (talk_activate >= 700) {
				talk_bind = 1;
			}
			if (talk_activate >= 900) {
				talk_bind = 2;
				talkin_on_off = 0;
			}
		}

		if (fps <= clock()) {
			fpscount = 1;

			if (lifebar_X != 0) {
				lifebar_X += 10;
				lifebar2_X -= 10;
			}
			if (laser_frame >= 6 && lifeB_x >= -455) {
				lifeB_x -= 5;
			}
			if (lifeB_x == -455) {
				death = 1;
			}
		}

		if (fps2 == 5) {
			fps2 = 0;
			cx += 2;

			if (boss_attack_activate == 2) {
				meteor_x -= 80;
				meteor_y += 30;
				if (meteor_frame < 7) {
					meteor_frame++;
				}
				else {
					meteor_frame = 1;
				}
			}
			if (bossy <= 15 && wait_for_it >= 300) {
				bossy += bossyacce;
				bossyacce += 2.0f;
			}
			if (bossy >= -20 && bosson != 2 && wait_for_it >= 300) {
				bossyacce -= 30.0f;
				bosson++;
			}
			if (bosson == 2) {
				boss_attack_activate = 1;
			}
			if (attack_count >= 100) {
				boss_attack_activate = 2;
			}
		}

		if (fps3 == 100) {

			if (dey == 5 && meteor_y >= 200) {
				if (frame4 < 8) {
					explosion++;
					frame4++;
				}			
			}

			if (boss_attack_activate == 1 && W_bossy > -400) {
				W_bossy -= 20;
			}
			if (death == 1) {
				death_frame++;
			}

			if (boss_attack_activate == 2 && laser_frame < 30) {
				laser_frame++;
			}

			frame++;
			frame2++;
			if (me_Start_x < -200) {
				me_Start_x += 5;
			}
			if (me_attack_activate == 1 && frame3 < 24) {
				frame3++;
			}
			/*else {
				frame3 = 1;
			}*/
			fps3 = 0;
		}

		if (frame == 4) {
			frame = 1;
		}
		if (frame2 == 7) {
			frame2 = 0;
		}
		if (cx >= 50) {
			cx = -1580;
		}
		if (death_frame == 30) {
			Gamecontroller::SwitchLevel(new WinLoss());
		}
	}

	if (fps4 == 12) {
		mecha_frame++;
		if (mecha_frame == 15) {
			mecha_frame = 1;
		}
		if (mecha_x > 0) {
			mecha_x -= 10;
		}
		fps4 = 0;
	}

	if (YES_NO == 1) {
		if (winner_winner_chicken_dinner == 1) {
			if (wins_losses_flag == 0) {
				cracks += (bets * 2) + 2;
				wins++;
				wins_losses_flag = 1;
			}
		}
		else if (winner_winner_chicken_dinner == 0) {
			if (wins_losses_flag == 0) {
				c_lost = 1;
				losses++;
				wins_losses_flag = 1;
			}
		}
	}
	else if (YES_NO == 0) {
		if (winner_winner_chicken_dinner == 0) {
			if (wins_losses_flag == 0) {
				cracks += (bets * 2);
				wins++;
				wins_losses_flag = 1;
			}
		}
		else if (winner_winner_chicken_dinner == 1) {
			if (wins_losses_flag == 0) {
				c_lost = 1;
				losses++;
				wins_losses_flag = 1;
			}
		}
	}


	return 4;
}

void historylvl2::render() {	

	if (fpscount == 1) {
		gfx->BeginDraw();
		if (dey == 1) {
			day1();
		}
		else if (dey == 2) {
			day2();
		}
		else if (dey == 3) {
			day3();
		}
		else if (dey == 4) {
			day4();
		}
		else if (dey == 5) {
			day5();
		}
		gfx->EndDraw();
	}
}

void historylvl2::laserdraw(){
	float x = 1060;
	float x2 = 85;

	float xx=1088;
	float xx2 = 85;

	if (boss_attack_activate == 2) {

		if (laser_frame == 6)explosion = 1;
		if (laser_frame == 7)explosion = 0;
		if (laser_frame == 8)explosion = 1;
		if (laser_frame == 9)explosion = 0;
		if (laser_frame == 10)explosion = 1;
		if (laser_frame == 11)explosion = 0;
		if (laser_frame == 12)explosion = 1;
		if (laser_frame == 13)explosion = 0;
		if (laser_frame == 14)explosion = 1;
		if (laser_frame == 15)explosion = 0;

		if (dey != 4) {

			if (laser_frame == 0)Lasersprite->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 1)Lasersprite2->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 2)Lasersprite3->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 3)Lasersprite4->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
		}
		if (laser_frame == 6)Laser_body->drawwith(1092, 715, 85, 470, 1.0f);
		if (laser_frame == 7)Laser_body->drawwith(1082, 715, 75, 470, 1.0f);
		if (laser_frame == 8)Laser_body->drawwith(1092, 725, 85, 480, 1.0f);
		if (laser_frame == 9)Laser_body->drawwith(1092, 715, 85, 470, 1.0f);
		if (laser_frame == 10)Laser_body->drawwith(1082, 715, 75, 470, 1.0f);
		if (laser_frame == 11)Laser_body->drawwith(1092, 705, 85, 460, 1.0f);
		if (laser_frame == 12)Laser_body->drawwith(1102, 715, 95, 470, 1.0f);
		if (laser_frame == 13)Laser_body->drawwith(1092, 715, 85, 470, 1.0f);
		if (laser_frame == 14)Laser_body->drawwith(1082, 725, 75, 480, 1.0f);

		if (laser_frame == 6)Lasers_end1->drawwith(375, 800, 25, 220, 1.0f);
		if (laser_frame == 7)Lasers_end2->drawwith(380, 800, 30, 220, 1.0f);
		if (laser_frame == 8)Lasers_end3->drawwith(375, 805, 25, 225, 1.0f);
		if (laser_frame == 9)Lasers_end4->drawwith(370, 800, 20, 220, 1.0f);
		if (laser_frame == 10)Lasers_end5->drawwith(375, 795, 25, 215, 1.0f);
		if (laser_frame == 11)Lasers_end6->drawwith(375, 800, 25, 220, 1.0f);
		if (laser_frame == 12)Lasers_end7->drawwith(380, 800, 30, 220, 1.0f);
		if (laser_frame == 13)Lasers_end8->drawwith(375, 805, 25, 225, 1.0f);
		if (laser_frame == 14)Lasers_end9->drawwith(370, 800, 20, 220, 1.0f);

		if (dey != 4) {
			if (laser_frame == 4)Lasersprite5->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 5)Lasersprite6->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 6)Lasersprite7->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 7)Lasersprite8->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 8)Lasersprite9->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 9)Lasersprite10->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 10)Lasersprite11->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 11)Lasersprite12->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 12)Lasersprite13->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 13)Lasersprite14->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 14)Lasersprite15->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 15)Lasersprite16->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 16)Lasersprite17->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 17)Lasersprite18->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 18)Lasersprite19->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 19)Lasersprite20->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 20)Lasersprite21->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 21)Lasersprite22->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);
			if (laser_frame == 22)Lasersprite23->drawwith(xx, 615 + bossy, xx2, 570 + bossy, 1.0f);

			if (laser_frame == 0)Lasersprite->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 1)Lasersprite2->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 2)Lasersprite3->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 3)Lasersprite4->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 4)Lasersprite5->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 5)Lasersprite6->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 6)Lasersprite7->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 7)Lasersprite8->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 8)Lasersprite9->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 9)Lasersprite10->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 10)Lasersprite11->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 11)Lasersprite12->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 12)Lasersprite13->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 13)Lasersprite14->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 14)Lasersprite15->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 15)Lasersprite16->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 16)Lasersprite17->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 17)Lasersprite18->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 18)Lasersprite19->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 19)Lasersprite20->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 20)Lasersprite21->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 21)Lasersprite22->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
			if (laser_frame == 22)Lasersprite23->drawwith(x, 610 + bossy, x2, 565 + bossy, 1.0f);
		}
	}
}

void historylvl2::data(struct items* Items, struct battle_alg* B_Alg, int* crackin, int* yeano, int* day, int* win, 
	int* loses, float* W_S_alg, int* beted, int* lost) {

	if (data_flag == 1) {
		cracks = *crackin;
		Class2_B_alg = *B_Alg;
		YES_NO = *yeano;
		bets = *beted;
		wins = *win;
		losses = *loses;
		c_lost = *lost;
		dey = *day;

		if (Class2_B_alg.boss_diff > Class2_B_alg.my_diff) {
			winner_winner_chicken_dinner = 0;
		}
		else if (Class2_B_alg.boss_diff < Class2_B_alg.my_diff) {
			winner_winner_chicken_dinner = 1;
		}
		else if (Class2_B_alg.boss_diff == Class2_B_alg.my_diff) {
			winner_winner_chicken_dinner = 2;
		}
		data_flag = 0;
	}
	//winner_winner_chicken_dinner=
	*lost = c_lost;
	*crackin = cracks;
	*win = wins;
	*loses = losses;
	*beted = bets;
}

void historylvl2::day1() {

	if (winner_winner_chicken_dinner == 1) {

		float x = 620;
		float y = 360;
		float y2 = 320;

		wchar_t my_talk[100];
		wchar_t boss_talk[100];
		wcscpy_s(my_talk, 100, L"EAE, PARTIU TIRAR 10");
		wcscpy_s(boss_talk, 100, L"QUERO VER CARA PALIDA");

		cldbckgrd->drawwith(3244 + cx, 375, cx, 0, 1.0f);

		if (explosion == 1 || poop_hit == 1)bckgrd->drawwith(1320, 760, 0, 0, 1.0f);
		else bckgrd->drawwith(NULL, 750, 1.0f);

		if (boss_attack_activate != 2 && std_animation != 1 && (poop_y < 520 || poop_y > 605) && death != 1)boss->drawwith(1159, 659 + bossy, 1000, 500 + bossy, 1.0f);

		//if (frame == 10)sprite7->drawwith(x + x2, y + y2, x2, y2, 1.0f);

		if (me_Start_x < -200) {
			if (frame == 1)me_walkin1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 2)me_walkin2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 3)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		else {
			if (frame2 >= 0 && frame2 < 3 && me_attack_activate != 1)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame2 >= 3 && me_attack_activate != 1)me_walkin2_2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		if (boss_attack_activate == 2) {
			boss_inclined->drawwith(1159 + boss_attack_xlr8, 659 + bossy, 1000 + boss_attack_xlr8, 500 + bossy, 1.0f);
		}
		if (talk_activate >= 510) {
			if (talk_bind == 0)dialog_box->drawwith(305, 522, 30, 460, 1.0f);
			if (talk_bind == 1)dialog_box_reverse->drawwith(1145, 542, 840, 480, 1.0f);
			if (talk_bind == 0)gfx->Drawtext(my_talk, D2D1::ColorF::Black, 20.0f, 515, 505, 42, 465);
			if (talk_bind == 1)gfx->Drawtext(boss_talk, D2D1::ColorF::Black, 20.0f, 1325, 525, 852, 485);

			//if (talk_bind == 2 && winner_winner_chicken_dinner == 0 && lifeB_x >= -475)lifeB_x -= 5;
			//if (talk_bind == 2 && winner_winner_chicken_dinner == 1 && lifeB_x2 <= 475)lifeB_x2 += 5;
		}

		if (explosion == 1)explosion_animation1->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 2)explosion_animation2->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 3)explosion_animation3->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 4)explosion_animation4->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 5)explosion_animation5->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 6)explosion_animation6->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 7)explosion_animation7->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 8)explosion_animation8->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 9)explosion_animation9->drawwith(424, 924, -200, 320, 1.0f);

		if (me_attack_activate == 1) {

			if (frame3 == 1) smoke1->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 >= 2) poop->drawwith(190, 685, 30, 515, 1.0f);
			if (frame3 == 2) smoke2->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 3) smoke3->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 4) smoke4->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 5) smoke5->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 6) smoke6->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 7) smoke7->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 8) smoke8->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 9) smoke9->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 10) smoke10->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 >= 23) {

				if (poop_y >= 520 && poop_y <= 600) {
					boss_red->drawwith(1159, 659, 1000, 500, 1.0f);
					if (poop_hit == 2) {
						poop_hit = -1;
					}
					if (poop_hit == 1) {
						poop_hit = 2;
					}
					if (poop_hit == 0) {
						poop_hit = 1;
					}
				}

				poop->drawwith(1150, 60 + poop_y, 1080, poop_y - 10, 1.0f);
				poop->drawwith(1100, 60 + poop_y, 1030, poop_y - 10, 1.0f);
				poop->drawwith(1120, poop_y, 1050, -70 + poop_y, 1.0f);
				poop->drawwith(1150, poop_y, 1080, -70 + poop_y, 1.0f);
				poop->drawwith(1100, poop_y, 1030, -70 + poop_y, 1.0f);
				poop->drawwith(1120, -30 + poop_y, 1050, -100 + poop_y, 1.0f);
			}
		}

		if (frame4 == 1)explosion2_animation1->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 2)explosion2_animation2->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 3)explosion2_animation3->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 4)explosion2_animation4->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 5)explosion2_animation5->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 6)explosion2_animation6->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 7)explosion2_animation7->drawwith(1324, 824, 750, 420, 1.0f);

		bar_red->drawwith(502 + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		bar_red_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifebar2_X, 12, 1.0f);
		bar_green->drawwith(502 + lifeB_x + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		if (lifeB_x2 < 499)bar_green_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifeB_x2 + lifebar2_X, 12, 1.0f);
		my_life_bar->drawwith(505 + lifebar_X, 104, 10 + lifebar_X, 10, 1.0f);
		boss_life_raul->drawwith(1275 + lifebar2_X, 104, 770 + lifebar2_X, 10, 1.0f);
	}
	else if (winner_winner_chicken_dinner == 0) {
		float x = 620;
		float y = 360;
		float y2 = 320;

		wchar_t my_talk[100];
		wchar_t boss_talk[100];
		wcscpy_s(my_talk, 100, L"EAE, PARTIU TIRAR 10");
		wcscpy_s(boss_talk, 100, L"QUERO VER CARA PALIDA");

		cldbckgrd->drawwith(3244 + cx, 375, cx, 0, 1.0f);

		if (explosion == 1 || poop_hit == 1)bckgrd->drawwith(1320, 760, 0, 0, 1.0f);
		else bckgrd->drawwith(NULL, 750, 1.0f);

		if (std_animation != 1 && (poop_y < 520 || poop_y > 605))boss->drawwith(1159, 659 + bossy, 1000, 500 + bossy, 1.0f);

		//if (frame == 10)sprite7->drawwith(x + x2, y + y2, x2, y2, 1.0f);

		if (me_Start_x < -200) {
			if (frame == 1)me_walkin1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 2)me_walkin2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 3)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		else {
			if (frame2 >= 0 && frame2 < 3 && me_attack_activate != 1 && death != 1)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame2 >= 3 && me_attack_activate != 1 && death != 1)me_walkin2_2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
			if (death_frame == 0) my_death_animation1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (death_frame == 1) my_death_animation2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (death_frame == 2) my_death_animation3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (death_frame == 3) my_death_animation4->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (death_frame == 4) my_death_animation5->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (death_frame == 5) my_death_animation6->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (death_frame == 6) my_death_animation7->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (death_frame == 7) my_death_animation8->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (death_frame == 8) my_death_animation9->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (death_frame == 9) my_death_animation10->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (death_frame >= 10) my_death_animation11->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		

		if (talk_activate >= 510) {
			if (talk_bind == 0)dialog_box->drawwith(305, 522, 30, 460, 1.0f);
			if (talk_bind == 1)dialog_box_reverse->drawwith(1145, 542, 840, 480, 1.0f);
			if (talk_bind == 0)gfx->Drawtext(my_talk, D2D1::ColorF::Black, 20.0f, 515, 505, 42, 465);
			if (talk_bind == 1)gfx->Drawtext(boss_talk, D2D1::ColorF::Black, 20.0f, 1325, 525, 852, 485);
		}
		laserdraw();

		bar_red->drawwith(502 + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		bar_red_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifebar2_X, 12, 1.0f);
		if (lifeB_x > -455)bar_green->drawwith(502 + lifeB_x + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		if (lifeB_x2 < 499)bar_green_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifeB_x2 + lifebar2_X, 12, 1.0f);
		my_life_bar->drawwith(505 + lifebar_X, 104, 10 + lifebar_X, 10, 1.0f);
		boss_life_raul->drawwith(1275 + lifebar2_X, 104, 770 + lifebar2_X, 10, 1.0f);
	}
}

void historylvl2::day2() {

	if (winner_winner_chicken_dinner == 1) {

		float x = 620;
		float y = 360;
		float y2 = 320;

		wchar_t my_talk[100];
		wchar_t boss_talk[100];
		wcscpy_s(my_talk, 100, L"EAE, PARTIU TIRAR 10");
		wcscpy_s(boss_talk, 100, L"QUERO VER GALADO");

		cldbckgrd->drawwith(3244 + cx, 375, cx, 0, 1.0f);

		if (explosion == 1 || poop_hit == 1)bckgrd->drawwith(1320, 760, 0, 0, 1.0f);
		else bckgrd->drawwith(NULL, 750, 1.0f);

		if (boss_attack_activate != 2 && std_animation != 1 && (poop_y < 520 || poop_y > 605) && death != 1 && portal >= 7)B_boss->drawwith(1159, 679 , 1000, 520 , 1.0f);

		//if (frame == 10)sprite7->drawwith(x + x2, y + y2, x2, y2, 1.0f);

		if (me_Start_x < -200) {
			if (frame == 1)me_walkin1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 2)me_walkin2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 3)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		else {
			if (frame2 >= 0 && frame2 < 3 && me_attack_activate != 1)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame2 >= 3 && me_attack_activate != 1)me_walkin2_2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		if (boss_attack_activate == 2) {
			B_boss_inclined->drawwith(1159 + boss_attack_xlr8, 659 + bossy, 1000 + boss_attack_xlr8, 500 + bossy, 1.0f);
		}
		if (portal == 1)portal1->drawwith(1250, 790, 890, 430, 1.0f);
		if (portal == 2)portal2->drawwith(1250, 790, 890, 430, 1.0f);
		if (portal == 3)portal3->drawwith(1250, 790, 890, 430, 1.0f);
		if (portal == 4)portal4->drawwith(1250, 790, 890, 430, 1.0f);
		if (portal == 5)portal5->drawwith(1250, 790, 890, 430, 1.0f);
		if (portal == 6)portal6->drawwith(1250, 790, 890, 430, 1.0f);
		if (portal == 7)portal7->drawwith(1250, 790, 890, 430, 1.0f);
		if (portal == 8)portal8->drawwith(1250, 790, 890, 430, 1.0f);
		if (portal == 9)portal9->drawwith(1250, 790, 890, 430, 1.0f);
		if (portal == 10)portal10->drawwith(1250, 790, 890, 430, 1.0f);
		if (portal == 11)portal11->drawwith(1250, 790, 890, 430, 1.0f);


		if (talk_activate >= 510) {
			if (talk_bind == 0)dialog_box->drawwith(305, 522, 30, 460, 1.0f);
			if (talk_bind == 1)dialog_box_reverse->drawwith(1145, 522, 840, 460, 1.0f);
			if (talk_bind == 0)gfx->Drawtext(my_talk, D2D1::ColorF::Black, 20.0f, 515, 505, 42, 465);
			if (talk_bind == 1)gfx->Drawtext(boss_talk, D2D1::ColorF::Black, 20.0f, 1345, 505, 872, 465);
			//if (talk_bind == 2 && winner_winner_chicken_dinner == 0 && lifeB_x >= -475)lifeB_x -= 5;
			//if (talk_bind == 2 && winner_winner_chicken_dinner == 1 && lifeB_x2 <= 475)lifeB_x2 += 5;
		}

		if (explosion == 1)explosion_animation1->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 2)explosion_animation2->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 3)explosion_animation3->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 4)explosion_animation4->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 5)explosion_animation5->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 6)explosion_animation6->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 7)explosion_animation7->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 8)explosion_animation8->drawwith(424, 924, -200, 320, 1.0f);
		if (explosion == 9)explosion_animation9->drawwith(424, 924, -200, 320, 1.0f);

		if (me_attack_activate == 1) {

			if (frame3 == 1) smoke1->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 >= 2) poop->drawwith(190, 685, 30, 515, 1.0f);
			if (frame3 == 2) smoke2->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 3) smoke3->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 4) smoke4->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 5) smoke5->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 6) smoke6->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 7) smoke7->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 8) smoke8->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 9) smoke9->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 10) smoke10->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 >= 23) {

				if (poop_y >= 520 && poop_y <= 600) {
					B_boss_red->drawwith(1159, 659, 1000, 500, 1.0f);
					if (poop_hit == 2) {
						poop_hit = -1;
					}
					if (poop_hit == 1) {
						poop_hit = 2;
					}
					if (poop_hit == 0) {
						poop_hit = 1;
					}
				}

				poop->drawwith(1150, 60 + poop_y, 1080, poop_y - 10, 1.0f);
				poop->drawwith(1100, 60 + poop_y, 1030, poop_y - 10, 1.0f);
				poop->drawwith(1120, poop_y, 1050, -70 + poop_y, 1.0f);
				poop->drawwith(1150, poop_y, 1080, -70 + poop_y, 1.0f);
				poop->drawwith(1100, poop_y, 1030, -70 + poop_y, 1.0f);
				poop->drawwith(1120, -30 + poop_y, 1050, -100 + poop_y, 1.0f);
			}
		}

		if (frame4 == 1)explosion2_animation1->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 2)explosion2_animation2->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 3)explosion2_animation3->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 4)explosion2_animation4->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 5)explosion2_animation5->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 6)explosion2_animation6->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 7)explosion2_animation7->drawwith(1324, 824, 750, 420, 1.0f);

		bar_red->drawwith(502 + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		bar_red_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifebar2_X, 12, 1.0f);
		bar_green->drawwith(502 + lifeB_x + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		if (lifeB_x2 < 499)bar_green_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifeB_x2 + lifebar2_X, 12, 1.0f);
		my_life_bar->drawwith(505 + lifebar_X, 104, 10 + lifebar_X, 10, 1.0f);
		boss_life_bruno->drawwith(1275 + lifebar2_X, 104, 770 + lifebar2_X, 10, 1.0f);
	}
	else if (winner_winner_chicken_dinner == 0) {
		float x = 620;
		float y = 360;
		float y2 = 320;

		wchar_t my_talk[100];
		wchar_t boss_talk[100];
		wcscpy_s(my_talk, 100, L"EAE, PARTIU TIRAR 10");
		wcscpy_s(boss_talk, 100, L"QUERO VER CARA PALIDA");

		cldbckgrd->drawwith(3244 + cx, 375, cx, 0, 1.0f);

		if (explosion == 1 || poop_hit == 1)bckgrd->drawwith(1320, 760, 0, 0, 1.0f);
		else bckgrd->drawwith(NULL, 750, 1.0f);

		if (std_animation != 1 && (poop_y < 520 || poop_y > 605))B_boss->drawwith(1159, 659 + bossy, 1000, 500 + bossy, 1.0f);

		//if (frame == 10)sprite7->drawwith(x + x2, y + y2, x2, y2, 1.0f);

		if (me_Start_x < -200) {
			if (frame == 1)me_walkin1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 2)me_walkin2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 3)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		else {
			if (frame2 >= 0 && frame2 < 3 && me_attack_activate != 1 && death != 1)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame2 >= 3 && me_attack_activate != 1 && death != 1)me_walkin2_2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		if (death_frame == 0) my_death_animation1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 1) my_death_animation2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 2) my_death_animation3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 3) my_death_animation4->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 4) my_death_animation5->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 5) my_death_animation6->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 6) my_death_animation7->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 7) my_death_animation8->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 8) my_death_animation9->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 9) my_death_animation10->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame >= 10) my_death_animation11->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);


		if (talk_activate >= 510) {
			if (talk_bind == 0)dialog_box->drawwith(305, 522, 30, 460, 1.0f);
			if (talk_bind == 1)dialog_box_reverse->drawwith(1145, 542, 840, 480, 1.0f);
			if (talk_bind == 0)gfx->Drawtext(my_talk, D2D1::ColorF::Black, 20.0f, 515, 505, 42, 465);
			if (talk_bind == 1)gfx->Drawtext(boss_talk, D2D1::ColorF::Black, 20.0f, 1325, 525, 852, 485);
		}
		laserdraw();

		bar_red->drawwith(502 + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		bar_red_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifebar2_X, 12, 1.0f);
		if (lifeB_x > -455)bar_green->drawwith(502 + lifeB_x + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		if (lifeB_x2 < 499)bar_green_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifeB_x2 + lifebar2_X, 12, 1.0f);
		my_life_bar->drawwith(505 + lifebar_X, 104, 10 + lifebar_X, 10, 1.0f);
		boss_life_bruno->drawwith(1275 + lifebar2_X, 104, 770 + lifebar2_X, 10, 1.0f);
	}
}

void historylvl2::day3() {

	if (winner_winner_chicken_dinner == 1) {

		float x = 620;
		float y = 360;
		float y2 = 320;

		wchar_t my_talk[100];
		wchar_t boss_talk[100];
		wcscpy_s(my_talk, 100, L"EAE, PARTIU TIRAR 10");
		wcscpy_s(boss_talk, 100, L"ENTÃO... ISSO É CIÊNCIA");

		cldbckgrd->drawwith(3244 + cx, 375, cx, 0, 1.0f);

		 bckgrd->drawwith(NULL, 750, 1.0f);

		P_boss->drawwith(1170, 640 + bossy, 1000, 381 + bossy, 1.0f);

		//if (frame == 10)sprite7->drawwith(x + x2, y + y2, x2, y2, 1.0f);

		if (me_Start_x < -200) {
			if (frame == 1)me_walkin1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 2)me_walkin2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 3)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		else {
			if (frame2 >= 0 && frame2 < 3)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame2 >= 3)me_walkin2_2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		if (talk_activate >= 510) {
			if (talk_bind == 0)dialog_box->drawwith(305, 522, 30, 460, 1.0f);
			if (talk_bind == 1)dialog_box_reverse->drawwith(1145, 542, 840, 480, 1.0f);
			if (talk_bind == 0)gfx->Drawtext(my_talk, D2D1::ColorF::Black, 20.0f, 515, 505, 42, 465);
			if (talk_bind == 1)gfx->Drawtext(boss_talk, D2D1::ColorF::Black, 20.0f, 1325, 525, 852, 485);

			//if (talk_bind == 2 && winner_winner_chicken_dinner == 0 && lifeB_x >= -475)lifeB_x -= 5;
			//if (talk_bind == 2 && winner_winner_chicken_dinner == 1 && lifeB_x2 <= 475)lifeB_x2 += 5;
		}

		bar_red->drawwith(502 + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		bar_red_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifebar2_X, 12, 1.0f);
		bar_green->drawwith(502 + lifeB_x + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		if (lifeB_x2 < 499)bar_green_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifeB_x2 + lifebar2_X, 12, 1.0f);
		my_life_bar->drawwith(505 + lifebar_X, 104, 10 + lifebar_X, 10, 1.0f);
		boss_life_pires->drawwith(1275 + lifebar2_X, 104, 770 + lifebar2_X, 10, 1.0f);
	}
	else if (winner_winner_chicken_dinner == 0) {
		float x = 620;
		float y = 360;
		float y2 = 320;

		wchar_t my_talk[100];
		wchar_t boss_talk[100];
		wcscpy_s(my_talk, 100, L"EAE, PARTIU TIRAR 10");
		wcscpy_s(boss_talk, 100, L"QUERO VER CARA PALIDA");

		cldbckgrd->drawwith(3244 + cx, 375, cx, 0, 1.0f);

		if (explosion == 1 || poop_hit == 1)bckgrd->drawwith(1320, 760, 0, 0, 1.0f);
		else bckgrd->drawwith(NULL, 750, 1.0f);

		if (std_animation != 1 && (poop_y < 520 || poop_y > 605))P_boss->drawwith(1159, 659 + bossy, 1000, 500 + bossy, 1.0f);

		//if (frame == 10)sprite7->drawwith(x + x2, y + y2, x2, y2, 1.0f);

		if (me_Start_x < -200) {
			if (frame == 1)me_walkin1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 2)me_walkin2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 3)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		else {
			if (frame2 >= 0 && frame2 < 3 && me_attack_activate != 1 && death != 1)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame2 >= 3 && me_attack_activate != 1 && death != 1)me_walkin2_2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		if (death_frame == 0) my_death_animation1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 1) my_death_animation2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 2) my_death_animation3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 3) my_death_animation4->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 4) my_death_animation5->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 5) my_death_animation6->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 6) my_death_animation7->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 7) my_death_animation8->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 8) my_death_animation9->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 9) my_death_animation10->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame >= 10) my_death_animation11->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);


		if (talk_activate >= 510) {
			if (talk_bind == 0)dialog_box->drawwith(305, 522, 30, 460, 1.0f);
			if (talk_bind == 1)dialog_box_reverse->drawwith(1145, 542, 840, 480, 1.0f);
			if (talk_bind == 0)gfx->Drawtext(my_talk, D2D1::ColorF::Black, 20.0f, 515, 505, 42, 465);
			if (talk_bind == 1)gfx->Drawtext(boss_talk, D2D1::ColorF::Black, 20.0f, 1325, 525, 852, 485);
		}
		laserdraw();

		bar_red->drawwith(502 + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		bar_red_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifebar2_X, 12, 1.0f);
		if (lifeB_x > -455)bar_green->drawwith(502 + lifeB_x + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		if (lifeB_x2 < 499)bar_green_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifeB_x2 + lifebar2_X, 12, 1.0f);
		my_life_bar->drawwith(505 + lifebar_X, 104, 10 + lifebar_X, 10, 1.0f);
		boss_life_pires->drawwith(1275 + lifebar2_X, 104, 770 + lifebar2_X, 10, 1.0f);
	}
}

void historylvl2::day4() {

	if (winner_winner_chicken_dinner == 1) {

		float x = 620;
		float y = 360;
		float y2 = 320;

		wchar_t my_talk[100];
		wchar_t boss_talk[100];
		wcscpy_s(my_talk, 100, L"EAE, PARTIU TIRAR 10");
		wcscpy_s(boss_talk, 100, L"QUERO VER VOCÊ ME CONVERCER, SÃ?");

		cldbckgrd->drawwith(3244 + cx, 375, cx, 0, 1.0f);

		if (poop_hit == 1)bckgrd->drawwith(1320, 760, 0, 0, 1.0f);
		else bckgrd->drawwith(NULL, 750, 1.0f);

		mecha_walk();


		if (me_Start_x < -200) {
			if (frame == 1)me_walkin1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 2)me_walkin2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 3)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		else {
			if (frame2 >= 0 && frame2 < 3 && me_attack_activate != 1)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame2 >= 3 && me_attack_activate != 1)me_walkin2_2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		if (boss_attack_activate == 2) {
			me_attack_activate = 1;
		}
		if (talk_activate >= 510) {
			if (talk_bind == 0)dialog_box->drawwith(305, 522, 30, 460, 1.0f);
			if (talk_bind == 1)dialog_box_reverse->drawwith(1145, 542, 640, 480, 1.0f);
			if (talk_bind == 0)gfx->Drawtext(my_talk, D2D1::ColorF::Black, 20.0f, 515, 505, 42, 465);
			if (talk_bind == 1)gfx->Drawtext(boss_talk, D2D1::ColorF::Black, 20.0f, 1325, 525, 682, 485);

			//if (talk_bind == 2 && winner_winner_chicken_dinner == 0 && lifeB_x >= -475)lifeB_x -= 5;
			//if (talk_bind == 2 && winner_winner_chicken_dinner == 1 && lifeB_x2 <= 475)lifeB_x2 += 5;
		}

		if (me_attack_activate == 1) {

			if (frame3 == 1) smoke1->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 >= 2) poop->drawwith(190, 685, 30, 515, 1.0f);
			if (frame3 == 2) smoke2->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 3) smoke3->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 4) smoke4->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 5) smoke5->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 6) smoke6->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 7) smoke7->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 8) smoke8->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 9) smoke9->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 10) smoke10->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 >= 23) {

				if (poop_y >= 420 && poop_y <= 500) {
					mecha_boss_red->drawwith(1200, 700, 950, 450, 1.0f);
					if (poop_hit == 2) {
						poop_hit = -1;
					}
					if (poop_hit == 1) {
						poop_hit = 2;
					}
					if (poop_hit == 0) {
						poop_hit = 1;
					}
				}

				poop->drawwith(1150, 60 + poop_y, 1080, poop_y - 10, 1.0f);
				poop->drawwith(1100, 60 + poop_y, 1030, poop_y - 10, 1.0f);
				poop->drawwith(1120, poop_y, 1050, -70 + poop_y, 1.0f);
				poop->drawwith(1150, poop_y, 1080, -70 + poop_y, 1.0f);
				poop->drawwith(1100, poop_y, 1030, -70 + poop_y, 1.0f);
				poop->drawwith(1120, -30 + poop_y, 1050, -100 + poop_y, 1.0f);
			}
		}

		if (frame4 == 1)explosion2_animation1->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 2)explosion2_animation2->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 3)explosion2_animation3->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 4)explosion2_animation4->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 5)explosion2_animation5->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 6)explosion2_animation6->drawwith(1324, 824, 750, 420, 1.0f);
		if (frame4 == 7)explosion2_animation7->drawwith(1324, 824, 750, 420, 1.0f);

		bar_red->drawwith(502 + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		bar_red_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifebar2_X, 12, 1.0f);
		bar_green->drawwith(502 + lifeB_x + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		if (lifeB_x2 < 499)bar_green_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifeB_x2 + lifebar2_X, 12, 1.0f);
		my_life_bar->drawwith(505 + lifebar_X, 104, 10 + lifebar_X, 10, 1.0f);
		boss_life_mechalberto->drawwith(1275 + lifebar2_X, 104, 770 + lifebar2_X, 10, 1.0f);
	}
	else if (winner_winner_chicken_dinner == 0) {
		float x = 620;
		float y = 360;
		float y2 = 320;

		wchar_t my_talk[100];
		wchar_t boss_talk[100];
		wcscpy_s(my_talk, 100, L"EAE, PARTIU TIRAR 10");
		wcscpy_s(boss_talk, 100, L"QUERO VER VOCÊ ME CONVERCER, SÃ?");

		cldbckgrd->drawwith(3244 + cx, 375, cx, 0, 1.0f);

		if (explosion == 1 || poop_hit == 1)bckgrd->drawwith(1320, 760, 0, 0, 1.0f);
		else bckgrd->drawwith(NULL, 750, 1.0f);

		mecha_walk();


		if (me_Start_x < -200) {
			if (frame == 1)me_walkin1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 2)me_walkin2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 3)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		else {
			if (frame2 >= 0 && frame2 < 3 && me_attack_activate != 1 && death != 1)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame2 >= 3 && me_attack_activate != 1 && death != 1)me_walkin2_2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}

		if (talk_activate >= 510) {
			if (talk_bind == 0)dialog_box->drawwith(305, 522, 30, 460, 1.0f);
			if (talk_bind == 1)dialog_box_reverse->drawwith(1145, 542, 640, 480, 1.0f);
			if (talk_bind == 0)gfx->Drawtext(my_talk, D2D1::ColorF::Black, 20.0f, 515, 505, 42, 465);
			if (talk_bind == 1)gfx->Drawtext(boss_talk, D2D1::ColorF::Black, 20.0f, 1325, 525, 682, 485);
		}

		if (death_frame == 0) my_death_animation1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 1) my_death_animation2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 2) my_death_animation3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 3) my_death_animation4->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 4) my_death_animation5->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 5) my_death_animation6->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 6) my_death_animation7->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 7) my_death_animation8->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 8) my_death_animation9->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame == 9) my_death_animation10->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (death_frame >= 10) my_death_animation11->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);

		laserdraw();

		bar_red->drawwith(502 + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		bar_red_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifebar2_X, 12, 1.0f);
		if (lifeB_x > -455)bar_green->drawwith(502 + lifeB_x + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		if (lifeB_x2 < 499)bar_green_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifeB_x2 + lifebar2_X, 12, 1.0f);
		my_life_bar->drawwith(505 + lifebar_X, 104, 10 + lifebar_X, 10, 1.0f);
		boss_life_mechalberto->drawwith(1275 + lifebar2_X, 104, 770 + lifebar2_X, 10, 1.0f);
	}
}

void historylvl2::day5() {

	if (winner_winner_chicken_dinner == 1) {

		float x = 620;
		float y = 360;
		float y2 = 320;

		wchar_t my_talk[100];
		wchar_t boss_talk[100];
		wcscpy_s(my_talk, 100, L"EAE, PARTIU TIRAR 10");
		wcscpy_s(boss_talk, 100, L"ACHE A NORMAL");



		cldbckgrd->drawwith(3244 + cx, 375, cx, 0, 1.0f);

		if (poop_y >= 50 && poop_y <= 180) {
			W_boss_red->drawwith(412, 900 + W_bossy, 0, 330 + W_bossy, 1.0f);
			if (poop_hit == 2) {
				poop_hit = -1;
			}
			if (poop_hit == 1) {
				poop_hit = 2;
			}
			if (poop_hit == 0) {
				poop_hit = 1;
			}
		}

		if(poop_y < 50)W_boss->drawwith(412, 920+W_bossy, 0, 350+W_bossy, 1.0f);
		if (poop_hit == 1)bckgrd->drawwith(1320, 760, 0, 0, 1.0f);
		else bckgrd->drawwith(NULL, 750, 1.0f);



		if (me_Start_x < -200) {
			if (frame == 1)me_walkin1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 2)me_walkin2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame == 3)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		else {
			if (frame2 >= 0 && frame2 < 3 && me_attack_activate != 1)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
			if (frame2 >= 3 && me_attack_activate != 1)me_walkin2_2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		}
		if (boss_attack_activate == 2) {
			me_attack_activate = 1;
		}
		if (talk_activate >= 510) {
			if (talk_bind == 0)dialog_box->drawwith(305, 522, 30, 460, 1.0f);
			if (talk_bind == 1)dialog_box->drawwith(545, 300, 310, 225, 1.0f);
			if (talk_bind == 0)gfx->Drawtext(my_talk, D2D1::ColorF::Black, 20.0f, 515, 505, 42, 465);
			if (talk_bind == 1)gfx->Drawtext(boss_talk, D2D1::ColorF::Black, 20.0f, 775, 310, 335, 235);

			//if (talk_bind == 2 && winner_winner_chicken_dinner == 0 && lifeB_x >= -475)lifeB_x -= 5;
			//if (talk_bind == 2 && winner_winner_chicken_dinner == 1 && lifeB_x2 <= 475)lifeB_x2 += 5;
		}

		if (me_attack_activate == 1) {

			if (frame3 == 1) smoke1->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 >= 2) poop->drawwith(190, 685, 30, 515, 1.0f);
			if (frame3 == 2) smoke2->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 3) smoke3->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 4) smoke4->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 5) smoke5->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 6) smoke6->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 7) smoke7->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 8) smoke8->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 9) smoke9->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 == 10) smoke10->drawwith(206, 256 + 560, 0, 390, 1.0f);
			if (frame3 >= 23) {

				

				poop->drawwith(250, 60 + poop_y, 180, poop_y - 10, 1.0f);
				poop->drawwith(200, 60 + poop_y, 130, poop_y - 10, 1.0f);
				poop->drawwith(220, poop_y, 150, -70 + poop_y, 1.0f);
				poop->drawwith(250, poop_y, 180, -70 + poop_y, 1.0f);
				poop->drawwith(200, poop_y, 130, -70 + poop_y, 1.0f);
				poop->drawwith(220, -30 + poop_y, 150, -100 + poop_y, 1.0f);
			}
		}
		int ekiz=505;
		int uai=520;
		int ekiz2=-140;
		int uai2=0;
		if (frame4 == 1)explosion2_animation1->drawwith(ekiz, uai, ekiz2, uai2, 1.0f);
		if (frame4 == 2)explosion2_animation2->drawwith(ekiz, uai, ekiz2, uai2, 1.0f);
		if (frame4 == 3)explosion2_animation3->drawwith(ekiz, uai, ekiz2, uai2, 1.0f);
		if (frame4 == 4)explosion2_animation4->drawwith(ekiz, uai, ekiz2, uai2, 1.0f);
		if (frame4 == 5)explosion2_animation5->drawwith(ekiz, uai, ekiz2, uai2, 1.0f);
		if (frame4 == 6)explosion2_animation6->drawwith(ekiz, uai, ekiz2, uai2, 1.0f);
		if (frame4 == 7)explosion2_animation7->drawwith(ekiz, uai, ekiz2, uai2, 1.0f);

		bar_red->drawwith(502 + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		bar_red_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifebar2_X, 12, 1.0f);
		bar_green->drawwith(502 + lifeB_x + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
		if (lifeB_x2 < 499)bar_green_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifeB_x2 + lifebar2_X, 12, 1.0f);
		my_life_bar->drawwith(505 + lifebar_X, 104, 10 + lifebar_X, 10, 1.0f);
		boss_life_wilfredo->drawwith(1275 + lifebar2_X, 104, 770 + lifebar2_X, 10, 1.0f);
	}
	else if (winner_winner_chicken_dinner == 0) {
	float x = 620;
	float y = 360;
	float y2 = 320;

	wchar_t my_talk[100];
	wchar_t boss_talk[100];
	wcscpy_s(my_talk, 100, L"EAE, PARTIU TIRAR 10");
	wcscpy_s(boss_talk, 100, L"ACHE A NORMAL");

	cldbckgrd->drawwith(3244 + cx, 375, cx, 0, 1.0f);
	W_boss->drawwith(412, 920 + W_bossy, 0, 350 + W_bossy, 1.0f);
	if (explosion == 1)bckgrd->drawwith(1320, 760, 0, 0, 1.0f);
	else bckgrd->drawwith(NULL, 750, 1.0f);

	if (me_Start_x < -200) {
		if (frame == 1)me_walkin1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (frame == 2)me_walkin2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (frame == 3)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
	}
	else {
		if (frame2 >= 0 && frame2 < 3 && me_attack_activate != 1 && death_frame < 1)me_walkin3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
		if (frame2 >= 3 && me_attack_activate != 1 && death_frame<1)me_walkin2_2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
	}
	if (boss_attack_activate == 2) {
		
	}
	if (talk_activate >= 510) {
		if (talk_bind == 0)dialog_box->drawwith(305, 522, 30, 460, 1.0f);
		if (talk_bind == 1)dialog_box->drawwith(545, 300, 310, 225, 1.0f);
		if (talk_bind == 0)gfx->Drawtext(my_talk, D2D1::ColorF::Black, 20.0f, 515, 505, 42, 465);
		if (talk_bind == 1)gfx->Drawtext(boss_talk, D2D1::ColorF::Black, 20.0f, 775, 310, 335, 235);

		//if (talk_bind == 2 && winner_winner_chicken_dinner == 0 && lifeB_x >= -475)lifeB_x -= 5;
		//if (talk_bind == 2 && winner_winner_chicken_dinner == 1 && lifeB_x2 <= 475)lifeB_x2 += 5;
	}

	if (boss_attack_activate == 2 && meteor_frame == 1)Meteor->drawwith(1280+meteor_x, 600+meteor_y, 480+meteor_x, 0+meteor_y, 1.0f);
	if (boss_attack_activate == 2 && meteor_frame == 2)Meteor2->drawwith(1280 + meteor_x, 600 + meteor_y, 480 + meteor_x, 0 + meteor_y, 1.0f);
	if (boss_attack_activate == 2 && meteor_frame == 3)Meteor3->drawwith(1280 + meteor_x, 600 + meteor_y, 480 + meteor_x, 0 + meteor_y, 1.0f);
	if (boss_attack_activate == 2 && meteor_frame == 4)Meteor4->drawwith(1280 + meteor_x, 600 + meteor_y, 480 + meteor_x, 0 + meteor_y, 1.0f);
	if (boss_attack_activate == 2 && meteor_frame == 5)Meteor5->drawwith(1280 + meteor_x, 600 + meteor_y, 480 + meteor_x, 0 + meteor_y, 1.0f);
	if (boss_attack_activate == 2 && meteor_frame >= 6)Meteor6->drawwith(1280 + meteor_x, 600 + meteor_y, 480 + meteor_x, 0 + meteor_y, 1.0f);

	if (death_frame == 0) my_death_animation1->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
	if (death_frame == 1) my_death_animation2->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
	if (death_frame == 2) my_death_animation3->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
	if (death_frame == 3) my_death_animation4->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
	if (death_frame == 4) my_death_animation5->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
	if (death_frame == 5) my_death_animation6->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
	if (death_frame == 6) my_death_animation7->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
	if (death_frame == 7) my_death_animation8->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
	if (death_frame == 8) my_death_animation9->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
	if (death_frame == 9) my_death_animation10->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);
	if (death_frame >= 10) my_death_animation11->drawwith(x + me_Start_x, y + y2, me_Start_x, y2, 1.0f);


	int ekiz = 505;
	int uai = 950;
	int ekiz2 = -180;
	int uai2 = 300;
	if (frame4 == 1)explosion_animation1->drawwith(ekiz, uai, ekiz2, uai2, 1.0f);
	if (frame4 == 2)explosion_animation2->drawwith(ekiz, uai, ekiz2, uai2, 1.0f);
	if (frame4 == 3)explosion_animation3->drawwith(ekiz, uai, ekiz2, uai2, 1.0f);
	if (frame4 == 4)explosion_animation4->drawwith(ekiz, uai, ekiz2, uai2, 1.0f);
	if (frame4 == 5)explosion_animation5->drawwith(ekiz, uai, ekiz2, uai2, 1.0f);
	if (frame4 == 6)explosion_animation6->drawwith(ekiz, uai, ekiz2, uai2, 1.0f);
	if (frame4 == 7)explosion_animation7->drawwith(ekiz, uai, ekiz2, uai2, 1.0f);


	bar_red->drawwith(502 + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
	bar_red_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifebar2_X, 12, 1.0f);
	if (lifeB_x > -455)bar_green->drawwith(502 + lifeB_x + lifebar_X, 62, 32 + lifebar_X, 12, 1.0f);
	if (lifeB_x2 < 499)bar_green_reverse->drawwith(1262 + lifebar2_X, 62, 770 + lifeB_x2 + lifebar2_X, 12, 1.0f);
	my_life_bar->drawwith(505 + lifebar_X, 104, 10 + lifebar_X, 10, 1.0f);
	boss_life_wilfredo->drawwith(1275 + lifebar2_X, 104, 770 + lifebar2_X, 10, 1.0f);
	}
}

void historylvl2::mecha_walk() {
	int x,x2,y,y2;
	x = 1200;
	y = 680;
	x2 = 1000;
	y2 = 480;

	x += mecha_x;
	x2 += mecha_x;

	if (mecha_frame == 1 && mecha_x != 0)Mechalberto_boss1->drawwith(x, y, x2, y2, 1.0f);
	if (mecha_frame == 2 && mecha_x != 0)Mechalberto_boss2->drawwith(x, y, x2, y2, 1.0f);
	if (mecha_frame == 3 && mecha_x != 0)Mechalberto_boss3->drawwith(x, y, x2, y2, 1.0f);
	if (mecha_frame == 4 && mecha_x != 0)Mechalberto_boss4->drawwith(x, y, x2, y2, 1.0f);
	if (mecha_frame == 5 && mecha_x != 0)Mechalberto_boss5->drawwith(x, y, x2, y2, 1.0f);
	if (mecha_frame == 6 && mecha_x != 0)Mechalberto_boss6->drawwith(x, y, x2, y2, 1.0f);
	if (mecha_frame == 7 && mecha_x != 0)Mechalberto_boss7->drawwith(x, y, x2, y2, 1.0f);
	if (mecha_frame == 8 && mecha_x != 0)Mechalberto_boss8->drawwith(x, y, x2, y2, 1.0f);
	if (mecha_frame == 9 && mecha_x != 0)Mechalberto_boss9->drawwith(x, y, x2, y2, 1.0f);
	if (mecha_frame == 10 && mecha_x != 0)Mechalberto_boss10->drawwith(x, y, x2, y2, 1.0f);
	if (mecha_frame == 11 && mecha_x != 0)Mechalberto_boss11->drawwith(x, y, x2, y2, 1.0f);
	if (mecha_frame == 12 && mecha_x != 0)Mechalberto_boss12->drawwith(x, y, x2, y2, 1.0f);
	if (mecha_frame == 13 && mecha_x != 0)Mechalberto_boss13->drawwith(x, y, x2, y2, 1.0f);
	if (mecha_frame == 14 && mecha_x != 0)Mechalberto_boss14->drawwith(x, y, x2, y2, 1.0f);
	
	if (winner_winner_chicken_dinner == 0)if (mecha_x == 0||death==1)  Mechalberto_boss1->drawwith(x, y, x2, y2, 1.0f);
	if (winner_winner_chicken_dinner == 1)if ((mecha_x == 0 || death == 1) && poop_y<420)  Mechalberto_boss1->drawwith(x, y, x2, y2, 1.0f);

}

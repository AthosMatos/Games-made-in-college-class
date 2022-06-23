#pragma once
#include "Gamemenu.h"

class Gamemenu2 : public Gamelevel {
	int u = 1;
	int fpscount = 1;
	clock_t fps;
	float x;
	float x2;
	float x3;
	float flag;
	float alpha;

	Spritesheet* sprite;
	Spritesheet* sprite2;
	Spritesheet* sprite3;
	Spritesheet* sprite4;
	Spritesheet* sprite5;

public:

	virtual void load() override;
	virtual void unload() override;
	virtual void update() override;
	virtual void render() override;
	virtual void check(MSG msg) override;
};
#pragma once
#include <wincodec.h>
#include "Graphics.h"

class Spritesheet {
	Graphics* gfx;
	ID2D1Bitmap* bmp;

public:
	Spritesheet(const wchar_t* filename,Graphics* gfx);
	~Spritesheet();

	void drawwith();
	void drawover(D2D1::ColorF::Enum color);
	void drawwith(float x, float y, float alpha);
	void drawover(float x, float y, float alpha, D2D1::ColorF::Enum color);
	void drawwith(float x, float y, float x2,float y2, float alpha);
	void drawover(float x, float y, float x2, float y2, float alpha, D2D1::ColorF::Enum color);
};
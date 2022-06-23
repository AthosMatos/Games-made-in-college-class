#pragma once
#include <d2d1.h>
#include<d2d1_1.h>
#include<Windows.h>
#include <string>

using namespace std;

class Graphics {
	ID2D1Factory* factory;
	ID2D1HwndRenderTarget* rendertarget;
	ID2D1SolidColorBrush* brsh;
	IDWriteFactory* writefactory;
	IDWriteTextFormat* TextFormat;
	UINT32 textsize;

public:
	Graphics();
	~Graphics();

	bool Init(HWND hwnd);

	ID2D1RenderTarget* getrendertarget() {
		return rendertarget;
	}

	void BeginDraw() {
		rendertarget->BeginDraw();
	}

	void ClearScreen(D2D1::ColorF::Enum color);
	void FillRectangle(float x, float y, float alpha, D2D1::ColorF::Enum color);
	void FillRectangle(float x, float y, float x2, float y2, float alpha, D2D1::ColorF::Enum color);
	void Drawtext(const wchar_t* text, D2D1::ColorF::Enum color, float size, float x, float y);
	void Drawtext(const wchar_t* text, D2D1::ColorF::Enum color, float size, float x, float y, float x2, float y2);
	void Rotate(int degrees);

	void EndDraw() {
		rendertarget->EndDraw();
	}
};
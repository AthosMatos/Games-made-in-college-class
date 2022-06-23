#include "Graphics.h"
#include <dwrite.h>

Graphics::Graphics() {
	factory = NULL;
	rendertarget = NULL;
	brsh = NULL;
	writefactory = NULL;
	TextFormat = NULL;
	textsize = NULL;
}

Graphics::~Graphics() {

	if (factory) { 
		factory->Release(); 
	}
	if (rendertarget) { 
		rendertarget->Release(); 
	}
	if (brsh) {
		brsh->Release();
	}
	if (writefactory) {
		writefactory->Release();
	}
	if (TextFormat) {
		TextFormat->Release();
	}
}

bool Graphics::Init(HWND hwnd) {
	
	HRESULT hr=D2D1CreateFactory(
		D2D1_FACTORY_TYPE_SINGLE_THREADED,
		&factory);

	if (hr != S_OK) { 
		return false; 
	}

	RECT rc;
	GetClientRect(hwnd, &rc);

	hr=factory->CreateHwndRenderTarget(
		D2D1::RenderTargetProperties(),
		D2D1::HwndRenderTargetProperties(
			hwnd, D2D1::SizeU(rc.right, rc.bottom)),
		&rendertarget);

	if (hr != S_OK) { 
		return false; 
	}

	hr = DWriteCreateFactory(
		DWRITE_FACTORY_TYPE_SHARED,
		__uuidof(IDWriteFactory),
		reinterpret_cast<IUnknown**>(&writefactory)
	);

	if (hr != S_OK) {
		return false;
	}

	return true;
}

void Graphics::ClearScreen(D2D1::ColorF::Enum color) {

	rendertarget->Clear(D2D1::ColorF(color));

}
void Graphics::FillRectangle(float x, float y, float alpha, D2D1::ColorF::Enum color) {


	rendertarget->CreateSolidColorBrush(D2D1::ColorF(color,alpha), &brsh);
	D2D1_RECT_F rect = D2D1::RectF(1280 - x, 720 - y, x, y);
	rendertarget->FillRectangle(&rect, brsh);

}

void Graphics::FillRectangle(float x, float y, float x2, float y2, float alpha, D2D1::ColorF::Enum color) {


	rendertarget->CreateSolidColorBrush(D2D1::ColorF(color,alpha), &brsh);
	D2D1_RECT_F rect = D2D1::RectF(x2, y2, x, y);
	rendertarget->FillRectangle(&rect, brsh);

}

void Graphics::Drawtext(const wchar_t* text, D2D1::ColorF::Enum color, float size, float x, float y) {

	writefactory->CreateTextFormat(
		L"Symtext",
		NULL,
		DWRITE_FONT_WEIGHT_REGULAR,
		DWRITE_FONT_STYLE_NORMAL,
		DWRITE_FONT_STRETCH_NORMAL,
		size,
		L"en-us",
		&TextFormat
	);

	D2D1_RECT_F rect = D2D1::RectF(1280 - x, 720 - y, x, y);

	textsize = (UINT32)wcslen(text);

	rendertarget->CreateSolidColorBrush(D2D1::ColorF(color), &brsh);

	rendertarget->DrawText(text, textsize, TextFormat, rect, brsh);

}

void Graphics::Drawtext(const wchar_t* text, D2D1::ColorF::Enum color, float size, float x, float y, float x2, float y2) {

	writefactory->CreateTextFormat(
		L"Symtext",
		NULL,
		DWRITE_FONT_WEIGHT_REGULAR,
		DWRITE_FONT_STYLE_NORMAL,
		DWRITE_FONT_STRETCH_NORMAL,
		size,
		L"en-us",
		&TextFormat
	);

	D2D1_RECT_F rect = D2D1::RectF(x2, y2, x, y);

	textsize = (UINT32)wcslen(text);

	rendertarget->CreateSolidColorBrush(D2D1::ColorF(color), &brsh);

	rendertarget->DrawText(text, textsize, TextFormat, rect, brsh);

}
void Graphics::Rotate(int degrees) {
	rendertarget->SetTransform(D2D1::Matrix3x2F::Rotation(degrees));
}
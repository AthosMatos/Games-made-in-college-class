#include "spritesheet.h"

Spritesheet::Spritesheet(const wchar_t* filename, Graphics* gfx) {
	this->gfx = gfx;
	bmp = NULL;
	HRESULT hr;

	IWICImagingFactory* wicfactory;
	hr=CoCreateInstance(
		CLSID_WICImagingFactory,
		NULL,
		CLSCTX_INPROC_SERVER,
		IID_IWICImagingFactory,
		(LPVOID*)&wicfactory
	);
	if (hr != S_OK) {
		return;
	}
	IWICBitmapDecoder* wicdecoder = NULL;
	hr = wicfactory->CreateDecoderFromFilename(
		filename,
		NULL,
		GENERIC_READ,
		WICDecodeMetadataCacheOnLoad,
		&wicdecoder
	);
	if (hr != S_OK) {
		return;
	}
	IWICBitmapFrameDecode* wicframe = NULL;
	hr = wicdecoder->GetFrame(0, &wicframe);
	if (hr != S_OK) {
		return;
	}
	IWICFormatConverter* wicconverter = NULL;
	hr = wicfactory->CreateFormatConverter(&wicconverter);
	if (hr != S_OK) {
		return;
	}
	hr = wicconverter->Initialize(
		wicframe,
		GUID_WICPixelFormat32bppPBGRA,
		WICBitmapDitherTypeNone,
		NULL,
		0.0,
		WICBitmapPaletteTypeCustom
	);
	gfx->getrendertarget()->CreateBitmapFromWicBitmap(
		wicconverter,
		NULL,
		&bmp
	);

	//gfx->getrendertarget()->SetTransform(D2D1::Matrix3x2F::Rotation(20));
	//gfx->getrendertarget()->SetTransform(D2D1::Matrix3x2F::Rotation(0));

	if (wicfactory)wicfactory->Release();
	if (wicdecoder)wicdecoder->Release();
	if (wicconverter)wicconverter->Release();
	if (wicframe)wicframe->Release();
	
}

Spritesheet::~Spritesheet() {
	if (bmp)bmp->Release();
}

void Spritesheet::drawwith() {
	gfx->getrendertarget()->DrawBitmap(
		bmp,
		D2D1::RectF(0.0f, 0.0f, bmp->GetSize().width, bmp->GetSize().height),
		1.0f,
		D2D1_BITMAP_INTERPOLATION_MODE::D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR,
		D2D1::RectF(0.0f, 0.0f, bmp->GetSize().width, bmp->GetSize().height)
	);
}

void Spritesheet::drawwith(float x, float y, float alpha) {
	if (x == NULL) { x = bmp->GetSize().width; }
	if (y == NULL) { y = bmp->GetSize().height; }

	gfx->getrendertarget()->DrawBitmap(
		bmp,
		D2D1::RectF(1280-x, 720-y, x, y),
		alpha,
		D2D1_BITMAP_INTERPOLATION_MODE::D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR,
		D2D1::RectF(0.0f, 0.0f, bmp->GetSize().width, bmp->GetSize().height)
	);
}

void Spritesheet::drawwith(float x, float y, float x2, float y2, float alpha) {
	if (x == NULL) { x = bmp->GetSize().width; }
	if (y == NULL) { y = bmp->GetSize().height; }
	if (x2 == NULL) { x2 = 0.0f; }
	if (y2 == NULL) { y2 = 0.0f; }

	gfx->getrendertarget()->DrawBitmap(
		bmp,
		D2D1::RectF(x2, y2, x, y),
		alpha,
		D2D1_BITMAP_INTERPOLATION_MODE::D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR,
		D2D1::RectF(0.0f, 0.0f, bmp->GetSize().width, bmp->GetSize().height)
	);
}


void Spritesheet::drawover(float x, float y, float x2, float y2, float alpha,D2D1::ColorF::Enum color) {
	if (x == NULL) { x = bmp->GetSize().width; }
	if (y == NULL) { y = bmp->GetSize().height; }
	if (x2 == NULL) { x2 = 0.0f; }
	if (y2 == NULL) { y2 = 0.0f; }

	gfx->ClearScreen(color);

	gfx->getrendertarget()->DrawBitmap(
		bmp,
		D2D1::RectF(x2, y2, x, y),
		alpha,
		D2D1_BITMAP_INTERPOLATION_MODE::D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR,
		D2D1::RectF(0.0f, 0.0f, bmp->GetSize().width, bmp->GetSize().height)
	);

}

void Spritesheet::drawover(D2D1::ColorF::Enum color) {

	gfx->ClearScreen(color);

	gfx->getrendertarget()->DrawBitmap(
		bmp,
		D2D1::RectF(0.0f, 0.0f, bmp->GetSize().width, bmp->GetSize().height),
		1.0f,
		D2D1_BITMAP_INTERPOLATION_MODE::D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR,
		D2D1::RectF(0.0f, 0.0f, bmp->GetSize().width, bmp->GetSize().height)
	);

}

void Spritesheet::drawover(float x, float y, float alpha, D2D1::ColorF::Enum color) {
	if (x == NULL) { x = bmp->GetSize().width; }
	if (y == NULL) { y = bmp->GetSize().height; }

	gfx->ClearScreen(color);

	gfx->getrendertarget()->DrawBitmap(
		bmp,
		D2D1::RectF(1280 - x, 720 - y, x, y),
		alpha,
		D2D1_BITMAP_INTERPOLATION_MODE::D2D1_BITMAP_INTERPOLATION_MODE_NEAREST_NEIGHBOR,
		D2D1::RectF(0.0f, 0.0f, bmp->GetSize().width, bmp->GetSize().height)
	);
}








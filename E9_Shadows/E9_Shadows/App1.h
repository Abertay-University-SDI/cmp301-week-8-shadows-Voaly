// Application.h
#ifndef _APP1_H
#define _APP1_H

// Includes
#include "DXF.h"	// include dxframework
#include "TextureShader.h"
#include "ShadowShader.h"
#include "DepthShader.h"

class App1 : public BaseApplication
{
public:

	App1();
	~App1();
	void init(HINSTANCE hinstance, HWND hwnd, int screenWidth, int screenHeight, Input* in, bool VSYNC, bool FULL_SCREEN);

	bool frame();

protected:
	bool render();
	void depthPass();
	void firstPass();
	void finalPass();
	void gui();

private:
	TextureShader* textureShader;
	PlaneMesh* mesh;

	Light* light;
	AModel* model;
	ShadowShader* shadowShader;
	DepthShader* depthShader;

	ShadowMap* shadowMap;

	OrthoMesh* orthoMesh1;

	RenderTexture* renderTexture1;


	float speed = 5.0f;


	XMFLOAT3 positionOfLight = XMFLOAT3(0.0f, -0.7f, 0.7f);
	XMFLOAT3 directionOfLight = XMFLOAT3(0.0f, 0.0f, -10.f);


};

#endif
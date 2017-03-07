#pragma once
#include "d3d9.h"
struct CUSTOMVERTEX
{
	FLOAT x, y, z,rhw;
	DWORD color;
};
#define D3DFVF_CUSTOMVERTEX (D3DFVF_XYZRHW | D3DFVF_DIFFUSE)
class CTriangle
{
private:
	LPDIRECT3DDEVICE9 m_pd3dDevice;
	LPDIRECT3DVERTEXBUFFER9 m_pVB;

public:
	void OnInit(LPDIRECT3DDEVICE9 pd3dDevice);
	void OnRender();
	void OnRelease();
	CTriangle();
	~CTriangle();
};


#pragma once
#include "CD3DApp.h"
#include "d3dx9math.h"
#include "Axis.h"
#include "Triangle.h"
class CGameEdu :
	public CD3DApp
{
private:
	CTriangle m_Triangle;
private:
	virtual void OnInit();
	virtual void OnRender();
	virtual void OnUpdate();
	virtual void OnRelease();

	D3DXMATRIX m_matView;
	D3DXMATRIX m_matProj;
	D3DXVECTOR3 m_Eye, m_At, m_Up;
	CAxis m_Axis;
public:
	CGameEdu();
	~CGameEdu();
};


#pragma once
#include "d3d9.h"
class CD3DApp
{
protected:
	//Direct3D Device 전역변수
	LPDIRECT3D9 m_pD3D = NULL;
	LPDIRECT3DDEVICE9 m_pd3dDevice = NULL; //LP가 들어간것들은 전부 포인터 변수이다.
	HWND m_hWnd; //전역변수는 앞에 g 를 붙이고 핸들은 h를 붙여준다.

protected:
	virtual void OnInit() = 0;
	virtual void OnRender() = 0;
	virtual void OnUpdate() = 0;
	virtual void OnRelease() = 0;

public:
	HRESULT Init3D(HWND hWnd);
	void Update();
	void Render();
	void Release();

public:
	CD3DApp(void);
	~CD3DApp(void);
};


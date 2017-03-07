#pragma once
#include "d3d9.h"
class CD3DApp
{
protected:
	//Direct3D Device ��������
	LPDIRECT3D9 m_pD3D = NULL;
	LPDIRECT3DDEVICE9 m_pd3dDevice = NULL; //LP�� ���͵��� ���� ������ �����̴�.
	HWND m_hWnd; //���������� �տ� g �� ���̰� �ڵ��� h�� �ٿ��ش�.

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


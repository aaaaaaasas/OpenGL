#pragma once
#include<windows.h>
#include<string>
#include "GLRenderer.h"
class Engine
{
public:
	Engine(HINSTANCE hInstance, std::string window_class);
	~Engine();
	bool Initialize(std::string window_titlw, int width, int height,
		int nCmdShow);
	bool RegisterWindowClass();

	bool ProcessMessage();
	void Close();
	void Renderer();
private:
	static LRESULT HandleMessageSetup(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	static LRESULT HandleMsgRedirect(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	LRESULT WinProc(HWND hwnd, UINT uMsg, WPARAM wParam, LPARAM lParam);
	void OnStart();
	void OnClose();
private:
	HWND handle;
	HINSTANCE hInstance;
	std::string window_title;
	std::wstring window_title_wide;
	std::string window_class;
	std::wstring window_class_wide;
	int width;
	int height;
	GLRenderer* renderer = nullptr;
};


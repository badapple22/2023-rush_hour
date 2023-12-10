#pragma once
#include "consola.h"
#include "Model.h"
#include <iostream>
#include <conio.h>
using namespace std;
#define LEFTKEY 0xe04b
#define RIGHTKEY 0xe04d
#define UPKEY 0xe048
#define DOWNKEY 0xe050
#define _NOCURSOR



//프로그램이 사용자와 인터페이스 하는 역할 담당 (입출력 등)
//맵그리기
class View
{
	int posx = 0;
	int posy = 0;
	int oldx = 0;
	int oldy = 0;
	int x1 = 0;
	int y1 = 0;
	int x2 = 6;
	int y2 = 6;

	View() {
		

	}

	void xyputstr(int x, int y, const char str[])
	{
		gotoxy(x, y);
		textbackground(RED);
		cout << str << endl;
	}

	void fillbox(int x1, int y1, int x2, int y2, char color)
	{
		textbackground(color);
		for (int x = x1; x < x2; ++x)
		{
			for (int y = y1; y < y2; ++y)
			{
				xyputstr(x, y, " ");
			}
		}
	}

	int getkey()
	{
		int ch = _getch();
		return (ch != 0xe0) ? ch : (0xe000 | _getch());

	}

	void key_set()
	{
		xyputstr(posx, posy, "☆");
		while (1)
		{
			int key = getkey();
			oldx = posx;
			oldy = posy;
			switch (key)
			{
			case LEFTKEY: if (posx > 2) posx -= 2; break;
			case UPKEY: if (posy > 1) posy--; break;
			case DOWNKEY: if (posy < 7) posy++; break;
			case RIGHTKEY: if (posx < 7) posx += 2; break;
			}
			if (oldx != posx || oldy != posy)
			{
				xyputstr(oldx, oldy, " ");
				xyputstr(posx, posy, "☆");
			}
		}
	}
};


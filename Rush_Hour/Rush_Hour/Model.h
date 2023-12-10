#pragma once
#include "consola.h"
#include <iostream>
#define LEFTKEY 0xe04b
#define RIGHTKEY 0xe04d
#define UPKEY 0xe048
#define DOWNKEY 0xe050
//레벨들: https://theplayfulotter.blogspot.com/2015/03/rush-hour-jr.html
//프로그램에서 다루는 주요 데이터 저장 및 관리
//맵 데이터, 키 지정 etc..
class Model
{



	//맵 데이터. 0: 빈길, 1: 벽, 2: 캐릭터, 3~12: 장애물, (7,3):출구

	const char* cellSymbol[12] = {" ", "■", "★", "＃", "＆", "＠", "※", "○", "◆", "▲", "♣", "♣"};

	int mapData[8][8] = {
		{1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,0},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1},
		{1,0,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1}
	};
	//레벨1
	int mapData_Lv1[8][8] = {
		{1,1,1,1,1,1,1,1},
		{1,0,0,0,5,0,0,1},
		{1,0,0,0,5,0,0,1},
		{1,2,2,0,5,0,0,0},
		{1,3,4,4,4,0,0,1},
		{1,3,0,0,0,0,0,1},
		{1,3,0,0,0,0,0,1},
		{1,1,1,1,1,1,1,1}
	};
	//레벨2
	int mapData_Lv2[8][8] = {
		{1,1,1,1,1,1,1,1},
		{1,0,0,0,0,0,0,1},
		{1,0,0,6,0,4,0,1},
		{1,2,2,6,0,4,12,0},
		{1,3,3,3,0,4,12,1},
		{1,7,8,9,0,11,11,1},
		{1,7,8,9,0,10,10,1},
		{1,1,1,1,1,1,1,1}
	};

public:

	Model() {

	}

};



/*

	int posx = 0;
	int posy = 0;
	int oldx = 0;
	int oldy = 0;
	int x1 = 0;
	int y1 = 0;
	int x2 = 6;
	int y2 = 6;

public:
	View() {
	int posx = 0;
	int posy = 0;
	int oldx = 0;
	int oldy = 0;
	int x1 = 0;
	int y1 = 0;
	int x2 = 6;
	int y2 = 6;


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

*/
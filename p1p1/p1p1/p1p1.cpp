#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "consola.h"
#include <conio.h>
#define _NOCURSOR
#define LEFTKEY 0xe04b
#define RIGHTKEY 0xe04d
#define UPKEY 0xe048
#define DOWNKEY 0xe050
using namespace std;

int getkey()
{
    int ch = _getch();
    return (ch != 0xe0) ? ch : (0xe000 | _getch());

}

void xyputstr(int x, int y, const char str[])
{
    gotoxy(x, y);
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


int main(void)
{ 
    int posx = 4;
    int posy = 2;
    int oldx = 0;
    int oldy = 0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 24;
    int y2 = 12;

    fillbox(x1 + 1, y1 + 1, x2 + 1, y2 + 1, DARKGRAY);
    fillbox(x1, y1, x2, y2, YELLOW);



    xyputstr(posx, posy, "♥");
    while (1)
    {
        int key = getkey();
        oldx = posx;
        oldy = posy;
        switch (key)
        {
        case LEFTKEY: if (posx > 2) posx -= 2; break;
        case UPKEY: if (posy > 1) posy--; break;
        case DOWNKEY: if (posy < 11) posy++; break;
        case RIGHTKEY: if (posx < 22) posx += 2; break;
        }
        if (oldx != posx || oldy != posy)
        {
            xyputstr(oldx, oldy, " ");
            xyputstr(posx, posy, "♥");
        }
    }

    return 0;
}





/*
    int n = 8;
    int m = 6;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }

    /*
    ********
    ********
    ********
    ********
    ********
    ********
    8*6
    n*m
    *
    */


    /*
    int mapData[6][6] = {
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0},
        {0,0,0,0,0,0}
    };
    */


/*
void xyputc(int x, int y, char ch)
{
    gotoxy(x, y);
    cout << ch << endl;
}

void xyputstr(int x, int y, const char str[])
{
    gotoxy(x, y);
    cout << str << endl;
}

void fillbox(int x1, int y1, int x2, int y2, char color)
{
    for (x1; x1 < x2; ++x1)
    {
        for (y1; y1 < y2; ++y1)
        {
            textbackground(color);
        }
        cout << endl;
    }
}
*/

/*
    int x1 = 10;
    int y1 = 5;
    int x2 = 30;
    int y2 = 6;

    int xx1 = 10;
    int yy1 = 6;
    int xx2 = 30;
    int yy2 = 7;
    char str1[100] = "안녕하세요.";
    char str2[100] = "제 이름은 123 입니다.";
    textcolor(YELLOW);
    fillbox(x1, y1, x2, y2, BLUE);
    xyputstr(x1, y1, str1);
    textcolor(BLACK);
    fillbox(xx1, yy1, xx2, yy2, RED);
    xyputstr(xx1, yy1, str2);
    _setcursortype(_NOCURSOR);
*/


/*

const char* cellSymbol[] = {"□", " "};


    int mapData[6][6] = {
       {0,0,0,0,0,0},
       {0,0,0,0,0,0},
       {0,0,0,0,0,0},
       {0,0,0,0,0,0},
       {0,0,0,0,0,0},
       {0,0,0,0,0,0}
    };
    int MAP_X1 = 0;
    int MAP_Y1 = 0;
    int row = 0;
    int col = 0;

    int MAP_HEIGHT = 6;
    int MAP_WIDTH = 6;
    int cell = 0;
    for (int row = 0; row < MAP_HEIGHT; ++row)
        for (int col = 0; col < MAP_WIDTH; ++col)
            int cell = mapData[row][col];
            textbackground((cell == 1) ? DARKGRAY : YELLOW);
            gotoxy((MAP_X1 + col + 1) * 2, MAP_Y1 + row + 1);
            puts(cellSymbol[cell]);

*/















/*

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

const char* cellSymbol[12] = { " ", "■", "★", "＃", "＆", "＠", "※", "○", "◆", "▲", "♣", "♣" };

int MAP_X1 = 0;
int MAP_Y1 = 0;
int MAP_HEIGHT = 12;
int MAP_WIDTH = 24;

void drawCell(int col, int row)
{
    int cell = mapData_Lv1[col][row];
    textbackground((cell == 1) ? DARKGRAY : YELLOW);
    gotoxy((MAP_X1+ col + 1) * 2, MAP_Y1 + row + 1);
    puts(cellSymbol[cell]);

}

void drawMap()
{
    for (int row = 0; row < MAP_HEIGHT; ++row)
        for (int col = 0; col < MAP_WIDTH; ++col)
            drawCell(col, row);
}

*/






















/*





    int posx =4;
    int posy=2;
    int oldx=0;
    int oldy=0;
    int x1 = 0;
    int y1 = 0;
    int x2 = 24;
    int y2 = 12;

    fillbox(x1+1, y1+1, x2+1, y2+1, DARKGRAY);
    fillbox(x1, y1, x2, y2, YELLOW);



    xyputstr(posx, posy, "♥");
    while (1)
    {
        int key = getkey();
        oldx = posx;
        oldy = posy;
        switch (key)
        {
        case LEFTKEY: if (posx > 2) posx -= 2; break;
        case UPKEY: if (posy > 1) posy--; break;
        case DOWNKEY: if (posy < 11) posy++; break;
        case RIGHTKEY: if (posx < 22) posx += 2; break;
        }
        if (oldx != posx || oldy != posy)
        {
            xyputstr(oldx, oldy, " ");
            xyputstr(posx, posy, "♥");
        }
    }

*/
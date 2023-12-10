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

const char* cellSymbol[12] = {" ", "■", "★", "＃", "＆", "＠", "※", "○", "◆", "▲", "♣", "♣"};

int MAP_X1 = 0;
int MAP_Y1 = 0;
int MAP_HEIGHT = 24;
int MAP_WIDTH = 12;

void drawCell(int col, int row)
{
    int cell = mapData_Lv1[col][row];
    textbackground((cell == 1) ? DARKGRAY : YELLOW);
    gotoxy((MAP_X1 + col + 1) * 2, MAP_Y1 + row + 1);
    puts(cellSymbol[cell]);

}

void drawMap()
{
    for (int row = 0; row < MAP_HEIGHT; ++row)
        for (int col = 0; col < MAP_WIDTH; ++col)
            drawCell(col, row);
}

int main(void)
{
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
    int MAP_HEIGHT = 8;
    int MAP_WIDTH = 8;
    int row = 8;
    int col = 8;

    drawMap();
    drawCell(col, row);

    
    return 0;
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.

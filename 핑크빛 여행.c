#include <stdio.h>
#include <string.h>//strlen
#include <windows.h>//sleep함수
#include <conio.h>//getch함수

#define one 49
#define two 50
#define UP 72
#define DOWN 80
#define LEFT 75     
#define RIGHT 77 
#define ENTER 13
void CursorView()//커서 없애는함수
{
	CONSOLE_CURSOR_INFO cursorInfo = { 0, };
	cursorInfo.dwSize = 1;
	cursorInfo.bVisible = FALSE;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cursorInfo);
}

void textcolor(int color_number)//색깔 넣는 함수

{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), color_number);
}

void gotoxy(int x, int y) //gotoxy함수를 호출해올 기본함수.
{
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int keeper(int(*map)[36], int X, int Y)//맵을 나가는것을 방지해주는 함수
{

	int checker;

	if (*(*(map + Y) + X) == 0) {
		checker = 1;
	} //좌표부분의 맵값이 0이면 1을 반환
	else if (*(*(map + Y) + X) == 2) {
		checker = 1;
	}
	else { checker = 0; } //0이 아니면 지나다니면 안된다는듯으로 0을 반환시킴. 

	return checker;
}

int keeper2(int(*map)[51], int X, int Y) { 

	int checker2;

	if (*(*(map + Y) + X) == 0) {
		checker2 = 1;
	}
	else if (*(*(map + Y) + X) == 2) {
		checker2 = 1;
	}
	else { checker2 = 0; }

	return checker2;
}

int main() {
	CursorView();
	system("mode con cols=100 lines=38");
	printf("                                                                                            \n");
	printf("                                                                                            \n");
	printf("                                                                                            \n");
	printf("                     Zw     ZZ     jWDDBB 8Z ,Z      WZZZZZZZ,         99j     Z            \n");
	printf("                     Z      zZ    BZyZZZZ 5Z  Z     jZ       Zw     wZZ8zZZZ   Z            \n");
	printf("                     ZZ     zZ    wZ      jZ  Z      Zj     5Z      Z      Z   Z            \n");
	printf("                   WZ EZ    zZ    wZZZZZE jZ WZ       WZZZZZW       ZZ     Z   Z            \n");
	printf("                 9ZZ    ZZ  zZ    wZ      jZ jZ   ZZZZy  W, jEZZZ    ZZZZZZ    Z            \n");
	printf("                            ZZ    yZ      WZ  Z   j,   Zy  ZZ wWj              Z            \n");
	printf("                    Zz      WZ    jZZZZZZ jZ  Z     9Z Z   ZE      5Wjj5DB89ZD Z            \n");
	printf("                    Z                     5Z  Z     ZZ W           ZZZZZZE9zBj Z            \n");
	printf("                    ZZZZZZZZZZ,           DZ ,Z     ZZZZZZZZZZZ                Z            \n");
	printf("                                                                                            \n");
	printf("                                                                                            \n");
	printf("                 yZ                      j     y   Z                     Z        9    y  Zy\n");
	printf("      yZZZZZZZZZ ZZ     ZZZZZZZZZZ5     zZ     Z   Z            ZZZZZ    ZW   98yZZ zZ Z8 ZZ\n");
	printf("        ZZ   Z   ZZ              Z8     WZZZZZZZ   Z           Z5   ZZZZZZ    Dw,zZ5 5 Z  Z8\n");
	printf("        DZ   Z   EZ              ZD     jZ     Z   Z          8Z     Z   Z     ZZ5WzZ, ZZZZ8\n");
	printf("      ZZZZ8ZZZ9Z ZZ    EZZZZZZZZZZ5     yZZZZZZZ   Z          ZZ     Z   Z     Z    ZZ Z  Z8\n");
	printf("      WW         DZ              ZW            W   Z           Z     ZZZZZ      ZZZZj  Z  ZZ\n");
	printf("          ZZZZZZZ9               Z       BZZZZZZZZZZE          ZZZzZZj   Z         ZZZZZZ8  \n");
	printf("        WZ       5Z   ZZZZZZZZZZZZZZZ         ZZ                 W8,     Z       ZZ       ZD\n");
	printf("         ZZ5   ,zZZ                      DZZZZ  ZZZZD                    Zw      ZZ      DZW\n");
	printf("           ZZZZZB                        Z9        BZ                    Z,        ZZZZZZ5  \n");
	gotoxy(42, 32);
	printf("게임 시작 (1)");
	gotoxy(42, 34);
	printf("게임 종료 (2)");

	int c;
A:

	c = _getch(); //입력값 input
	if (c == one) {}
	else if (c == two) exit(0);
	else goto A;
	char story1[100] = { "충정왕국의 왕자, x빈은 사과노예들을 부려먹기로 소문이 자자하다." };
	char story2[100] = { "하루종일 사과만 따는 사과노예 신태윤은 너무 배가 고팠다." };
	char story3[100] = { "배가 고픈 신태윤은 돈은 모으러 충청왕국을 탈출하게된다." };
	char story4[100] = { "그렇게 그의 핑크빛 여행이 시작되는데..." };
	//char con[100] = { "로..딩..중.." };
	char hoot[100] = { "x빈왕자: 오호라..아주 쉽게 탈출해쓔...아쉽워유..." };
	char next[100] = { "충청왕국을 탈출한 신태윤은 완도로 가서 돈을 벌기로한다." };
	char lala[100] = { "일이 빡센거 같지만 먹고재워주는 완도가 더 좋다고 생각한다" };

	char next2[100] = { "신태윤은 열심히 일했지만 그만큼의 수익이 나지 않았다." };
	char next3[100] = { "어느날, 신태윤은 마량에 엄청난 금덩어리가 있다는 소문을 들었다." };
	char next4[100] = { "그렇게 신태윤은 완도를 탈출 하기로 결심한다." };
	char hoot2[100] = { "완도의아들: 안돼!! 넌 내 노예야!" };
	char sal[100] = { "후욱..후욱..겨우 살았네.." };
	char sal2[100] = { "아직도 완도놈들이 쫓아오는거 같은데 놀토시장쪽에 들어가서 숨어야겠다..!" };
	char bomul[100] = { "아니 잠깐만...그것보다 보물이 더 중요해!!!" };
	char hoo[100] = { "그렇게 쉽게 있을 줄 알았나?..ㅋ" };
	char noyae[100] = { "어..? 여기가 어디지? 왜 내손에 전복이...?" };
	char ending[100] = { "신태윤은 기나긴 여정끝에 보물을 찾아 마량의 영웅이 되었다..." };
	int X = 4, Y = 3; //좌표값.
	int test, checker, checker2, helper, helper2, cnt = 0, cntp = 0, a;
	int map[20][36] = {
		{0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9},
		{1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9},
		{1,9,0,9,0,9,1,9,0,9,0,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9,0,9,0,9,1,9},
		{1,9,0,9,0,9,1,9,0,9,1,9,0,9,0,9,0,9,0,9,1,9,1,9,1,9,1,9,1,9,0,9,2,9,1,9},//하트 32,3
		{1,9,0,9,1,9,1,9,1,9,1,9,0,9,1,9,1,9,1,9,1,9,0,9,0,9,0,9,1,9,0,9,0,9,1,9},
		{1,9,0,9,0,9,0,9,0,9,1,9,0,9,0,9,1,9,0,9,0,9,0,9,1,9,0,9,0,9,0,9,0,9,1,9},
		{1,9,0,9,1,9,1,9,0,9,1,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,0,9,1,9},
		{1,9,0,9,0,9,1,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9,0,9,0,9,0,9,0,9,1,9},
		{1,9,1,9,0,9,1,9,0,9,1,9,1,9,0,9,1,9,1,9,1,9,0,9,1,9,0,9,1,9,0,9,0,9,1,9},
		{1,9,0,9,0,9,1,9,0,9,0,9,0,9,0,9,1,9,0,9,0,9,0,9,1,9,0,9,1,9,1,9,1,9,1,9},
		{1,9,0,9,1,9,1,9,1,9,0,9,0,9,1,9,0,9,0,9,1,9,0,9,1,9,0,9,0,9,0,9,0,9,1,9},
		{1,9,1,9,1,9,0,9,1,9,1,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,0,9,1,9,1,9,1,9},
		{1,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9,0,9,1,9,0,9,0,9,0,9,1,9,0,9,0,9,0,9,1,9},
		{1,9,0,9,1,9,0,9,1,9,1,9,1,9,0,9,0,9,0,9,0,9,1,9,0,9,1,9,1,9,1,9,0,9,1,9},
		{1,9,0,9,1,9,1,9,1,9,0,9,0,9,0,9,1,9,1,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,1,9},
		{1,9,0,9,0,9,1,9,0,9,0,9,1,9,0,9,0,9,1,9,1,9,1,9,0,9,1,9,0,9,1,9,1,9,1,9},
		{1,9,1,9,0,9,1,9,1,9,0,9,1,9,1,9,0,9,0,9,0,9,1,9,0,9,1,9,0,9,1,9,0,9,1,9},
		{1,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9,0,9,0,9,0,9,1,9,0,9,0,9,0,9,1,9},
		{1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9} };

	int map2[20][36] = {
		{0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9},
		{1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9},    //1
		{1,9,0,9,0,9,1,9,1,9,1,9,0,9,0,9,1,9,1,9,0,9,0,9,0,9,1,9,0,9,0,9,0,9,1,9},    //2
		{1,9,0,9,0,9,0,9,0,9,0,9,0,9,2,9,1,9,1,9,0,9,1,9,1,9,1,9,1,9,1,9,0,9,1,9},    //3
		{1,9,1,9,0,9,1,9,1,9,0,9,0,9,1,9,1,9,1,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,1,9},    //4
		{1,9,1,9,0,9,1,9,1,9,0,9,0,9,0,9,1,9,0,9,0,9,0,9,0,9,1,9,1,9,1,9,0,9,1,9},    //5
		{1,9,0,9,0,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9,0,9,0,9,1,9,1,9,0,9,1,9,0,9,1,9},    //6
		{1,9,1,9,1,9,0,9,0,9,0,9,0,9,1,9,1,9,1,9,0,9,0,9,1,9,1,9,0,9,0,9,0,9,1,9},    //7
		{1,9,1,9,1,9,0,9,0,9,1,9,0,9,1,9,1,9,1,9,0,9,1,9,1,9,0,9,0,9,0,9,0,9,1,9},    //8
		{1,9,0,9,0,9,0,9,1,9,1,9,0,9,0,9,0,9,1,9,0,9,1,9,1,9,1,9,0,9,0,9,1,9,1,9},    //9
		{1,9,1,9,0,9,1,9,1,9,1,9,0,9,1,9,1,9,1,9,0,9,1,9,0,9,1,9,0,9,0,9,1,9,1,9},    //10
		{1,9,1,9,0,9,1,9,0,9,0,9,1,9,1,9,1,9,0,9,1,9,1,9,0,9,1,9,0,9,1,9,1,9,1,9},    //11
		{1,9,1,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9,0,9,1,9,0,9,0,9,0,9,0,9,1,9,1,9,1,9},    //12
		{1,9,1,9,1,9,0,9,0,9,1,9,0,9,0,9,0,9,0,9,1,9,0,9,1,9,0,9,0,9,0,9,0,9,1,9},    //13
		{1,9,1,9,1,9,0,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9,0,9,1,9,0,9,1,9,0,9,1,9,1,9},    //14
		{1,9,0,9,0,9,0,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9,0,9,1,9,1,9,1,9,0,9,0,9,1,9},    //15
		{1,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,1,9,1,9,0,9,0,9,0,9,0,9,1,9,1,9,1,9,1,9},    //16
		{1,9,0,9,1,9,1,9,1,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9,1,9,0,9,0,9,1,9,1,9,1,9},    //17
		{1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9} };    //18

	int map3[20][36] = {
		{0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9},
		{1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9},    //1
		{1,9,0,9,0,9,0,9,0,9,1,9,1,9,1,9,1,9,0,9,0,9,0,9,1,9,1,9,0,9,0,9,2,9,1,9},    //2
		{1,9,0,9,0,9,1,9,0,9,0,9,0,9,0,9,1,9,0,9,1,9,0,9,1,9,1,9,0,9,1,9,1,9,1,9},    //3
		{1,9,0,9,1,9,1,9,1,9,0,9,1,9,1,9,1,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,1,9,1,9},    //4
		{1,9,0,9,1,9,1,9,1,9,1,9,0,9,1,9,1,9,0,9,1,9,1,9,1,9,0,9,1,9,1,9,1,9,1,9},    //5
		{1,9,0,9,0,9,0,9,1,9,1,9,0,9,1,9,0,9,0,9,0,9,1,9,0,9,0,9,1,9,0,9,0,9,1,9},    //6
		{1,9,0,9,1,9,1,9,1,9,1,9,0,9,1,9,1,9,1,9,0,9,1,9,1,9,1,9,1,9,0,9,0,9,1,9},    //7
		{1,9,0,9,0,9,0,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,1,9,0,9,1,9,1,9,0,9,1,9,1,9},    //8
		{1,9,1,9,0,9,1,9,1,9,1,9,1,9,1,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9},    //9
		{1,9,0,9,0,9,0,9,0,9,0,9,1,9,0,9,0,9,1,9,1,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9},    //10
		{1,9,1,9,0,9,1,9,1,9,0,9,1,9,0,9,0,9,1,9,1,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9},    //11
		{1,9,0,9,0,9,0,9,1,9,0,9,1,9,1,9,0,9,0,9,1,9,1,9,1,9,1,9,0,9,1,9,0,9,1,9},    //12
		{1,9,0,9,1,9,0,9,0,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9},    //13
		{1,9,0,9,1,9,1,9,1,9,1,9,1,9,0,9,1,9,1,9,0,9,1,9,1,9,0,9,0,9,0,9,1,9,1,9},    //14
		{1,9,0,9,0,9,0,9,1,9,1,9,1,9,0,9,1,9,0,9,0,9,1,9,0,9,0,9,1,9,1,9,1,9,1,9},    //15
		{1,9,1,9,0,9,1,9,1,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9,1,9,1,9},    //16
		{1,9,1,9,0,9,0,9,0,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,0,9,0,9,0,9,1,9},    //17
		{1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9} };    //18

	int map4[26][51] = {
		{0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9},
		{1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9},	//1
		{1,9,0,9,0,9,1,9,1,9,1,9,0,9,0,9,2,9,1,9,1,9,2,9,0,9,0,9,0,9,1,9,1,9,1,9,0,9,0,9,0,9,0,9,0,9,1,9,1,9},	//2
		{1,9,0,9,0,9,0,9,0,9,0,9,1,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9,0,9,0,9,1,9,1,9,2,9,1,9,0,9,1,9,0,9,1,9,1,9},	//3
		{1,9,0,9,1,9,1,9,0,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9,0,9,1,9,1,9,1,9,1,9,0,9,1,9,0,9,1,9,1,9},	//4
		{1,9,0,9,1,9,1,9,1,9,0,9,1,9,1,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9,0,9,1,9,0,9,0,9,1,9,0,9,1,9,0,9,2,9,1,9},	//5
		{1,9,0,9,0,9,2,9,1,9,0,9,1,9,1,9,0,9,1,9,0,9,1,9,2,9,1,9,1,9,0,9,1,9,0,9,2,9,1,9,0,9,1,9,1,9,1,9,1,9},	//6
		{1,9,1,9,1,9,1,9,1,9,0,9,0,9,0,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9,1,9,1,9},	//7
		{1,9,2,9,1,9,1,9,1,9,1,9,1,9,1,9,0,9,1,9,1,9,1,9,0,9,1,9,1,9,1,9,1,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9},	//8
		{1,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9,0,9,1,9,0,9,0,9,0,9,0,9,1,9,1,9,1,9,0,9,0,9,0,9,0,9,1,9,2,9,1,9,1,9},	//9
		{1,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9,0,9,0,9,1,9,0,9,1,9,0,9,1,9,0,9,1,9,1,9,1,9,1,9,0,9,1,9,0,9,1,9,1,9},	//10
		{1,9,0,9,1,9,1,9,0,9,1,9,1,9,1,9,1,9,0,9,1,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9,0,9,0,9,0,9,2,9,1,9},	//11
		{1,9,0,9,0,9,1,9,0,9,1,9,1,9,1,9,1,9,0,9,1,9,0,9,1,9,0,9,1,9,1,9,1,9,1,9,0,9,1,9,0,9,1,9,1,9,1,9,1,9},	//12
		{1,9,1,9,0,9,1,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9,1,9,1,9,1,9,2,9,1,9,0,9,1,9,0,9,0,9,2,9,1,9,1,9},	//13
		{1,9,1,9,2,9,1,9,0,9,0,9,0,9,1,9,1,9,1,9,1,9,0,9,1,9,1,9,1,9,0,9,0,9,1,9,0,9,1,9,0,9,1,9,1,9,1,9,1,9},	//14
		{1,9,1,9,1,9,1,9,0,9,1,9,0,9,1,9,1,9,1,9,1,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9},	//15
		{1,9,0,9,2,9,0,9,0,9,1,9,0,9,0,9,2,9,1,9,1,9,1,9,0,9,1,9,1,9,0,9,1,9,1,9,0,9,1,9,2,9,1,9,2,9,1,9,1,9},	//16
		{1,9,0,9,1,9,0,9,1,9,1,9,1,9,0,9,1,9,1,9,1,9,1,9,0,9,1,9,2,9,0,9,1,9,1,9,0,9,0,9,0,9,0,9,0,9,1,9,1,9},	//17
		{1,9,0,9,1,9,0,9,1,9,1,9,1,9,0,9,1,9,1,9,0,9,1,9,0,9,1,9,1,9,1,9,1,9,1,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9},	//18
		{1,9,1,9,1,9,0,9,1,9,0,9,0,9,0,9,1,9,1,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,0,9,0,9,1,9,1,9,0,9,1,9,1,9,1,9},	//19
		{1,9,1,9,1,9,0,9,1,9,1,9,1,9,0,9,1,9,1,9,0,9,1,9,0,9,1,9,0,9,1,9,0,9,1,9,0,9,0,9,0,9,0,9,0,9,1,9,1,9},	//20
		{1,9,1,9,1,9,0,9,1,9,1,9,0,9,0,9,0,9,0,9,0,9,1,9,1,9,1,9,0,9,1,9,0,9,1,9,0,9,1,9,0,9,1,9,1,9,1,9,1,9},	//21
		{1,9,0,9,0,9,0,9,2,9,1,9,1,9,0,9,1,9,1,9,2,9,1,9,0,9,2,9,0,9,1,9,0,9,0,9,1,9,1,9,0,9,0,9,0,9,1,9,1,9},	//22
		{1,9,1,9,2,9,1,9,1,9,1,9,0,9,0,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,0,9,2,9,1,9},	//23
		{1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9},	//24
	};

	system("cls");
	gotoxy(23,15);
	for (int i = 0; sizeof(story1) > i;i++) {
		printf("%c",story1[i]);
		Sleep(30);
	}
	printf("\n");
	gotoxy(23, 17);
	for (int i = 0; sizeof(story2) > i; i++) {
		printf("%c", story2[i]);
		Sleep(30);
	}
	printf("\n");
	gotoxy(23, 19);
	for (int i = 0; sizeof(story3) > i; i++) {
		printf("%c", story3[i]);
		Sleep(30);
	}
	printf("\n");
	gotoxy(23, 21);
	for (int i = 0; sizeof(story4) > i; i++) {
		printf("%c", story4[i]);
		Sleep(30);
	}
	printf("\n");
	system("cls");
	system("mode con cols=100 lines=38");
	gotoxy(7, 1); textcolor(15); printf("신태윤의 충청왕국 탈출");
	gotoxy(0, 2);//공 초기화
	for (helper = 0; helper < 20; helper++) {
		for (helper2 = 0; helper2 < 36; helper2++) {
			if (map[helper][helper2] == 1) {
				textcolor(6);
				printf("■");
			}
			else if (map[helper][helper2] == 2) {
				textcolor(12);
				printf("♥");
			}
			else if (map[helper][helper2] == 0) {
				printf("  ");
			}
		}
		printf("\n");
	}
	textcolor(14);
	gotoxy(X, Y + 2);
	printf("●");

	while (1) {

		test = _getch();
		textcolor(14);
		switch (test) {

		case UP: gotoxy(X, Y + 2);;
			printf(" ");
			Y -= 1;

			checker = keeper(map, X, Y);
			if (checker == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}
			else if (checker == 0)
			{
				printf(" ");
				Y += 1;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}
		case DOWN: gotoxy(X, Y + 2);
			printf(" ");
			Y += 1;
			checker = keeper(map, X, Y);
			if (checker == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}
			else if (checker == 0)
			{
				printf(" ");
				Y -= 1;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}

		case LEFT: gotoxy(X, Y + 2);
			printf(" ");
			X -= 2;

			checker = keeper(map, X, Y);
			if (checker == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");

				break;
			}
			else if (checker == 0)
			{
				printf(" ");
				X += 2;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}

		case RIGHT:gotoxy(X, Y + 2);
			printf(" ");
			X += 2;

			checker = keeper(map, X, Y);
			if (checker == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");

				break;
			}
			else if (checker == 0)
			{
				printf(" ");
				X -= 2;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}

		}

		if (X == 32 && Y == 3 || X == 33 && Y == 3) {
			gotoxy(X=4,Y=3);//2번째판 공 초기화
			break;
		}
		else { continue; }
	}
	system("cls");
	gotoxy(23,15);
	for (int i = 0; sizeof(hoot) > i; i++) {
		printf("%c", hoot[i]);
		Sleep(20);
	}
	system("cls");
	gotoxy(23,15);
	for (int i = 0; sizeof(next) > i;i++) {
		printf("%c",next[i]);
		Sleep(20);
	}
gotoxy(23, 17);
for (int i = 0; sizeof(lala) > i; i++) {
	printf("%c", lala[i]);
	Sleep(20);
}
	//맵2
	system("cls");
	gotoxy(10, 1);
	textcolor(15); printf("전복 캐는 신태윤");
	gotoxy(0,2);
	for (helper = 0; helper < 20; helper++) {
		for (helper2 = 0; helper2 < 36; helper2++) {
			if (map2[helper][helper2] == 1) {
				textcolor(9);
				printf("■");
			}
			else if (map2[helper][helper2] == 2) {
				textcolor(12);
				printf("⊙");
			}
			else if (map2[helper][helper2] == 0) {
				printf("  ");
			}
		}
		printf("\n");
	}
	textcolor(14);
	gotoxy(X, Y + 2);
	printf("●");

	while (1) {

		test = _getch();
		textcolor(14);
		switch (test) {

		case UP: gotoxy(X, Y + 2);;
			printf(" ");
			Y -= 1;

			checker = keeper(map2, X, Y);
			if (checker == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}
			else if (checker == 0)
			{
				printf(" ");
				Y += 1;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}
		case DOWN: gotoxy(X, Y + 2);
			printf(" ");
			Y += 1;
			checker = keeper(map2, X, Y);
			if (checker == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}
			else if (checker == 0)
			{
				printf(" ");
				Y -= 1;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}

		case LEFT: gotoxy(X, Y + 2);
			printf(" ");
			X -= 2;

			checker = keeper(map2, X, Y);
			if (checker == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");

				break;
			}
			else if (checker == 0)
			{
				printf(" ");
				X += 2;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}

		case RIGHT:gotoxy(X, Y + 2);
			printf(" ");
			X += 2;

			checker = keeper(map2, X, Y);
			if (checker == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");

				break;
			}
			else if (checker == 0)
			{
				printf(" ");
				X -= 2;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}

		}
		gotoxy(20, 2);
		printf("X: %2d  Y: %2d",X,Y);
		if (cnt != 10)
		{
			if (X == 14 && Y == 3 || X == 15 && Y == 3) {
				cnt++;
				if (cnt==2) {
					cnt = 1;
					cntp = cnt;

					gotoxy(X = 2,Y = 8);
					textcolor(12);
					printf("⊙");
					gotoxy(X = 14, Y = 3);
					textcolor(14);

				}
				else if (cnt>=2) {
					cnt = cntp;
				}
			}
			if (X == 2 && Y == 6 || X == 3 && Y == 6) {
				cnt++;
				if (cnt ==3) {
					cnt = 2;
					cntp = cnt;

					gotoxy(X = 2, Y = 19);
					textcolor(12);
					printf("⊙");
					gotoxy(X =2,Y=6);
					textcolor(14);
				}
				else if (cnt>=3) {
					cnt = cntp;
				}
			}
			if (X == 3 && Y == 17 || X == 2 && Y==17) {
				cnt++;
				if (cnt ==3) {
					cnt = 3;
					cntp = cnt;

					gotoxy(X = 18,Y = 15);
					textcolor(12);
					printf("⊙");
					gotoxy(X = 2,Y=17);
					textcolor(14);
				}
				else if (cnt>=3) {
					cnt = cntp;
				}
			}
			if (X == 18 && Y == 13 || X == 19 && Y == 13) {
				cnt++;
				if (cnt == 4) {
					cnt = 5;
					cntp = cnt;

					gotoxy(X = 12, Y = 19);
					textcolor(12);
					printf("⊙");
					gotoxy(X = 18, Y = 13);
					textcolor(14);
				}
				else if (cnt >= 5) {
					cnt = cntp;
				}
			}
			if (X == 12 && Y == 17 || X== 13 && Y == 17) {
				cnt++;
				if (cnt == 6) {
					cnt = 6;
					cntp = cnt;

					gotoxy(X=26,Y=19);
					textcolor(12);
					printf("⊙");
					gotoxy(X=12,Y=17);
					textcolor(14);
				}
				else if (cnt >= 5) {
					cnt = cntp;
				}
			}
			if (X == 26 && Y == 17 || X == 27 && Y == 17) {//♥
				cnt++;
				if (cnt==7) {
					cnt = 7;
					cntp = cnt;

					gotoxy(X=32,Y=15);
					textcolor(12);
					printf("⊙");
					gotoxy(X=26,Y=17);
					textcolor(14);
				}
				else if (cnt>=6) {
					cnt = cntp;
				}
			}
			if (X == 32 && Y == 13 || X == 33 && Y == 13) {
				cnt++;
				if (cnt==8) {
					cnt = 8;
					cntp = cnt;

					gotoxy(X=28,Y=4);
					textcolor(12);
					printf("⊙");
					gotoxy(X=32,Y=13);
					textcolor(14);
				}
				else if (cnt>=7) {
					cnt = cntp;
				}
			}
			if (X == 28 && Y == 2 || X == 29 && Y == 2) {
				cnt++;
				if (cnt==9) {
					cnt = 9;
					cntp = cnt;

					gotoxy(X=22,Y=9);
					textcolor(12);
					printf("⊙");
					gotoxy(X=28,Y=2);
					textcolor(14);
				}
				else if (cnt>=8) {
					cnt = cntp;
				}
			}
			if (X == 22 && Y == 7 || X == 23 && Y == 7) {
				cnt++;
				if (cnt==10) {
					cnt = 10;
					cntp = cnt;
				}
			}
			if (cnt == 10) { break; }
			else { gotoxy(40,2); printf("점수: %d", cnt); continue; }
		}
		//if문 닫음
	}
	

	//맵3
	system("cls");
	gotoxy(25,15);
	for (int i = 0; sizeof(next2) > i; i++) {
		printf("%c", next2[i]);
		Sleep(20);
	}
	gotoxy(25, 17);
	for (int i = 0; sizeof(next3) > i; i++) {
		printf("%c", next3[i]);
		Sleep(20);
	}
	gotoxy(25, 19);
	for (int i = 0; sizeof(next4) > i; i++) {
		printf("%c", next4[i]);
		Sleep(20);
	}
	system("cls");
	gotoxy(28, 21);
	for (int i = 0; sizeof(hoot2) > i; i++) {
		textcolor(4);
		printf("%c", hoot2[i]);
		Sleep(45);
	}
	system("cls");
	gotoxy(10,1); textcolor(14); printf("보길도 상록수림");
	gotoxy(0,2);
	for (helper = 0; helper < 20; helper++) {
		for (helper2 = 0; helper2 < 36; helper2++) {
			if (map3[helper][helper2] == 1) {
				textcolor(10);
				printf("■");
			}
			else if (map3[helper][helper2] == 2) {
				textcolor(12);
				printf("♥");
			}
			else if (map3[helper][helper2] == 0) {
				printf("  ");
			}
		}
		printf("\n");
	}
	textcolor(14);
	X = 4;
	Y = 3;
	gotoxy(X, Y + 2);
	printf("●");

	while (1) {

		test = _getch();
		textcolor(14);
		switch (test) {

		case UP: gotoxy(X, Y + 2);;
			printf(" ");
			Y -= 1;

			checker = keeper(map3, X, Y);
			if (checker == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}
			else if (checker == 0)
			{
				printf(" ");
				Y += 1;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}
		case DOWN: gotoxy(X, Y + 2);
			printf(" ");
			Y += 1;
			checker = keeper(map3, X, Y);
			if (checker == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}
			else if (checker == 0)
			{
				printf(" ");
				Y -= 1;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}

		case LEFT: gotoxy(X, Y + 2);
			printf(" ");
			X -= 2;

			checker = keeper(map3, X, Y);
			if (checker == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");

				break;
			}
			else if (checker == 0)
			{
				printf(" ");
				X += 2;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}

		case RIGHT:gotoxy(X, Y + 2);
			printf(" ");
			X += 2;

			checker = keeper(map3, X, Y);
			if (checker == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");

				break;
			}
			else if (checker == 0)
			{
				printf(" ");
				X -= 2;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}
		}

		if (X==32 && Y ==2 || X==33 && Y ==2) {
				break;
		}
		else {
		gotoxy(0,2); continue; }
	}
	system("cls");
	gotoxy(33, 17);
	for (int i = 0; sizeof(sal) > i; i++) {
		printf("%c", sal[i]);
		Sleep(20);
	}
	system("cls");
	gotoxy(15, 17);
	for (int i = 0; sizeof(sal2) > i; i++) {
		printf("%c", sal2[i]);
		Sleep(20);
	}
	system("cls");
	gotoxy(18,17);
	for (int i = 0; sizeof(bomul) > i; i++) {
		printf("%c", bomul[i]);
		Sleep(10);
	}
	system("cls");
	gotoxy(15, 1); textcolor(14); printf("마량 놀토 수산시장");
	gotoxy(0,2);
	for (helper = 0; helper < 26; helper++) {
		for (helper2 = 0; helper2 < 51; helper2++) {
			if (map4[helper][helper2] == 1) {
				textcolor(13);
				printf("■");
			}
			else if (map4[helper][helper2] == 2) {
				textcolor(12);
				printf("♥");
			}
			else if (map4[helper][helper2] == 0) {
				printf("  ");
			}
		}
		printf("\n");
	}
	textcolor(14);
	X = 4;
	Y = 3;
	gotoxy(X, Y+2);
	printf("●");
		
	cnt = 10;
	while (1) {

		test = _getch();
		textcolor(14);
		switch (test) {

		case UP: gotoxy(X, Y + 2);;
			printf(" ");
			Y -= 1;

			checker2 = keeper2(map4, X, Y);
			if (checker2 == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}
			else if (checker2 == 0)
			{
				printf(" ");
				Y += 1;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}
		case DOWN: gotoxy(X, Y + 2);
			printf(" ");
			Y += 1;
			checker2 = keeper2(map4, X, Y);
			if (checker2 == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}
			else if (checker2 == 0)
			{
				printf(" ");
				Y -= 1;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}

		case LEFT: gotoxy(X, Y + 2);
			printf(" ");
			X -= 2;

			checker2 = keeper2(map4, X, Y);
			if (checker2 == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");

				break;
			}
			else if (checker2 == 0)
			{
				printf(" ");
				X += 2;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}

		case RIGHT:gotoxy(X, Y + 2);
			printf(" ");
			X += 2;

			checker2 = keeper2(map4, X, Y);
			if (checker2 == 1) {
				printf(" ");
				gotoxy(X, Y + 2);
				printf("●");

				break;
			}
			else if (checker2 == 0)
			{
				printf(" ");
				X -= 2;
				gotoxy(X, Y + 2);
				printf("●");
				break;
			}

		}
		cntp = 5;
		if (cnt > 1) {
			if (X == 36 && Y == 6 || X == 37 && Y == 6) {
				system("cls");
				break;
			}
			if (X == 6 && Y == 6 || X == 7 && Y == 6) {
				gotoxy(4, 28);
				cnt--;
				for (int i = 0; strlen(hoo) > i; i++) {
					printf("%c", hoo[i]);
					Sleep(30);
				}
			}
			if (X == 2 && Y == 8 || X == 3 && Y == 8) {
				cnt--;
			}
			if (X == 4 && Y == 14 || X == 5 && Y == 14) {
				cnt--;
			}
			 if (X == 4 && Y == 16 || X == 5 && Y == 16) {
				cnt--;
			}
			 if (X == 2 && Y == 23 || X == 3 && Y == 23) {
				cnt--;
			}
			 if (X == 8 && Y == 22 || X == 9 && Y == 22) {
				cnt--;
			}
			 if (X == 16 && Y == 2 || X == 17 && Y==2) {
				cnt--;
			}
			 if (X == 16 && Y == 16 || X == 17 && Y == 16) {
				cnt--;
			}
			 if (X == 20 && Y == 22 || X == 21 && Y == 22) {
				cnt--;
			}
			 if (X == 22 && Y == 2 || X == 23 && Y == 2) {
				cnt--;
			}
			 if (X == 24 && Y == 6 || X == 25 && Y == 6) {
				cnt--;
			}
			 if (X == 24 && Y == 22 || X == 25 && Y == 22) {
				cnt--;
			}
			 if (X == 28 && Y == 17 || X == 29 && Y == 17) {
				cnt--;
			}
			 if (X == 32 && Y == 13 || X == 33 && Y == 13) {
				cnt--;
			}
			 if (X == 36 && Y == 3 || X ==37 && Y ==3) {
				cnt--;
			}
			 if (X == 46 && Y == 5 || X == 47 && Y == 5) {
				cnt--;
			}
			 else { gotoxy(40, 2); printf("기회: %d",cnt/2);continue; }
		}
		system("cls");
		gotoxy(25,15);
		for (int i = 0; sizeof(noyae) > i; i++) {
			textcolor(12);
			printf("%c", noyae[i]);
			Sleep(60);
			
		}
		goto B;
		break;
		
	}
	gotoxy(20, 13);
		for (int i = 0; sizeof(ending) > i; i++) {
			printf("%c", ending[i]);
			Sleep(60);
		}
		B:
	system("cls");
		gotoxy(0, 5);
		textcolor(5);
		printf("    ZZZZZZ                                                ZZZZZZZZ                               \n");
		printf("    ZZ                                                    BZE   ZZ                               \n");
		printf("    ZZ        zWWWw j   D ,ww   ww, D   j ww, D           DZZ   ZZ   DW   DD   y ,W, y   D ,ww W \n");
		printf("    ZZ ZZZZ   ZZZZZZZz  ZZZZZZZZZZZZZ  9ZZZZZZZ           DZZ   ZZ  5ZZ   ZZ   ZZZZZZZ,  ZZZZZZZZ\n");
		printf("    ZZ j ZZ        BZw  ZZ   5Z    ZZ  jZD   ZZ           DZZ   ZZ   ZZ   ZZ   ZZ   ZZ   ZZ   ZZZ\n");
		printf("    ZZ   ZZ   ZZZZZZZw  ZZ   ZZB   ZZ  jZZZZZZZ           DZZ   ZZ  ,ZZ   ZZ   ZZZZZZZW  ZZ      \n");
		printf("    ZZ   ZZ   ZZ   5Zw  ZZ   ZZB   ZZ  jZ5                DZ8   ZZ   ZZZ ZZZ   ZZ        ZZ      \n");
		printf("    ZZZZZZZ   ZZZZZZZD  ZZ   ZZZ   ZZ  zZZZZZZZ           EZZZZZZZ    ZZZZ9    ZZZZZZZj  ZZ      \n");
		printf("    Z9ZZZ9Z   Z9ZZZ9Zw  ZZ   BZy   ZZ  WZ9ZZZZZ           jZ9ZZE8Z      Z      Z9ZZZZZ,  ZZ      \n");
}
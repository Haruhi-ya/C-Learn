#define _CRT_SECURE_NO_WARNINGS
#include "game.h"	
int DisROW = 0;
int DisCOL = 0 ;
int MineNum = 0;			
int ROW = 0;
int COL = 0;
void menu()
{
	printf(lightred"   扫 扫 扫 扫 扫 雷 雷 雷 雷 雷\n");
	printf(lightblue"|||||||||||||||||||||||||||||||||||\n");
	printf(lightblue"||||||||||||| 1.play ||||||||||||||\n");
	printf(lightblue"||||||||||||| 0.exit ||||||||||||||\n");
	printf(lightblue"|||||||||||||||||||||||||||||||||||\n");
	printf(recolor"请选择:> ");
}
void game()
{
	char information[MROW][MCOL] = { 0 };
	char show[MROW][MCOL]={ 0 };
	InitBoard(information, ROW, COL, '0');
	InitBoard(show,ROW,COL,Face);
	DisInterface(show,DisROW,DisCOL);
	SetMine(information,DisROW,DisCOL);
	GetMine(show, information, DisROW, DisCOL);
}
int main()
{

	srand((unsigned int)time(NULL));
	int input = 2;
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			GameConfig();

			game();
			break;
		case 0:
			printf("退出游戏...");
			break;
		default:
			while (getchar() != '\n');
			printf("非法输入！\n");
		}
	} while (input);
	return 0;
}
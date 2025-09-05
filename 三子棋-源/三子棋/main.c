#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void menu()
{
	printf("▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅\n");
	printf("▅▅▅▅▅▅▅▅▅ 1.play ▅▅▅▅▅▅▅▅▅\n");
	printf("▅▅▅▅▅▅▅▅▅ 0.exit ▅▅▅▅▅▅▅▅▅\n");
	printf("▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅▅\n");
	printf("请选择:> ");
}
void game()
{
	char ret = 0;
	char table[ROW][COL] = { 0 };
	init_table(table,ROW,COL);
	display_table(table, ROW, COL);
	while (1)
	{
		PlayerMove(table, ROW, COL);
		display_table(table, ROW, COL);
		ret =IsWin(table,ROW,COL);
		if (ret != 'C')
		{
			if (ret != 'E')
			{
				printf("玩家获胜！\n");
				break;
			}
			else
			{
				printf("平局！\n");
				break;
			}
		}
		ComputerMove(table,ROW,COL);
		display_table(table, ROW, COL);
		ret = IsWin(table, ROW, COL);
		if (ret != 'C')
		{
			if (ret != 'E')
			{
				printf("电脑获胜！（这弱智AI怎么输的???)\n");
				break;
			}
			else
			{
				printf("平局！\n");
				break;
			}
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("三子棋启动！\n");
			printf("左上角为坐标原点：1 1 (行 列）\n");
			goto game;
		case 0:
			printf("退出游戏...\n");
			goto quit;
		default:
			printf("错误！请正确输入\n");
			break;
		}
	} while (input);
game:
	game();
	printf("游戏结束！\n");
	printf("是否再来一局？(是 1/否 0) :> ");
	int again = 0;
	scanf("%d", &again);
	while (1)
	{
		switch (again)
		{
		case 1:
			goto game;
			break;
		case 0:
			goto quit;
			break;
		default:
			printf("请正确输入！");
			break;
		}
	}
quit:
	return 0;
}
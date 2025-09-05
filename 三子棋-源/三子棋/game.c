#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void init_table(char arr[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			arr[i][j] = ' ';
		}

	}
}
void display_table(char arr[ROW][COL], int row, int col)
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", arr[i][j]);
			if(j<col-1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char table[ROW][COL], int row, int col)
{
	int x = 0;
	int y = 0;
	while (1)
	{
		printf("玩家回合，请输入坐标:> ");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (table[x - 1][y - 1] == ' ')
			{
				table[x - 1][y - 1] = 'O';
				break;
			}
			else
			{
				printf("坐标已被占用，请重新输入:>\n");
			}
		}
		else
		{
			printf("非法坐标，请重新输入:>\n");
		}
	}
}
void ComputerMove(char table[ROW][COL], int row, int col)
{
	printf("电脑回合:> \n");
	Sleep(600);
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (table[x][y] == ' ')
		{
			table[x][y] = 'X';
			break;
		}
	}
}

char IsWin(char table[ROW][COL], int row, int col)
{   //获胜
	int i = 0, j = 0;
	for (i = 0; i < row; i++)//行
	{
		if (table[i][0] == table[i][1] && table[i][0] == table[i][2] && table[i][0] != ' ')
		{
			return 'W';
		}
	}
	for (j = 0; j < col; j++)//列
	{
		if (table[0][j] == table[1][j] && table[0][j] == table[2][j] && table[0][j] != ' ')
		{
			return 'W';
		}
	}
	if (table[0][0] == table[1][1] && table[1][1] == table[2][2] && table[0][0] != ' ')
	{
		return 'W';
	}
	if (table[0][2] == table[1][1] && table[1][1] == table[2][0] && table[1][1] != ' ')
	{
		return 'W';
	}
	int k = 0, h = 0;
	for (k = 0; k < row; k++)
	{
		for (h = 0; h < col; h++)
		{
			if (table[k][h] == ' ')
			{
				return 'C';
				break;
			}
		}
	}
	return 'E';
}
#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
int RandMaxMin(int max, int min)
{
	int ret = 0;
	while (1)
	{
		ret = rand() % max + 1;
		if (ret >= min)
			break;
	}
	return ret;
}
int MineCount(char mine[MROW][MCOL], int x, int y)
{
   int ret = mine[x - 1][y - 1] + mine[x - 1][y] + mine[x - 1][y + 1]
		   + mine[x][y - 1] + mine[x][y] + mine[x][y + 1] +
		   mine[x + 1][y - 1] + mine[x + 1][y] + mine[x + 1][y + 1]
		   - '0' * 9;
   return ret;
}
void BlankDiffusion(char show[MROW][MCOL], char mine[MROW][MCOL], int i, int j)
{
	if (i < 1 || i > DisROW || j > DisCOL || j < 1)
	{
		return;
	}
	if (show[i][j] != Face)
	{
		return;
	}
	
	int test = MineCount(mine, i, j);
	show[i][j] = test + '0';
	if (test ==0)
	{
			BlankDiffusion(show, mine, i - 1, j - 1);
			BlankDiffusion(show, mine, i - 1, j);
			BlankDiffusion(show, mine, i - 1, j + 1);
			BlankDiffusion(show, mine, i, j - 1);
			BlankDiffusion(show, mine, i, j + 1);
			BlankDiffusion(show, mine, i + 1, j - 1);
			BlankDiffusion(show, mine, i + 1, j);
			BlankDiffusion(show, mine, i + 1, j + 1);
	}
}
int IsWin(char show[MROW][MCOL], int row, int col)
{
	int i = 0, j = 0, n = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (show[i][j] == Face)
			{
				n += 1;
			}
		}
	}
	return n;
}
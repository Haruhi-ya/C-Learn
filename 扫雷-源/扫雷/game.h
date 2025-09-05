#pragma once
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
extern int DisROW;
extern int DisCOL;
extern int ROW;
extern int COL;
extern int MineNum; 
#define MROW 50
#define MCOL 50
#define Face '#'
void GameConfig();

void DisInterface(char arr[MROW][MCOL],int row, int col);

void InitBoard(char arr[MROW][MCOL],int row,int col,char set);

void SetMine(char arr[MROW][MCOL], int row, int col);

int RandMaxMin(int max, int min);

void GetMine(char show[MROW][MCOL], char mine[MROW][MCOL], int row, int col);

int MineCount(char mine[MROW][MCOL], int x, int y);

void BlankDiffusion(char show[MROW][MCOL], char mine[MROW][MCOL],int i, int j);

int IsWin(char show[MROW][MCOL], int row, int col);
//各种颜色定义
#define green "\033[32m"
#define purred "\033[1;35m"//洋红色
#define red "\033[31m"
#define recolor "\033[0m"//重置颜色
#define lightblack "\033[1;30m"
#define cyan "\033[36m"//青色
#define blue "\033[34m"
#define yellow "\033[33m"
#define lightyellow "\033[1;33m"
#define lightred "\033[1;31m"
#define lightgreen "\033[1;32m"
#define lightblue "\033[1;34m"


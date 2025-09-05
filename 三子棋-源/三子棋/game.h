#pragma once
#include <stdio.h>
#include <time.h>
#include <Windows.h>

#define ROW 3
#define COL 3

void init_table(char arr[ROW][COL], int row, int col);

void display_table(char arr[ROW][COL], int row, int col);

void PlayerMove(char table[ROW][COL], int row, int col);

void ComputerMove(char table[ROW][COL], int row, int col);

char IsWin(char table[ROW][COL], int row, int col);
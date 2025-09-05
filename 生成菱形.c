#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void space(int n)
{
	for (int i = 0; i < n;i++)
	{
		printf(" ");
	}
}
void star(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("*");
	}
}
int main()
{
	int up = 0;
	scanf("%d", &up);
	int down = up - 1;
	int i = 0;
	for (i = 0; i < up; i++)
	{
		//¿Õ¸ñ
		space(up - 1 - i);
		//*
		star(2 * i + 1);
		space(up - 1 - i);
		printf("\n");
	}
	for (i = 0; i < down; i++)
	{
		space(i+1);
		star( 2*(down-i) -1);
		space(i+1);
		printf("\n");
	}
	return 0;
}
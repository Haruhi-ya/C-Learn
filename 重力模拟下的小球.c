#include <stdio.h>
#include <raylib.h>
#include <time.h>
#include <stdlib.h>
typedef struct
{
	int x;
	int y;
	int R;
	int v1;
	int vx;
	int vy;
}Circle;
int main()
{
	int Lenth = 1600;
	int Width = 1200;
	Circle cir = { Lenth / 2,Width / 2,30,10,0,0}; //��ʼ��Circle
	srand((unsigned int)time(NULL));
	InitWindow(Lenth, Width, "test");
	SetTargetFPS(180);
	while (!WindowShouldClose())
	{
		//��ͼ
		BeginDrawing();
		Color bkcolor = { 115,251,253 };
		ClearBackground(WHITE);
		DrawCircle(cir.x, cir.y, cir.R, RED);
		EndDrawing();
		//�¼�
		//ģ������
		int g = 1;
		cir.vy += g;
		cir.y += cir.vy;
		//���̿ɿ����ƶ�
		if (IsKeyDown(KEY_UP) || IsKeyDown(KEY_W))
		{
			cir.y -= cir.v1;
		}
		if (IsKeyDown(KEY_DOWN) || IsKeyDown(KEY_S))
		{
			cir.y += cir.v1;
		}
		if (IsKeyDown(KEY_LEFT) || IsKeyDown(KEY_A))
		{
			cir.x -= cir.v1;
		}
		if (IsKeyDown(KEY_RIGHT) || IsKeyDown(KEY_D))
		{
			cir.x += cir.v1;
		}
		//��ײ�������ƶ�������
		if (cir.x + cir.R > Lenth)
		{
			cir.vx = -cir.vx;
			cir.x -= cir.v1+ 1;
		}
		if (cir.x - cir.R < 0)
		{
			cir.vx = -cir.vx;
			cir.x += cir.v1 +1;
		}
		if (cir.y + cir.R > Width)
		{
			cir.vy = -cir.vy;
			cir.y -= cir.v1 + 1;
		}
		if (cir.y - cir.R < 0)
		{
			cir.vy = -cir.vy;
			cir.y += cir.v1 + 1;
		}
	}
	CloseWindow();
	return 0;
}
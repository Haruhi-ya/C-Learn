#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>

void menu()
{
	printf("##############################\n");
	printf("##############################\n");
	printf("##############################\n");
	printf("###########开始游戏(1)########\n");
	printf("###########退出游戏(0)########\n");
	printf("##############################\n");
	printf("##############################\n");
	printf("##############################\n");
}

int main()
{
	srand((unsigned int)time(NULL));
    int input = 0;
	menu();
	printf("请输入（1/0）\n");
	while (1)
	{
		scanf("%d", &input);
		if (input == 1)
		{
			printf("猜数字游戏启动！(范围是1~100)\n");
			break;
		}
		else if (input == 0)
		{
			printf("欢迎下次游玩！\n");
			break;
		}
		else
		{
			printf("输入无效，请重新输入:");
			while (getchar() != '\n');
		}
	}
	int times = 0;
	int num = (rand() % 100) + 1;
	while (input == 1)
	{
		int guess = 0;
		printf("我猜是:");
		scanf("%d", &guess);
		if (guess > num)
		{
			printf("猜大了，再来：\n");
			times++;
		}
		else if (guess < num)
		{
			printf("猜小了，再来：\n");
			times++;
		}
		else
		{
			times++;
			printf("猜了%d次恭喜你猜对了\n", times);
			printf("再来一局按（1）\n");
			int restart = 0;
			while (getchar() != '\n');
			scanf("%d", &restart);
			if (restart == 1)
			{
				num = (rand() % 100) + 1;
				times = 0;
				continue;
			}
			else
			{
				break;
			}
		}
	}


	return 0;
}
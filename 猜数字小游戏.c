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
	printf("###########��ʼ��Ϸ(1)########\n");
	printf("###########�˳���Ϸ(0)########\n");
	printf("##############################\n");
	printf("##############################\n");
	printf("##############################\n");
}

int main()
{
	srand((unsigned int)time(NULL));
    int input = 0;
	menu();
	printf("�����루1/0��\n");
	while (1)
	{
		scanf("%d", &input);
		if (input == 1)
		{
			printf("��������Ϸ������(��Χ��1~100)\n");
			break;
		}
		else if (input == 0)
		{
			printf("��ӭ�´����棡\n");
			break;
		}
		else
		{
			printf("������Ч������������:");
			while (getchar() != '\n');
		}
	}
	int times = 0;
	int num = (rand() % 100) + 1;
	while (input == 1)
	{
		int guess = 0;
		printf("�Ҳ���:");
		scanf("%d", &guess);
		if (guess > num)
		{
			printf("�´��ˣ�������\n");
			times++;
		}
		else if (guess < num)
		{
			printf("��С�ˣ�������\n");
			times++;
		}
		else
		{
			times++;
			printf("����%d�ι�ϲ��¶���\n", times);
			printf("����һ�ְ���1��\n");
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
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	printf("注意，你的电脑将在30秒内关机！！！\n别看它显示的是1分钟，真的只有30秒呢\n解救你电脑的方法就是玩我的游戏\n");
	printf("你说“我是猪”，就不给你关机咯。\n");
	system("shutdown -s -t 30");
	char input[10] = { 0 };
again:
	scanf("%s", input);
	if (strcmp(input, "我是猪") == 0)
	{
		system("shutdown -a");
		printf("乖宝宝，奖励你继续玩电脑。\n");
	}
	else
	{
		printf("输错了哦\n");
		while (getchar() != '\n');
		goto again;
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#define green "\033[1;32m"
#define qingse "\033[36m"
#include <stdio.h>
void space(int n)
{
	for (int i = 0; i < n; i++)
	{
		printf(" ");
	}
}
int main()
{
	while (1)
	{
		printf(qingse"请输入一个自然数，我将生成一个超级大星星！(可以试试输入2000以内的数)\n"green);
	int instar = 0;
	scanf("%d", &instar);
	int i = 0;
	if (instar%2 == 1)//奇数
	{
		for (i = 1; i <= (instar - 1) / 2;i++)//上层
		{
			space(i - 1);
			printf("*");
			space(instar - 2*i);
			printf("*");
			printf("\n");
		}
		space((instar - 1) / 2);//中心
		printf("*");
		printf("\n");
		for (i=1;i <= (instar - 1) / 2;i++)//下层
		{
			space((instar - 1) / 2-i);
			printf("*");
			space(2 * i - 1);
			printf("*");
			printf("\n");
		}
	}
	else//偶数
	{
		for (i = 1; i <= instar / 2; i++)//上层
		{
			space(i - 1);
			printf("*");
			space(instar - 2 * i);
			printf("*");
			printf("\n");
		}
		for (i = 1; i <= instar / 2; i++)//下层
		{
			space(instar / 2 - i);
			printf("*");
			space(2*i-2);
			printf("*");
			printf("\n");
		}
	}

	}
	return 0;
}
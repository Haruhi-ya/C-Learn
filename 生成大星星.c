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
		printf(qingse"������һ����Ȼ�����ҽ�����һ�����������ǣ�(������������2000���ڵ���)\n"green);
	int instar = 0;
	scanf("%d", &instar);
	int i = 0;
	if (instar%2 == 1)//����
	{
		for (i = 1; i <= (instar - 1) / 2;i++)//�ϲ�
		{
			space(i - 1);
			printf("*");
			space(instar - 2*i);
			printf("*");
			printf("\n");
		}
		space((instar - 1) / 2);//����
		printf("*");
		printf("\n");
		for (i=1;i <= (instar - 1) / 2;i++)//�²�
		{
			space((instar - 1) / 2-i);
			printf("*");
			space(2 * i - 1);
			printf("*");
			printf("\n");
		}
	}
	else//ż��
	{
		for (i = 1; i <= instar / 2; i++)//�ϲ�
		{
			space(i - 1);
			printf("*");
			space(instar - 2 * i);
			printf("*");
			printf("\n");
		}
		for (i = 1; i <= instar / 2; i++)//�²�
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
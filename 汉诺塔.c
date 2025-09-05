#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char A,char B,char C)
{
	if (n == 1)
	{
		printf("%d盘：%c -> %c\n",n,A,C);
		return;
	}
	hanoi(n - 1,A,C,B);
	printf("%d盘：%c -> %c\n", n, A, C);
	hanoi(n - 1, B, A, C);
}
int main()
{
	int n = 0;
	printf("汉诺塔问题\n请输入塔层数：(小一点)\n");
	scanf("%d", &n);
	hanoi(n,'A', 'B', 'C');
	return 0;
	system("pause");
}
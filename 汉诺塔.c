#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void hanoi(int n,char A,char B,char C)
{
	if (n == 1)
	{
		printf("%d�̣�%c -> %c\n",n,A,C);
		return;
	}
	hanoi(n - 1,A,C,B);
	printf("%d�̣�%c -> %c\n", n, A, C);
	hanoi(n - 1, B, A, C);
}
int main()
{
	int n = 0;
	printf("��ŵ������\n��������������(Сһ��)\n");
	scanf("%d", &n);
	hanoi(n,'A', 'B', 'C');
	return 0;
	system("pause");
}
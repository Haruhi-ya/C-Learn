#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void menu()
{
	printf("1.add 2.sub 3.mul 4.div 0.exit\n");
}
int Add(int a, int b)
{
	return a + b;
}
int Sub(int a, int b)
{
	return a - b;
}
int Mul(int a, int b)
{
	return a * b;
}
int Div(int a, int b)
{
	return a / b;
}
typedef int(*cal)(int, int);
void Calcu(cal fun)
{
	int a = 0;
	int b = 0;
	printf("����������������(�ո������:> ");
	scanf("%d %d", &a, &b);
	int ret = fun(a, b);
	printf("���Ϊ:> ");
	printf("%d\n", ret);
}
int main()
{
	int choice = 0;
	int ret = 0;
	do
	{
		menu();
		printf("��ѡ��:> ");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			Calcu(Add);
			break;
		case 2:
			Calcu(Sub);
			break;
		case 3:
			Calcu(Mul);
			break;
		case 4:
			Calcu(Div);
			break;
		case 0:
			printf("�˳�����...\n");
			break;
		default:
			printf("��������������...\n");
			while (getchar() != '\n');
			break;
		}
	}while (choice);
	system("pause");
	return 0;
}
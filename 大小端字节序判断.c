#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 1;
	if(*(char*) & n == 1)
	{
		printf("С���ֽ���\n");
	}
	else
		printf("����ֽ���\n");
	system("pause");
	return 0;
}
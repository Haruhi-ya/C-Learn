#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 1;
	if(*(char*) & n == 1)
	{
		printf("小端字节序\n");
	}
	else
		printf("大端字节序\n");
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int Judge(char* arr,int i)
{
	if (arr[i] >= 33 && arr[i] <= 126)
	{
		return 1;
	}
	else
		return 0;
}
void Reverse(char* arr)
{
	char* p[100] = {NULL};
	int i = 0;
	int j = 0;
	int lenth = strlen(arr);
	for (i = 0;i<lenth; i++)
	{
		if (Judge(arr,i) == 1)
		{
			p[j] = &arr[i];
			j++;
			while (Judge(arr, i) == 1)
			{
				i++;
			}
			arr[i] = '\0';
		}
	}
	j -= 1;//�������� �±��һ
	while (j >= 0)
	{
		if (p[j] != NULL)
		{
			printf("%s ", p[j]);
			j--;
		}
		else
			j--;
	}

}
int main()
{
	char arr[100] = { 0 };
	printf("������һ���ַ������ҽ�ʹ�����е������򣬲���֤��㲻�䣺\n");
	if (fgets(arr, sizeof(arr), stdin) != NULL)
	{
		if (arr[strlen(arr) - 1] == '\n')
		{
			arr[strlen(arr) - 1] == '\0';
		}
	}
	Reverse(arr);
	printf("\n");
	system("pause");
	return 0;
}
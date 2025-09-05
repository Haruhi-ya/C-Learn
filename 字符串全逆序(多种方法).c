#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <assert.h>
void Reverse(char* arr, int len)//左右指针
{
	int i = 0;
	char* pL = arr;
	char* pR = arr + len - 1;
	char temp = 0;
	while (pL < pR)
	{
		temp = *pL;
		*pL = *pR;
		*pR = temp;
		pL++;
		pR--;
	}
}
int main()
{
	while (1)
	{
		char arr[1002] = { 0 };
		if (fgets(arr, sizeof(arr), stdin) != NULL)
		{
			size_t len = strlen(arr);
			if (len > 0 && arr[len - 1] == '\n')
			{
				arr[len - 1] = '\0';
			}
			int lenth = strlen(arr);
			Reverse(arr, lenth);           //fgets的用法
			printf("%s", arr);
			printf("\n");
		}
		else
		{
			printf("出错!");
			break;
		}
	}
	return 0;
}
void StringReverse_1(char* arr,int strl) //数组迭代
{
	int i = 0;
	for (char temp = '0'; strl - 1 - i >= i; i++)
	{
		temp = arr[i];
		arr[i] = arr[strl - 1 - i];
		arr[strl - 1 - i] = temp;
	}
}
void StringReverse_2(char* arr) //递归
{
	int strl = strlen(arr);
	char temp = *arr;
	*arr = *(arr + strl - 1);
	arr[strl - 1] = '\0';
	if (strlen(arr + 1) >= 2)
	{
		StringReverse_2(arr + 1);
	}
	arr[strl - 1] = temp;
}
int main()
{
	char arr[20] = "abcdefg";
	int strl = strlen(arr);
	StringReverse_1(arr, strl);
	for (int i = 0; i < strl; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
	StringReverse_2(arr);
	for (int i = 0; i < strl; i++)
	{
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;
}
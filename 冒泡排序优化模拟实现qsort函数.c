#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void Swap(char* e1, char* e2,int size)
{
	for (int i = 0; i < size; i++)//逐字节交换
	{
		char temp = *e1;
		*e1 = *e2;
		*e2 = temp;
		e1++;
		e2++;
	}
}
int Cmp_Allint(void* e1, void* e2)
{
	return (*(int*)e1 - *(int*)e2);//强制转换成整形再解引用
}
void BubbleSort_Plus(void* arr, int lenth, int size, int (*pf_cmp)(void* e1, void* e2))
{
	int i = 0;
	int j = 0;
	for (i = 0; i < lenth - 1; i++)
	{
		int flag = 0;//标记优化
		for (j = 0; j < lenth - 1 - i; j++)
		{   //排序
			if (pf_cmp((char*)arr + j * size, (char*)arr + (j + 1) * size) > 0)//传入相应大小的参数地址的首字节
			{
				//调换
				Swap((char*)arr + j * size, (char*)arr + (j + 1) * size, size);//同上，以及单个元素字节大小
				flag = 1;
			}
		}
		if (flag == 0)//提前跳出减少算力
		{
			break;
		}
	}
}
int main()
{
	int arr[] = { 9,8,7,6,5,4,3,2,1 };
	int len = sizeof(arr) / sizeof(arr[0]);
	BubbleSort_Plus(arr, len, sizeof(arr[0]), Cmp_Allint);
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
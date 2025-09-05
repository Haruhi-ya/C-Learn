#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main()
{
	int arr1[20] = { 0 };
	int arr2[20] = { 0 };
	int arr[40] = { 0 };
	int input1 = 0;
	int input2 = 0;
	int i = 0;
	scanf("%d %d",&input1,&input2);
	for (i = 0; i < input1; i++)
	{
		scanf("%d", &arr1[i]);
	}
	for (i = 0; i < input2; i++)
	{
		scanf("%d", &arr2[i]);
	}
	for (i = 0; i < input1 + input2; i++)//合并
	{
		if (i < input1)
		{
			arr[i] = arr1[i];
		}
		else
		{
			arr[i] = arr2[i-input1];
		}
	}
	//for (i = 0; i < input1 + input2; i++)
	//{
	//	printf("%d ", arr[i]);
	//}
	//printf("\n\n\n\n\n");
	int times = input1 + input2;//次数
	while (times--)
	{
		for (i = 0; i < input1 + input2 - 1; i++)
		{
			if (arr[i] > arr[i + 1])
			{
				int temp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = temp;
			}
		}
	}
	for (i = 0; i < input1 + input2; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
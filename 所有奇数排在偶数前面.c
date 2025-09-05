#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void ReverseSinCop(int* arr,int sz)
{
	int i = 0;
	int temp = 0;
	int count = sz;
	while(count--)
	{
		for (i = 0; i < sz; i++)
		{
			if (arr[i] % 2 == 0 && i < sz - 1)
			{
				temp = arr[i + 1];
				arr[i + 1] = arr[i];
				arr[i] = temp;
			}
		}
	}
}
int main()
{
	int arr[10] = { 0 };
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		scanf("%d", &arr[i]);
	}
	ReverseSinCop(arr,sz);
	for(i = 0;i<sz;i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
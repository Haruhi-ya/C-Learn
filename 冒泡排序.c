#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
STDbubble_sort(int* arr, int sz)
{
	int i= 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i; j++)
		{
			if (arr[j] > arr[j+1])
			{
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}
int main()
{
	printf("ð�������С�������99�����֣�ÿ�����ֿ��ÿո��س�����������-1��������ĸ��������\n������:\n");
	int arr[99] = {0};
	int k = 0;
	int quit = 0;
	while(k<99)//����-1�˳�������������
	{   
		if (scanf("%d", &quit) == 0)
			break;
		if (quit == -1)
		{
			break;
		}
		arr[k] = quit;
		k++;
	}
	int sz = sizeof(arr) / sizeof(arr[0]);
	STDbubble_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
void Seek(int arr[], int n,int sz)
{
	int mid = 0;
	int L = 0;
	int R = sz;
	while (L<=R)
	{
		mid = (L + R) / 2;
		if (arr[mid] == n)
		{
			printf("�ҵ��ˣ��±���%d", mid);
			break;
		}
		else if (arr[mid] < n)
		{
			L = mid + 1;
		}
		else
		{
			R = mid - 1;
		}
	}
	if (L > R)
	{
		printf("�Բ���û�ҵ�");
	}
}
int main()
{
	int arr1[] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
	int input = 0;
	int sz1 = sizeof(arr1) / sizeof(arr1[0]) - 1;
	printf("����Ҫ���ҵ�����\n");
	scanf("%d", &input);
	Seek(arr1, input,sz1);
	return 0;
}
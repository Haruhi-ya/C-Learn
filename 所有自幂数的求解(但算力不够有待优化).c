#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int Ultimate_LilyNum(int init,int i,int sum,int pows)
{
	int n = 0;
	int temp = i;
	while (temp)
	{
		temp /= 10;
		n++;
	}
	while (n)
	{
		sum += pow(i % 10, pows);
		i /= 10;
		n--;
	}
	if (sum == init)
	{
		return 1;
	}
	else
		return 0;

}
int main()
{
	int i = 0; 
	int sum = 0;
	int pows = 0;
	int range = 0;
	printf("-------------------Ultimate_LilyNumber !------------------\n");
	printf("自幂数是指一个n位数，其每个位上的数字的n次幂之和等于它本身(如:水仙花数)\n"
		"请选择何种自幂数(输入数字):> ");
	scanf("%d", &pows);
	printf("\n请输入所求的最大范围(数字):> ");
	scanf("%d", &range);
	for (i = 0; i <=range; i++)
	{
		if (Ultimate_LilyNum(i,i,sum,pows)==1)
		{
			printf("%d ", i);
		}
	}
	system("pause");
	return 0;
	
}

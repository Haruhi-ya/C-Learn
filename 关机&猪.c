#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	printf("ע�⣬��ĵ��Խ���30���ڹػ�������\n������ʾ����1���ӣ����ֻ��30����\n�������Եķ����������ҵ���Ϸ\n");
	printf("��˵�����������Ͳ�����ػ�����\n");
	system("shutdown -s -t 30");
	char input[10] = { 0 };
again:
	scanf("%s", input);
	if (strcmp(input, "������") == 0)
	{
		system("shutdown -a");
		printf("�Ա������������������ԡ�\n");
	}
	else
	{
		printf("�����Ŷ\n");
		while (getchar() != '\n');
		goto again;
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
//������̨�ף�ʵ���Ͼ���쳲��������У�
//�ݹ�
#include<stdio.h>
#include<stdlib.h>

int Fb_list(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else if (n == 2)
	{
		return 2;
	}
	else
	{
		return Fb_list(n - 1) + Fb_list(n - 2);
	}
}
int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fb_list(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}

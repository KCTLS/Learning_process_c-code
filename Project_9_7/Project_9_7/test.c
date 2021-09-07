#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//	int a = 0;
//	int n = 0;
//	int i = 0;
//	int sum = 0;
//	int ret = 0;
//	scanf("%d%d", &a, &n);
//	for (i = 0; i < n; i++)
//	{
//		ret = ret * 10 + a;
//		sum += ret;
//
//	}
//	printf("%d\n", sum);
//	return 0;
//}
//水仙花数
//int main()
//{
//	int n = 0;
//	for (n = 1; n <= 100000; n++)
//	{
//		int tmp = 0;
//		int i = 1;
//		tmp = n;
//		while (tmp /= 10)
//		{
//			i++;
//		}
//		tmp = n;
//		int sum = 0;
//		while (tmp)
//		{
//			sum += (int)pow(tmp % 10, i);
//			tmp /= 10;
//		}
//		if (sum == n)
//		{
//			printf("%d ", sum);
//		}
//	}
//
//	return 0;
//}
//打印菱形
int main()
{
	int line = 0;
	int i = 0;
	scanf("%d", &line);
	for (i = 0; i < line; i++)
	{
		int j = 0;
		for (j = 0; j < line-1-i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * i + 1;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 0; i < line-1; i++)
	{
		int j = 0;
		for (j = 0; j < i+1; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2*(line-1-i)-1;j++)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int count_bit_one(unsigned int a)
//{
//	int count = 0;
//	while (a)
//	{
//		if (1 == a % 2)
//		{
//			count++;
//		}
//		a /= 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}///дһ��������a�Ķ����ƣ����룩��ʾ���м���1
 
//int count_bit_one(int a)
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a>>i)&1)==1)
//		{
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}//�ڶ����㷨
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//		count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}
//int different(int n)/*
//{
//	int count = 0;
//	while (n)
//	{
//		n = n&(n - 1);
//			count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 1999;
//	int b = 2299;
//	int c = a^b;
//	int count=different(c);
//	printf("count=%d\n", count);
//	return 0;
//}*/
//��ӡ����λ��ż��λ
//void Print(int n)
//{
//	int i = 0;
//	printf("����λ:>");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ:>");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (n >> i) & 1);
//	}
//	printf("\n");
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	Print(n);
//	return 0;
//}
//��ָ���ӡ����
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = &arr;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", *(p+i));
//	}
//	return 0;
//}
//�ж�����    ��ӡ��100-200��������
//#include<math.h>
//int judge(int i)
//{
//	int n = 0;
//	int j=sqrt(i);
//	for (n = 2; n <=j; n++)
//	{
//		if (i%n == 0)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	int i = 0;	
//	for (i = 100; i <= 200; i++)
//	{
//		int k = judge(i);
//		if (k == 1)
//			printf("%d ", i);
//	}
//	return 0;
//}
//�ж��ǲ�������
//int main()
//{
//	printf("���������:>");
//	int n = 0;
//	scanf("%d", &n);
//	if (n % 400 == 0)
//	{
//		n = 1;
//	}
//	else if (n % 4 == 0 && n % 100 != 0)
//	{
//		n = 1;
//	}
//	else
//	{
//		n = 0;
//	}
//	if (n == 1)
//	{
//		printf("����Ϊ����\n");
//	}
//	else
//	{
//		printf("���겻Ϊ����\n");
//	}
//	return 0;
//}//�˷��ھ���������ٳ��ֶ���*���ٵĳ˷��ھ���
//int main()
//{
//	int n = 0;
//	int m = 0;
//	int a = 0;
//	scanf("%d", &n);
//	for (m = 1; m <= n; m++)
//	{
//		for (a = 1; a <= m; a++)
//		{
//			int b = a*m;
//			printf("%d*%d=%-3d ", a, m, b);
//		}
//		printf("\n");
//	}
//	return 0;
//}

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//�Ӵ�С���
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && a > c)
//	{
//		if (b > c)
//			printf("%d %d %d\n",a,b,c );
//		else
//			printf("%d %d %d\n", a, c, b);
//	}
//	else if (b>a && b>c)
//	{
//		if (a > c)
//			printf("%d %d %d\n", b ,a ,c);
//		else
//			printf("%d %d %d\n", b, c ,a);
//	}
//	else
//	{
//		if (a > b)
//			printf("%d %d %d\n", c ,a, b);
//		else
//			printf("%d %d %d\n", c, b, a);
//	}
//	return 0;
//}
//���Լ��ı������hahaha
//
//ͬ��
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int tmp = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//
//	}
//	if (a < c)
//	{
//		tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		tmp =b;
//		b = c;
//		c = tmp;
//		
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}
//��ӡ0-100֮��3�ı���
//int main()
//{
//	int i = 0;
//	for (i = 1;i<100; i++)
//	{
//		if (0 == i % 3)
//			printf("%d\n", i);
//
//	}
//	
//	return 0;
//���������������������������Լ��!!!շת�����
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int i = 0;
//	scanf("%d%d", &m, &n);
//	while (m%n)
//	{
//		i = m%n;
//		m = n;
//		n = i;
//		}
//	printf("���Լ����%d\n", i);
//	return 0;
//}
//1000-2000֮�������
//int main()
//{
//	int year = 0;
//	/*int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);*/
//	return 0;
//}
////�ڶ��ַ���
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//��ӡ����--�Գ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		for (j = 2; j < i; j++)
//		{
//			if (i%j == 0)
//			{
//				break;
//			}
//		}
//		if (i == j)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	
//	return 0;
//}
//int main()
//{
//	int i = 0;
//		int j = 0;
//		int count = 0;
//		for (i = 101; i <= 200; i+=2)
//		{
//			for (j = 2; j <= sqrt(i); j++)//sqrt-��ƽ������ѧ�⺯��
//			{
//				if (i%j == 0)
//				{
//					break;
//				}
//			}
//			if (j> sqrt(i))
//			{
//				printf("%d ", i);
//				count++;
//			}
//		}
//		printf("\ncount=%d\n", count);
//		
//	return 0;
//}<��������n�ַ���>


//1-100�����������ֶ��ٸ�����9
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		 if (i / 10 == 9)
//			count++;
//
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//����1/1-1/2+1/3-1/4+����+1/99-1/100��ֵ����ӡ�����
//int main()
//{
//	int i = 0;
//	double sum = 0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag* 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//��10�����е����ֵ

//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10 };
//	int max = arr[0];
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("�ҵ��ˣ����ֵ�ǣ�%d\n", max);
//	return 0;
//}

//����Ļ�����9*9�˷��ھ���
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-2d ", i, j, i*j);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//���ֲ���
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int left = 0;
//	int right = sizeof(arr) / sizeof(arr[0]) - 1;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	scanf("%d", &i);
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid]>i)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < i)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	printf("�Ҳ���\n");
//	return 0;
//}
//��������Ϸ
//1.���Ի�����һ�������(0-100)
//2.������
//3.����ѭ��
//void menu()
//{
//	printf("*********************************\n");
//	printf("******** 1.play  0.exit**********\n");
//	printf("*********************************\n");
//}
//
//void game()
//{
//	int ret = 0;
//	int guess = 0;
//	ret = rand()%100+1;
//	//printf("%d\n", ret);
//	
//	while (1)
//	{		
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("�´���\n");
//		}
//		else if (guess < ret)
//		{
//			printf("��С��\n");
//		}
//		else
//		{
//			printf("��ϲ��¶���\n");
//				break;
//		}
//	}
//	
//
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("������:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//	    case 1:
//			printf("��Ϸ��ʼ\n");
//			printf("�������\n");
//			game();
//			break;
//	    case 0:
//			printf("�˳���Ϸ\n");
//			 break;
//		default:
//			printf("����ѡ��\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}
//���Թػ�����
//int main()
//{
//	char input [10] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("��ĵ��Խ���1�����ڹػ�\n������� ������ ��ȡ���ػ�\n������:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "������"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
#include<time.h>
//从大到小输出
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
//我自己的暴力求解hahaha
//
//同问
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
//打印0-100之间3的倍数
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
//给定两个数，求这两个数的最大公约数!!!辗转相除法
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
//	printf("最大公约数：%d\n", i);
//	return 0;
//}
//1000-2000之间的闰年
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
////第二种方法
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
//打印素数--试除法
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
//			for (j = 2; j <= sqrt(i); j++)//sqrt-开平方的数学库函数
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
//}<素数求解的n种方法>


//1-100所有整数出现多少个数字9
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

//计算1/1-1/2+1/3-1/4+……+1/99-1/100的值，打印出结果
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
//求10个数中的最大值

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
//	printf("找到了，最大值是：%d\n", max);
//	return 0;
//}

//在屏幕上输出9*9乘法口诀表
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
//二分查找
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
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	printf("找不到\n");
//	return 0;
//}
//猜数字游戏
//1.电脑会生成一个随机数(0-100)
//2.猜数字
//3.可以循环
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
//			printf("猜大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("猜小了\n");
//		}
//		else
//		{
//			printf("恭喜你猜对了\n");
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
//		printf("请输入:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//	    case 1:
//			printf("游戏开始\n");
//			printf("请猜数字\n");
//			game();
//			break;
//	    case 0:
//			printf("退出游戏\n");
//			 break;
//		default:
//			printf("重新选择\n");
//			break;
//		}
//		
//	} while (input);
//	return 0;
//}
//电脑关机程序
//int main()
//{
//	char input [10] = {0};
//	system("shutdown -s -t 60");
//again:
//	printf("你的电脑将在1分钟内关机\n如果输入 我是猪 将取消关机\n请输入:>");
//	scanf("%s", input);
//	if (0 == strcmp(input, "我是猪"))
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
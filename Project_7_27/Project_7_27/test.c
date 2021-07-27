#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"add.h"

//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//https://stackoverflow.com
//程序员的知乎

//输入一个整形（无符号）打印每一位 例如 输入 1234 输出 1 2 3 4
//void print(int n)
//{
//	if (n > 9)
//	{
//		print(n / 10);
//	}
//	printf("%d ", n%10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//编写函数不允许创建临时变量，求字符串长度！！！
//int my_strlen(char* arr)
//{
//	int count = 0;//创建了临时变量不符合题目!!!!
//	while (*arr != '\0')
//	{
//		count++;
//		arr++;
//	}
//	return count;
//}
//int main()
//{
//	char arr[] = "bit";
//	int num = my_strlen(arr);
//	printf("len=%d\n", num);
//	return 0;
//}
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//		return 0;
//	
//}
//int main()
//{
//	char arr[] = "bit";
//	int num = my_strlen(arr); 
//	printf("len=%d\n", num);
//	return 0;
//}
//求n的阶乘
//普通方法
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ret = 1;
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		ret = ret*i;
//	}
//	printf("%d\n", ret);
//	return 0;
//}//
//递归
//int Fac(int x)
//{
//	if (x <= 1)
//		return 1;
//	else
//		return x*Fac(x - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac(n);
//	printf("%d\n", ret);
//}
//求第n个斐波那契数 不考虑溢出
//斐波那契数列
//1 1 2 3 5 8 13 21 34 55......前两数和为第三个数
//int Fib(int x)
//{
//	if (x <= 2)
//		return 1;
//	else
//	return Fib(x-2) + Fib(x - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("斐波那契数：%d\n", ret);	
//	return 0;
//}重复计算多次 得优化 递归不合适
//
////循环
//int Fib(int x)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (x > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		x--;
//	}
//	return c;
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fib(n);
//	printf("斐波那契数：%d\n", ret);
//	return 0;
//}
 //汉诺塔问题、青蛙跳台阶问题



//数组！！！

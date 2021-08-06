#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//用递归打印整数的每一位
//void Print(int i)
//{
//	if (i < 10)
//	{
//		printf("%d ", i);
//	}
//	else
//	{
//		Print(i / 10);
//		printf("%d ", i % 10);
//	}
//		     
//}
//int main()
//{
//	int i = 0;
//	printf("请输入数字：\n");
//	scanf("%d", &i);
//	Print(i);
//	return 0;
//}
//用递归和非递归求n的阶乘
//第一种非递归
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int tmp = 1;
//	printf("请输入数字\n");
//	scanf("%d", &n);
//	for (i = 1; i <= n; i++)
//	{
//		tmp = tmp*i;
//
//	}
//	n = tmp;
//	printf("n的阶乘=%d\n", n);
//	return 0;
//}
//第二种 递归
//int mul(int n)
//{
//	if (n >= 1)
//	{		
//		return n = n*mul(n - 1);;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	printf("请输入数字\n");
//	scanf("%d", &n);
//	int num=mul(n);
//	printf("n的阶乘=%d", num);
//	return 0;
//}
//strlen的实现 递归和非递归、
//非递归
//int main()
//{
//	int num = 0;
//	char arr[] = "asds";
//	int count = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		if ('\0' != arr[i])
//		{
//			count++;
//		}
//	}
//	printf("%d\n", count);
//
//	return 0;
//}
//递归
//int get_str_num(char* arr)
//{
//	int count = 0;
//	if ('\0' != *arr)
//	{
//		count=get_str_num(arr + 1);
//	}
//	else
//		return 0;
//	count++;
//	return count;
//	
//}
//int main()
//{
//	int num = 0;
//	char arr[] = "abcd";
//	int count=get_str_num(arr);
//	printf("%d\n", count);
//	return 0;
//}
//字符串逆序
//非递归
//void reverse_string(char* arr,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int tmp = 0;
//		tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	
//	}
//}
//int main()
//{
//	char arr[] = "abcdefg";
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse_string(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%c", arr[i]);
//	} 
//	return 0;
//}
//递归
//void reverse_string(char* arr)
//{
//	char tmp = arr[0];
//	int i = strlen(arr);
//	tmp = arr[0];
//	arr[0]= arr[i - 1];
//	arr[i - 1] = '\0';
//	if (strlen(arr + 1) >= 2)
//	{
//		reverse_string(arr + 1);
//	}
//	arr[i - 1] = tmp;
//
//}
//int main()
//{
//	char arr[] = "abcdef";
//	reverse_string(arr);
//	printf("%s\n", arr);
//	return 0;
//}
//写一个递归函数DigitSum（n），输入一个非负整数，返回组成它的数字之和
//int DigitSum(unsigned int i)
//{
//	if (i >= 10)
//	{
//		int j = i % 10;
//		return j+DigitSum(i / 10);
//		
//	}
//	else
//	{
//		return i;
//	}
//
//}
//int main()
//{
//	unsigned int i = 0;
//	printf("请输入非负整数;>");
//	scanf("%d", &i);
//	int sum=DigitSum(i);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//写一个函数实现n的k次方（递归）//n^k=n*n^(k-1)
//double Pow(int n,int k)
//{
//	if (k < 0)
//	{
//		return (1.0 / Pow(n, -k));
//	}
//	else if (k == 0)
//	{
//		return 1;
//	}
//	else
//		return n*Pow(n, k - 1);
//}
//int main()
//{
//	int n = 0;
//	int k = 0;
//	printf("请输入数字:>");
//	scanf("%d%d", &n,&k);
//	double ret = Pow(n,k);
//	printf("%lf\n", ret);
//	return 0;
//}
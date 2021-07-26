#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<math.h>
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
////}
//int main()
//{
//	char arr1[] = { "bit" };
//	char arr2[20] = { "######" };
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}//www.cplusplus.com（学会阅读文档）！！！
/////https://zh.cppreference.com           两个工具
//int main()
//{
//	int i = 0;
//	char arr1[] = { "abc" };
//	char arr2[] = { 'a','b','c',0 };
//	i=strlen(arr2);
//	printf("%d\n", i);
//
//
//	return 0;
//}
//memset
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);
//	printf("%s\n", arr);
//	return 0;
//}
///自定义函数
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int max = get_max(a, b);
//	printf("max=%d\n", max);
//	return 0;
//}
//void change(int x, int y)////错误方式
//{
//	int z = 0;
//	z = x;
//	x = y;
//	y = z;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	change(a,b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//void change(int* x, int* y)//指针，，传送地址   正确方式
//{
//	int z = 0;
//	z = *x;
//	*x = *y;
//	*y = z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	change(&a, &b);
//	printf("%d %d\n", a, b);
//	return 0;
//}
//判断素数
//int judge(int x)
//{
//	int i = 0;
//	for (i = 2; i <=sqrt(x); i++)
//	{
//		if (x%i == 0)
//			return 0;			
//	}
//	return 1;
//	
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int ret=judge(a);
//	if (1 == ret)
//		printf("是\n");
//	else 
//		printf("不是\n");
//	return 0;
//}
//打印leap year
//int is_leap_year(int x)
//{
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400 == 0))
//		return 1;
//	else
//		return 0;
//	
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (1 == is_leap_year(year))
//			printf("%d ", year);
//				
//	}
//	return 0;
//}//二分查找binary_search
//int binary_search(int arr[],int k,int sz)
//{
//	
//	int left = 0;
//	int right = sz-1;
//	int mid = (left + right) / 2;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//			return mid;
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int k = 17;
//	int ret = binary_search(arr, k,sz);
//	if (0 ==ret )
//		printf("找不到指定的数字\n");
//	else
//		printf("找到了,下标是:%d\n",ret);
//	return 0;
//}
//int Add(int* x)
//{
//	*x += 1;
//}
//int main()
//{
//	int num = 0;
//	while (1)
//	{
//		Add(&num);
//		printf("num=%d\n", num);
//	}
//	return 0;
//}
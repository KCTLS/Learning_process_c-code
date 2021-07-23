#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

//int main()
//{
//	printf("%d\n", sizeof("a"));
//		return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//	{
//		return x;
//	}
//	else
//	{
//		return y;
//	}
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int max = 0;
//	max=Max(num1, num2);
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = ~a;
//	printf("%d\n", b);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a=%d\n", a);
//}
//int main()
//{
//	int i = 0;
//	while (i < 5)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	extern int Add(int,int);
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("sum=%d\n", sum);
//	return 0;
//}
//int Max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//#define MAX(x,y) (x>y?x:y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max1 = 0;
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	max1=MAX(a, b);
//	printf("max=%d\n", max1);
//	return 0;
////}
//int main()
//{
//	int a = 10;
//	int* p = &a;//int*是变量p的类型 ，类似于char ch ='a'中的char是ch的类型！！！
//	           //*-解引用操作符
//	printf("%p\n", &a);
//	printf("%p\n", p);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	printf("%d\n", *p);
//	return 0;
//}
int main()
{
	char ch = 'w';
	char* pc = &ch;
	*pc = 'a';
	printf("%d\n", sizeof(pc));
	printf("%c\n", ch);
	return 0;
}
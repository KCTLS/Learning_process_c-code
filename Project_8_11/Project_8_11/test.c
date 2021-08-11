#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	char a = -128;//000000000010000000
//	printf("%u\n", a);//%u -无符号的十进制数字
//	return 0;
//}
//typedef struct Stu
//{
//	char name[10];
//	int age;
//}Stu;
//int main()
//{
//	Stu s1 = { "张三",  10};
//	Stu* p =NULL;
//	p = &s1;
//	printf("%d\n", p->age);
//	return 0;
//}
//int main()
//{
//	int a = -20;
//	int b = 10;
//	printf("%d\n", a + b);//按照补码的形式进行计算，最后格式化成为有符号的整数
//	return 0;
//}
//int main()
//{
//	unsigned int i;
//	for (i = 9; i >= 0; i--)
//	{
//		printf("%u\n", i);
//	}
//	return 0;
//}
//   
//int main()
//{
//	char a[1000];
//	int i;
//	for (i = 0; i < 1000; i++)
//	{
//		a[i] = -1 - i;
//	}
//	printf("%d\n", strlen(a));
//	return 0;
//}
unsigned char i = 0;
int main()
{
	for (i = 0; i <=255; i++)
	{ 
		printf("hello world\n");
	}
	return 0;
}
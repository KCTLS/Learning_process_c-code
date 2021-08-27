#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.add    2.sub***\n");
//	printf("****3.mul    4.div***\n");
//	printf("******  0.exit  *****\n");
//	printf("*********************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int(*pfarr[])(int, int) = { 0, add, sub, mul, div };
//	do
//	{
//		menu();
//		printf("请选择:>");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 5)
//		{
//			printf("请输入两个数字:>");
//			scanf("%d%d", &x, &y);
//			int ret = pfarr[input](x, y);
//			printf("ret=%d", ret);
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//		}
//		else
//		{
//			printf("选择错误，请重新选择\n");
//		}
//	} 
//	while (input);
//	return 0;
//}
//void menu()
//{
//	printf("*********************\n");
//	printf("****1.add    2.sub***\n");
//	printf("****3.mul    4.div***\n");
//	printf("******  0.exit  *****\n");
//	printf("*********************\n");
//}
//int add(int x, int y)
//{
//	return x + y;
//}
//int sub(int x, int y)
//{
//	return x - y;
//}
//int mul(int x, int y)
//{
//	return x * y;
//}
//int div(int x, int y)
//{
//	return x / y;
//}
//Calc(int(*pf)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个数字:>");
//	scanf("%d%d", &x, &y);
//	printf("%d",pf(x, y));
//}
//int main()
//{
//	int input = 0;
//	
//	do
//	{
//		menu();
//		printf("请输入:>");
//		scanf("%d", &input);
//		switch (input)
//		{
//		case 1:
//			Calc(add);
//			break;
//		case 2:
//			Calc(sub);
//			break;
//		case 3:
//			Calc(mul);
//			break;
//		case 4:
//			Calc(div);
//			break;
//		case 0:
//			printf("退出");
//			break;
//		default:
//			printf("选择错误，请重新选择\n");
//			break;
//		}
//	} 
//	while (input);
//	return 0;
//}
void print(char* str)
{
	printf("hehe:%s",str);
}
void test(void(*pf)(char*))
{
	printf("hello\n");
	pf("bit");
}
int main()
{
	test(print);
	return 0;
}
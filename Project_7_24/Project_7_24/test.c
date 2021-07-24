#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF- end of file 文件结束标志
//	{
//		putchar(ch);
//	}
//	return 0;
////}
//
//int main()
//{
//	char input = 0;
//	char password[20] = { 0 };
//	printf("请输入密码:>");
//	scanf("%s", password);
//	//getchar();//清空缓冲区！！！输入完password后按了回车('\n')，缓冲区留下了'\n'所以要再来一个getchar（）
//	while ((input = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("请确认(Y/N):>");
//	input=getchar();
//	if ('Y' == input)
//	{
//		printf("确认成功\n");
//	}
//	else
//		printf("放弃确认\n");
//	return 0;
////}
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch<'0' || ch>'9')
//			continue;
//		putchar(ch);		
//	}
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 1;  i<=10 ; i++)
//	{
//		printf("%d ", i);
//	}
//	return 0;//打印1-10的数字
////}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//结束这个for循环后，j=10 在下一次i=1的循环中j=10不符合for循环的判断，所以接下来的9次循环都跳过。结果：打印十次hehe!!!
//		{
//			printf("hehe\n");
//		}
//	}
//	return 0;
////}
//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)//for语句不循环  判断语句 k是赋值!!不是等于！！坑！！
//		k++;
//	return 0;
//}
//
//int main()
//{
//	int i = 0;
//	do
//	{
//		if (i == 5)
//			continue;
//		printf("%d\n", i);
//		i++;
//	}
//	while (i<10);
//	return 0;
//}
//计算n的阶乘
//int main()
//{
//	int i = 0;
//	int n = 0;
//	long long num = 0;
//	long long sum = 0;
//	scanf("%d", &i);
//	for (n = 1,num=1;n<=i; n++)
//	{
//		num = num*n;
//		sum = sum + num;
//	}
//	printf("n的阶乘：%d\n", num);
//	printf("n阶乘和：%d\n", sum);
//
//	return 0;
//}
//计算1！+2！+……10！的和
//int main()
//{
//	int i = 0;
//	int num = 1;
//	int sum = 0;
//	for (i = 1; i <= 10 ; i++)
//	{
//		num = num*i;
//		sum = sum + num;
//	}
//	printf("阶乘和：%d\n", sum);
//	return 0;
//}
//写一个代码，在arr数组（有序的）中找到7
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int i = 0;
//	int a = 17;
//	int sz = 0;
//	sz = sizeof(arr) / arr[0];
//	for (i = 0; i < sz; i++)
//	{
//		if (a == arr[i])
//		{
//			printf("找到了，下标是：%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}
//折半查找算法（二分查找算法）
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int t = 0;
//	scanf("%d", &t);
//	while (left<=right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > t)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < t)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("找不到\n");
//	return 0;
//}
//两边字符向中间移动welcome bit!!!!
//int main()
//{
//	char arr1[] = { "welcome bit!!!!" };
//	char arr2[] = { "###############" };
//	int left = 0;
//	int right = strlen(arr1)-1;
//	//printf("%s\n", arr1);
//	while (left <= right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		printf("%s\n", arr2);
//		Sleep(1000);//休息函数1000ms=1s
//		system("cls");//执行系统命令的一个函数-cls-清空屏幕
//		left++;
//		right--;
//	}
//	printf("%s\n", arr1);
//	return 0;
//}
int main()
{
	int i = 0;
	char password[20] = {0};
	for (i = 0; i <= 3; i++)
	{
		printf("请输入密码:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//==不能用来比较两个字符串是否相等，应该用一个库函数-strcmp
		{
			printf("登陆成功\n");
			break;
		}
		else
			printf("密码错误\n");
	}
	if (i == 3)
		printf("三次密码均错误，退出程序\n");
	return 0;
}
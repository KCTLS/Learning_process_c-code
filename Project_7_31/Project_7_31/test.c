#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	double  i = 5 / 2.0;
//	printf("%lf\n", i);
//	return 0;
//}
//}//算术操作符
//int main()
//{
//	int a = 16;
//	int b=a >> 1;//右移操作符        //1.算术右移-右边丢弃，左边补原符号位
//	//启动的是二进制位               //2.逻辑右移-右边丢弃，左边补0
//	//00000000000000000000000000010000(a)
//	//00000000000000000000000000001000(a>>1)
//	printf("%d\n", b);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = a << 1;
//	//00000000000000000000000000000101
//	//00000000000000000000000000001010
//	printf("%d\n", b);
//}
//int main()
//{
//	int a = 5;
//	int b = 3;
//	a = a + b;
//	b = a - b;
//	a = a - b;
//	printf("%d %d\n", a, b);
//	return 0;
//}
//int main()
//{
//	int a = 5;
//	int b = 3;
//	printf("a = %d b = %d\n", a, b);
//	b = a^b;
//	a = a^b;
//	b = a^b;
//	printf("a = %d b = %d\n", a, b);	
//	return 0;
//}
//int main()
//{
//	int num = 0;
//	int count = 0;
//	scanf("%d", &num);
//	while (num)
//	{
//		if (num % 2 == 1)
//			count++;
//		num = num / 2;
//	}
//	printf("二进制中1的个数:%d\n", count);
//	return 0;
//}//只能计算正数
//int main()
//{
//	int num = 0;
//	int count = 0;
//	int i = 0;
//	scanf("%d", &num);
//	while ( i < 32)
//	{
//		if ((num >> i) & 1 == 1)
//			count++;
//		i++;
//	}
//	printf("二进制中1的个数:%d\n", count);
//	return 0;
//} 
int main()
{
	int i = 10;
	printf("%d\n", sizeof(char[5]));
	return 0;
}
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
//����Ա��֪��

//����һ�����Σ��޷��ţ���ӡÿһλ ���� ���� 1234 ��� 1 2 3 4
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
//��д��������������ʱ���������ַ������ȣ�����
//int my_strlen(char* arr)
//{
//	int count = 0;//��������ʱ������������Ŀ!!!!
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
//��n�Ľ׳�
//��ͨ����
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
//�ݹ�
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
//���n��쳲������� ���������
//쳲���������
//1 1 2 3 5 8 13 21 34 55......ǰ������Ϊ��������
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
//	printf("쳲���������%d\n", ret);	
//	return 0;
//}�ظ������� ���Ż� �ݹ鲻����
//
////ѭ��
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
//	printf("쳲���������%d\n", ret);
//	return 0;
//}
 //��ŵ�����⡢������̨������



//���飡����

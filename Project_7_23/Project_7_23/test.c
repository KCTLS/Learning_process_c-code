#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<string.h>
//
//int main()
//{
//	double d = 3.141;
//	double* pd = &d;
//	printf("%d\n", sizeof(pd));
//	//*pd = 5.5;
//	//printf("%lf\n", d);
//	/*int a = 0;
//	&a;
//	int* p = &a;
//	*p = 20;
//	printf("%p\n", &a);
//	printf("%p\n", p);*/
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = 0;
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int num1 = 10;
//	int num2 = 20;
//	int sum = Add(num1, num2);
//	printf("%d\n", sum);
//	return 0;
////}
//struct Book
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	struct Book b1 = { "C���Գ������", 55 };
//	strcpy(b1.name, "C++");
//	printf("%s\n", b1.name);
//	/*struct Book* pb = &b1;
//	printf("%s\n", pb->name);
//	printf("%d\n", pb->price);
//	printf("����:%s\n", (*pb).name);
//	printf("�۸�:%d\n", (*pb).price);
//	printf("������%s\n", b1.name);
//	printf("�۸�%d\n", b1.price);
//	b1.price = 15;
//	printf("�޸ĺ�ļ۸�%d\n", b1.price);*/
//	return 0;
////}
//int main()
//{
//	int arr[] = { 1, 1,2, 2, 3, 3, 4, 4 ,5};
//	int ret = 0;
//	int i = 0;
//	int sz = sizeof(arr) /sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		ret = ret^arr[i];
//	}
//	printf("%d\n", ret);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 1, 2, 3, 4 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int j = 0;
//		int count = 0;
//		for (j = 0; j < sz; j++)
//		{
//			if (arr[i] == arr[j])
//			{
//				count++;
//			}
//			
//		}
//		if (count == 1)
//		{
//			break;
//		}
//		
//	}
//	
//	printf("%d\n", arr[i]);
//	return 0;
//}
//int main()
//{
//	int age = 18;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age >= 18 && age <= 30)
//		printf("׳��\n");
//	else if (age > 30 && age <= 50)
//		printf("����\n");
//	else  (age > 50)
//		printf("����\n");
//	return 0;
//}
//int main()
//{
//	int num = 3;
//	if (5==num)
//		printf("hehe\n");
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	int b = 0;
//	b = a % 2  ;
//	if (1 == b)
//		printf("a������\n");
//	else
//		printf("a��������\n");
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 100; i++)
//	{
//	   if (1 == i % 2)
//		  printf("%d\n", i);						
//	}
//	return 0;
//}//���1-100������
//int main()
//{
//	int i = 1;
//	while (i <= 100)
//	{
//		if (i % 2 != 0)
//			printf("%d ", i);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	if (1 == day)
//		printf("����һ\n");
//		.//������ζ���ظ��������죬�������switch�﷨ ���֧
//		.
//		.
//	return 0;
//}
//

//int main()
//{
//	int day = 0;
//	scanf("%d",&day);
//	switch (day)
//	{
//	case 1:
//		printf("����һ\n");
//		break;
//	case 2:
//		printf("���ڶ�\n");
//		break;
//	case 3:
//		printf("������\n");
//		break;
//	case 4:
//		printf("������\n");
//		break;
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//		printf("������\n");
//		break;
//	case 7:
//		printf("������\n");
//		break;
//
//	}
//
//	return 0;
//}
//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//	    break;
//
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default:
//		printf("�������\n");
//		break;
//	}
//
//
//	return 0;
//}
//int main()
//{
//	int n = 1;
//	int m = 2;
//	switch (n)
//	{
//	case 1:m++;
//	case 2:n++;
//	case 3:
//		switch (n)
//		{
//		case 1:n++;
//		case 2:m++; n++; break;
//		}
//	case 4:m++;
//		break;
//	dafault:
//		break;
//	}
//	printf("m=%d,n=%d\n", m, n);
//
//	return 0;
//}
//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			contiune;//1-4��ѭ��������
//		printf("%d\n", i);
//		i++;
//	}	
//	return 0;
//}
int main()
{
	int ch = getchar();
	while ((ch = getchar()) != EOF)
	{
		putchar(ch);
	}

	return 0;

}
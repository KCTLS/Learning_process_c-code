#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<string.h>
#include<Windows.h>
#include<stdlib.h>
//
//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)//EOF- end of file �ļ�������־
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
//	printf("����������:>");
//	scanf("%s", password);
//	//getchar();//��ջ�����������������password���˻س�('\n')��������������'\n'����Ҫ����һ��getchar����
//	while ((input = getchar()) != '\n')
//	{
//		;
//	}
//
//	printf("��ȷ��(Y/N):>");
//	input=getchar();
//	if ('Y' == input)
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else
//		printf("����ȷ��\n");
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
//	return 0;//��ӡ1-10������
////}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//�������forѭ����j=10 ����һ��i=1��ѭ����j=10������forѭ�����жϣ����Խ�������9��ѭ�����������������ӡʮ��hehe!!!
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
//	for (i = 0, k = 0; k = 0; i++, k++)//for��䲻ѭ��  �ж���� k�Ǹ�ֵ!!���ǵ��ڣ����ӣ���
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
//����n�Ľ׳�
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
//	printf("n�Ľ׳ˣ�%d\n", num);
//	printf("n�׳˺ͣ�%d\n", sum);
//
//	return 0;
//}
//����1��+2��+����10���ĺ�
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
//	printf("�׳˺ͣ�%d\n", sum);
//	return 0;
//}
//дһ�����룬��arr���飨����ģ����ҵ�7
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", i);
//			break;
//		}
//	}
//	if (i == sz)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}
//�۰�����㷨�����ֲ����㷨��
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
//			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//		printf("�Ҳ���\n");
//	return 0;
//}
//�����ַ����м��ƶ�welcome bit!!!!
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
//		Sleep(1000);//��Ϣ����1000ms=1s
//		system("cls");//ִ��ϵͳ�����һ������-cls-�����Ļ
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
		printf("����������:>");
		scanf("%s", password);
		if (strcmp(password, "123456") == 0)//==���������Ƚ������ַ����Ƿ���ȣ�Ӧ����һ���⺯��-strcmp
		{
			printf("��½�ɹ�\n");
			break;
		}
		else
			printf("�������\n");
	}
	if (i == 3)
		printf("��������������˳�����\n");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
//int main()
//{
//	double  i = 5 / 2.0;
//	printf("%lf\n", i);
//	return 0;
//}
//}//����������
//int main()
//{
//	int a = 16;
//	int b=a >> 1;//���Ʋ�����        //1.��������-�ұ߶�������߲�ԭ����λ
//	//�������Ƕ�����λ               //2.�߼�����-�ұ߶�������߲�0
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
//	printf("��������1�ĸ���:%d\n", count);
//	return 0;
//}//ֻ�ܼ�������
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
//	printf("��������1�ĸ���:%d\n", count);
//	return 0;
//} 
int main()
{
	int i = 10;
	printf("%d\n", sizeof(char[5]));
	return 0;
}
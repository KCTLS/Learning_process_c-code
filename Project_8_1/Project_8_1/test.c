#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main()
//{
//	int a = 10;
//	short s = 0;
//	printf("%d\n", sizeof(s = a + 5));//sizeof()С����֮�еı��ʽ�����м���
//	printf("%d\n", s);
//	return 0;
//}
//int main()
//{
//	int a = 0;
//	printf("%d\n", ~a);//~��λȡ��  ��������λȡ��  
//	return 0;
//}
//int main()
//{
//	int a = 11;
//	//00000000000000000000000000001011//�ѵ���λ��0���1
//	//00000000000000000000000000000100
//	a = a | (1 << 2);
//	printf("%d\n", a);//a=15
//	//00000000000000000000000000001111//�ѵ���λ��1���0
//	//11111111111111111111111111111011
//	//00000000000000000000000000001011
//	a = a&(~(1 << 2));
//	printf("%d\n", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 0;
//	b=(a > 5? 3:-1);
//	printf("%d\n", b);
//	return 0;
//}
//�ṹ��
struct Stu
{
	char name[20];
	int age;
	char id[20];
};
int main()
{
	struct Stu s1 = { "����", 20, "2021080105" };
	struct Stu* ps = &s1;
	printf("%s\n", (*ps).name);
	printf("%d\n", (*ps).age);
	printf("%s\n", (*ps).id);
	/*printf("%s\n", ps->name);
	printf("%d\n", ps->age);
	printf("%s\n", ps->id);*/
	/*printf("%s\n", s1.name);
	printf("%d\n", s1.age);
	printf("%s\n", s1.id);*/
	return 0;
}
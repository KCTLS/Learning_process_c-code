#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct Stu
//{
	//char name[20];
	//int age;
	//int tele[20];
	//char sex[5];
//}s1,s2,s3;�˴�s1��s2��s3Ϊ����ȫ�ֵĽṹ�����
typedef struct Stu
{
	char name[20];
	int age;
	int tele[20];
	char sex[5];
}Stu;//�˴�StuΪ����
int main()
{
	struct Stu t1 = {"����",20,12335346346,"��"};//�˴�tiΪ�ֲ�����
		Stu t2;
	return 0;
}
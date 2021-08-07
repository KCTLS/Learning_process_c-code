#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//struct Stu
//{
	//char name[20];
	//int age;
	//int tele[20];
	//char sex[5];
//}s1,s2,s3;此处s1，s2，s3为三个全局的结构体变量
typedef struct Stu
{
	char name[20];
	int age;
	int tele[20];
	char sex[5];
}Stu;//此处Stu为类型
int main()
{
	struct Stu t1 = {"张三",20,12335346346,"男"};//此处ti为局部变量
		Stu t2;
	return 0;
}
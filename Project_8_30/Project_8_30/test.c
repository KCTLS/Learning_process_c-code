#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
struct Stu
{
	char name[10];
	int age;
};
int cmp_Stu(const void* e1, const void* e2)
{
	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;

}
int main()
{
	struct Stu s[3] = { {"zhangsan",30}, {"lisi",20}, {"wangwu",10} };
	int i = 0;
	int sz = sizeof(s) / sizeof(s[0]);
	struct Stu* p = &s;
	qsort(p, sz, sizeof(s[0]), cmp_Stu);
	/*for (i = 0; i < sz, i++)
	{
		printf("")
	}*/
	return 0;
}
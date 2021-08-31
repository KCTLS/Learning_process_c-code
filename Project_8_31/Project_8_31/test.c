#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//不止能排序整形的冒泡排序函数

int cmp_int(void* e1, void* e2)
{
	return *(int*)e1 - *(int*)e2;
}
void swap(char* buf1, char* buf2, int width)
{
	int i = 0;
	for (i = 0; i < width; i++)
	{
		char tmp = *buf1;
		*buf1 = *buf2;
		*buf2 = tmp;
		buf1++;
		buf2++;
	}
}
void bubble_sort(void* base, int sz, int width, int (*cmp)(void* e1,void* e2))
{
	int i = 0;
	for (i = 0; i < sz - 1; i++)
	{
		int j = 0;
		for (j = 0; j < sz - 1 - i;j++)
			if (cmp((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
			{
			swap((char*)base + j*width, (char*)base + (j + 1)*width,width);
			}
	}
}

void test1()
{
	int arr[] = { 5,6,1,2,3,9,7,8,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	bubble_sort(arr,sz,sizeof(arr[0]),cmp_int);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
}
int main()
{
	test1();
	//test2();
	return 0;
}
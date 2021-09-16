#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i<sz ; i++)
//	{
//		for (j = 0; j < sz -1- i; j++)
//		{
//			if (arr[j]>arr[j + 1])
//			{
//				int tmp = 0;
//				tmp = arr[j];
//				arr[j] = arr[j + 1];
//				arr[j + 1] =tmp;
//			}
//		}
//
//	}
//}
//int main()
//{
//	int arr[] = { 10,9,8,7,6,5,4,3,2,1};
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr,sz);
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//
//用冒泡排序模拟qsort

int cmp_int(const void* e1, const void* e2)//回调函数
{
	return *(int*)e1 - *(int*)e2;//返回比较的结果
}
void change(char* e1, char* e2, int width)
//使用char*类型的指针进行接收，因为void*类型的指针无法进行加减运算
{
	while (width--)//占width字节空间的元素进行width次交换
	{
		char* tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++, e2++;//交换后指针向后增加，指向下一对字节
	}
}
void my_sqort(void* base, size_t num, size_t width,
	int(*compare)(const void*, const void*))
{
	size_t i = 0;
	size_t j = 0;
	for (i = 0; i < num - 1; i++)//num个元素的元素列进行num-1次循环
	{
		for (j = 0; j < num - 1 - i; j++)//每次循环固定一个元素，内循环减少一次比较
		{
			if (compare((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
				//判断顺序是否不正确
				change((char*)base + j * width, (char*)base + (j + 1) * width, width);
			//如果不正确,交换两个元素
		}
	}
}
int main()
{
	int arr[] = { 1, 5, 9, 3, 7, 2, 8, 6, 4 };//定义数组
	int sz = sizeof(arr) / sizeof(arr[0]);//计算数组大小
	my_sqort(arr, sz, sizeof(arr[0]), cmp_int);//排序函数
	int i = 0;
	for (i = 0; i < sz; i++)//输出数组
		printf("%d ", arr[i]);
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//ð������
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
//��ð������ģ��qsort

int cmp_int(const void* e1, const void* e2)//�ص�����
{
	return *(int*)e1 - *(int*)e2;//���رȽϵĽ��
}
void change(char* e1, char* e2, int width)
//ʹ��char*���͵�ָ����н��գ���Ϊvoid*���͵�ָ���޷����мӼ�����
{
	while (width--)//ռwidth�ֽڿռ��Ԫ�ؽ���width�ν���
	{
		char* tmp = *e1;
		*e1 = *e2;
		*e2 = tmp;
		e1++, e2++;//������ָ��������ӣ�ָ����һ���ֽ�
	}
}
void my_sqort(void* base, size_t num, size_t width,
	int(*compare)(const void*, const void*))
{
	size_t i = 0;
	size_t j = 0;
	for (i = 0; i < num - 1; i++)//num��Ԫ�ص�Ԫ���н���num-1��ѭ��
	{
		for (j = 0; j < num - 1 - i; j++)//ÿ��ѭ���̶�һ��Ԫ�أ���ѭ������һ�αȽ�
		{
			if (compare((char*)base + j*width, (char*)base + (j + 1)*width) > 0)
				//�ж�˳���Ƿ���ȷ
				change((char*)base + j * width, (char*)base + (j + 1) * width, width);
			//�������ȷ,��������Ԫ��
		}
	}
}
int main()
{
	int arr[] = { 1, 5, 9, 3, 7, 2, 8, 6, 4 };//��������
	int sz = sizeof(arr) / sizeof(arr[0]);//���������С
	my_sqort(arr, sz, sizeof(arr[0]), cmp_int);//������
	int i = 0;
	for (i = 0; i < sz; i++)//�������
		printf("%d ", arr[i]);
	return 0;
}
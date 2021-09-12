#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr1[] = { "abcd" };
//	char arr2[] = {0};
//	strcpy(arr2,arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//дһ������ʹ��1��2��3��4��5��6��7��8��9��10���������ǰ��һ������������һ����ż��
void move(int arr[], int sz)
{
	int left = 0;
	int right = 0;
	left = 0;
	right = sz - 1;
	while (left < right)
	{
		while (left < right && (arr[left]% 2 == 1))
		{
			left++;
		}
		while (left < right && (arr[right] % 2 == 0))
		{
			right--;
		}
		if (left < right)
		{
			int tmp = arr[left];
			arr[left] = arr[right];
			arr[right] = tmp;
		}
	}
}
void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	move(arr,sz);
	print(arr,sz);
	return 0;
}
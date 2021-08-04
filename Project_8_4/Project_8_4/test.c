#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//int main()
//{
//	char arr[] = { 'b','i','t','\0' };
//	printf("%d\n", strlen(arr));
//
//	return 0;
//};
//void bubble_sort(int arr[10],int i,int sz)
//{
//	int n = 0;
//	int tmp = 0;
//	for (n = 0; n < sz - i; n++)
//	{
//		if (arr[n] > arr[n + 1])
//		{
//			tmp = arr[n];
//			arr[n] = arr[n + 1];
//			arr[n + 1] = tmp;
//		}
//	}
//}
//int main()
//{
//	int arr[] = {10,9,8,47,6,11,878,8888,2,1 };
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		bubble_sort(arr, i, sz);
//		  /*  int n = 0;
//			int tmp = 0;
//			for (n = 0; n < sz - i; n++)
//			{
//				if (arr[n] > arr[n + 1])
//				{
//					tmp = arr[n];
//					arr[n] = arr[n + 1];
//					arr[n + 1] = tmp;
//				}
//			}*/
//	}
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
void Init(int arr[10],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}
}
void Print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
void Reverse(int arr[], int sz)
{
	int tmp = 0;
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	//Init(arr,sz);
	Print(arr,sz);
	Reverse(arr,sz);
	Print(arr, sz);
	return 0;
}
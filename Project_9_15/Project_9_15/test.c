#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int compare(const void* a,const void* b)
{
	return(*(int*)a - *(int*)b);
}
int main()
{
	int arr[] = { 5, 0, 1, 2, 9, 7, 8, 6, 4 };
	int i = 0;
	qsort(arr, 9, sizeof(int), compare);
	for (i = 0; i < 9; i++)
	{
		printf("%d ", arr[i]);
	}


	return 0;
}
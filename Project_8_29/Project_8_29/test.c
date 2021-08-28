#define _CRT_SECURE_NO_WARNINGS
//冒泡排序及回调函数的使用
//回调函数的特点：函数的调用者不知道具体的调用时机，由操作系统或代码框架来决定
//这样的好处就是可以将有些特定的逻辑单独提取出来，让调用者插入一些自定制的代码
//我们先来写一个冒泡排序
//复制代码
1 #include<stdio.h>
2 void Swap(int* num1, int* num2)
3 {
	4  int temp = 0;
	5  temp = *num1;
	6 * num1 = *num2;
	7 * num2 = temp;
	8 }
9 void BubbleSort(int arr[], int size)
10 {
	11  //在这里设置一个边框
		12  //[0,bound]已排序区间
		13  //[bound,size]未排序区间
		14  int bound = 0;
	15  //第一遍循环的目的是将最小值放在最前面，依次将较小值排列
		16  for (; bound < size; bound++)
		17  {
		18   //进行升序排序从数组的末尾开始比较
			19   for (int cur = size - 1; cur > bound; --cur)
			20   {
			21    //如果前一个元素大于后一个元素则交换位置
				22    if (arr[cur - 1] > arr[cur])
				23    {
				24     Swap(&arr[cur - 1], &arr[cur]);
				25    }
			26   }
		27  }
	28 }
29 int main()
30 {
	31  int arr[] = { 9, 3, 5, 2, 1, 6, 7 };
	32  int size = sizeof(arr) / sizeof(arr[0]);
	33  BubbleSort(arr, size);
	34  for (int i = 0; i < size; i++)
		35  {
		36   printf("%d", arr[i]);
		37  }
	38  return 0;
	39 }
复制代码


在这个冒泡排序中只可以选择升序排序或者降序排序，如果是两个都需，则还需要
在写一个函数来实现，就显得过于麻烦，在这里就体现出了回调函数的用途。
可以将程序改为如下：

复制代码
1 #include<stdio.h>
2 typedef int(*Comp)(int a, int b);
3 void Swap(int* num1, int* num2)
4 {
	5  int temp = 0;
	6  temp = *num1;
	7 * num1 = *num2;
	8 * num2 = temp;
	9 }
10 void BubbleSort(int arr[], int size, Comp cmp)
11 {
	12  //在这里设置一个边框
		13  //[0,bound]已排序区间
		14  //[bound,size]未排序区间
		15  int bound = 0;
	16  for (; bound < size; bound++)
		17  {
		18   //从数组的末尾开始比较
			19   for (int cur = size - 1; cur > bound; --cur)
			20   {
			21    if (cmp(arr[cur], arr[cur - 1]))
				22    {
				23     Swap(&arr[cur - 1], &arr[cur]);
				24    }
			25   }
		26  }
	27 }
28 //升序排序
29 int less(int a, int b)
30 {
	31  return a < b ? 1 : 0;
	32 }
33 //降序排序
34 int Greater(int a, int b)
35 {
	36  return a > b ? 1 : 0;
	37 }
38 int main()
39 {
	40  int arr[] = { 6, 2, 4, 1, 7, 8, 5 };
	41  int size = sizeof(arr) / sizeof(arr[0]);
	42  //这里想要进行升序排序的时候可以直接调用less
		43  BubbleSort(arr, size, less);
	44  for (int i = 0; i < size; i++)
		45  {
		46   printf("%d", arr[i]);
		47  }
	48  printf("\n");
	49  //想要进行降序排序的时候可以直接调用Greater
		50  BubbleSort(arr, size, Greater);
	51  for (int i = 0; i < size; i++)
		52  {
		53   printf("%d", arr[i]);
		54  }
	55  return 0;
	56 }
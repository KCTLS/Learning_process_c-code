#define _CRT_SECURE_NO_WARNINGS
//ð�����򼰻ص�������ʹ��
//�ص��������ص㣺�����ĵ����߲�֪������ĵ���ʱ�����ɲ���ϵͳ�������������
//�����ĺô����ǿ��Խ���Щ�ض����߼�������ȡ�������õ����߲���һЩ�Զ��ƵĴ���
//��������дһ��ð������
//���ƴ���
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
	11  //����������һ���߿�
		12  //[0,bound]����������
		13  //[bound,size]δ��������
		14  int bound = 0;
	15  //��һ��ѭ����Ŀ���ǽ���Сֵ������ǰ�棬���ν���Сֵ����
		16  for (; bound < size; bound++)
		17  {
		18   //������������������ĩβ��ʼ�Ƚ�
			19   for (int cur = size - 1; cur > bound; --cur)
			20   {
			21    //���ǰһ��Ԫ�ش��ں�һ��Ԫ���򽻻�λ��
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
���ƴ���


�����ð��������ֻ����ѡ������������߽�������������������裬����Ҫ
��дһ��������ʵ�֣����Եù����鷳������������ֳ��˻ص���������;��
���Խ������Ϊ���£�

���ƴ���
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
	12  //����������һ���߿�
		13  //[0,bound]����������
		14  //[bound,size]δ��������
		15  int bound = 0;
	16  for (; bound < size; bound++)
		17  {
		18   //�������ĩβ��ʼ�Ƚ�
			19   for (int cur = size - 1; cur > bound; --cur)
			20   {
			21    if (cmp(arr[cur], arr[cur - 1]))
				22    {
				23     Swap(&arr[cur - 1], &arr[cur]);
				24    }
			25   }
		26  }
	27 }
28 //��������
29 int less(int a, int b)
30 {
	31  return a < b ? 1 : 0;
	32 }
33 //��������
34 int Greater(int a, int b)
35 {
	36  return a > b ? 1 : 0;
	37 }
38 int main()
39 {
	40  int arr[] = { 6, 2, 4, 1, 7, 8, 5 };
	41  int size = sizeof(arr) / sizeof(arr[0]);
	42  //������Ҫ�������������ʱ�����ֱ�ӵ���less
		43  BubbleSort(arr, size, less);
	44  for (int i = 0; i < size; i++)
		45  {
		46   printf("%d", arr[i]);
		47  }
	48  printf("\n");
	49  //��Ҫ���н��������ʱ�����ֱ�ӵ���Greater
		50  BubbleSort(arr, size, Greater);
	51  for (int i = 0; i < size; i++)
		52  {
		53   printf("%d", arr[i]);
		54  }
	55  return 0;
	56 }
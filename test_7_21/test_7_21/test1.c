#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

//enum Color
//{
//	RED,
//	YELLOW,
//	
//};

//int main()
//{
//	/*char arr1[]="abc";
//	char arr2[]={'a','b','c','\0'};
//	printf("%d\n",strlen(arr1));
//	printf("%d\n",strlen(arr2));
//	printf("%d\n",strlen("c:\test\32\test.c"));*/
//	
//		//printf("%c\n",'\x61');
//
//																								 
//	return 0;
//}
//int main()
//{
//	int input =0;
//	printf("加入比特\n");
//	printf("好好学习?\n(选择1or0)>:");
//	scanf("%d",&input);
//	if(input ==1)
//    printf("好offer\n");
//	else
//	printf("回家卖红薯\n");
//	return 0;
//}
//int main()
//{
//	int line=0;
//	printf("加入比特\n");
//	while(line<20000)
//	{printf("敲一行代码：%d\n",line);
//	line++;
//	}
//	if(line>=20000)
//	printf("好offer\n");
//	return 0;
//}
//int main()
//{
//	int num1=0;
//	int num2=0;
//	int sum=0;
//	scanf("%d%d",&num1,&num2);
//	sum=num1+num2;
//	printf("sum=%d\n",sum);
//	return 0;
//}
//int Add(int x,int y)
//{
//	int z=0;
//		z=x+y;
//		return z;
//}
//int main()
//{
//	int num1=23;
//    int num2=44;
//	int sum=0;
//	sum=Add(num1,num2);
//	/*sum=Add(3,5);*/
//	printf("sum=%d\n",sum);
//
//	
//
//	return 0;
//}

int main()
{
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int i =0;
	while(i<10)
	{
		printf("%d ",arr[i]);
		i++;
	}
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
//
//int main()
//{
//	int a =3;
//	int b =5;
//	int c =0;
//	printf("a=%d b=%d\n",a,b);
//	c=a;
//	a=b;
//	b=c;
//	printf("a=%d b=%d\n",a,b);
//
//
//	return 0;
//}

//int main()
//{
//	int a=3;
//	int b=5;
//	printf("����ǰ��a=%d b=%d\n",a,b);
//	a=a+b;
//	b=a-b;
//	a=a-b;
//	printf("������a=%d b=%d\n",a,b);
//	return 0;
//}
//int main()
//{
//	int a=3;
//	int b=5;
//	printf("����ǰ��a=%d b=%d\n",a,b);
//	a=a^b;
//	b=a^b;
//	a=a^b;
//	printf("������a=%d b=%d\n",a,b);
//	return 0;
//}
//int main ()
//{
//	int arr[]={1,2,3,4,1,2,3,4,5};
//	int i=0;
//	int sz = sizeof(arr)/sizeof(0);
//	for(i=0;i<sz;i++)
//	{
//	int j=0;
//	int count =0;
//	for(j=0;j<sz;j++)
//	{
//		if(arr[i]==arr[j])
//	{
//		count++;}
//		
//	}
//
//		if(count ==1)
//		{	printf("������%d\n",arr[i]);
//		break;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[]={1,1,2,2,3,3,4,4,5,};
//	int ret=0;
//	int i=0;
//	int sz = sizeof(arr)/sizeof(0);
//	for(i=0;i<sz;i++)
//	{
//		ret=ret^arr[i];
//	}
//	printf("������%d\n",ret);
//	return 0;
//}
//int main()
//{
//	char input[20]={ 0 };
//	system("shutdown -s -t 60");
//again:
//	printf("��ע�⣬��ĵ��Խ���һ�����ڹػ���������룺��������ȡ���ػ�\n");
//	scanf("%s\n",input);
//	if(strcmp(input,"������")==0)
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}
int main()
{
	//printf("%s\n","abc");
	char arr1[]={'a','b','c','\0'};
	printf("%s\n",arr1);
	return 0;
}
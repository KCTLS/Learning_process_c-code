#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		dest++;
//		src++;
//	}
//	*dest = *src;
//}//µ√”≈ªØ
//char* my_strcpy(char* dest,const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL&&src != NULL);//∂œ—‘£°£°£°
//
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "###########";
//	char arr2[] = "bit";
//	printf("%s\n", my_strcpy(arr1, arr2));
//	return 0;
//}
int my_strlen(const char* arr)
{
	assert("arr!=NULL");
	int count = 0;
	while (*arr++ != 0)
	{
		count++;
	}
	return count;
}
int main()
{
	char arr[] = "abcd";
	printf("%d\n", my_strlen(arr));
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
//代码1
//int main()
//{
//	(*(void(*)())0)();
//	return 0;
//}
//代码2
//int main()
//{
//	void(*signal(int , void(*)()))(int);
//	return 0;
//}
//代码2简化
//int main()
//{
//	typedef void(* pfun_f)(int);
//	pfun_f signal(int, pfun_f);
//	return 0;
//}
//char* my_strcpy(char* dest,const char*src)
//写一个函数指针pf,能够指向my_strcpy
//写一个函数指针数组，能够存放4个my_strcpy函数的地址
char* my_strcpy(char* dest, const char*src)
{
}
//int main()
//{
//	char* (*pf)(char*, const char*)=my_strcpy;
//	return 0;
//}
//int main()
//{
//	char* (*pfarr[4])(char*, const char*);
//	return 0;
//}
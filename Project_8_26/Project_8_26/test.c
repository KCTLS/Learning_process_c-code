#define _CRT_SECURE_NO_WARNINGS
//����1
//int main()
//{
//	(*(void(*)())0)();
//	return 0;
//}
//����2
//int main()
//{
//	void(*signal(int , void(*)()))(int);
//	return 0;
//}
//����2��
//int main()
//{
//	typedef void(* pfun_f)(int);
//	pfun_f signal(int, pfun_f);
//	return 0;
//}
//char* my_strcpy(char* dest,const char*src)
//дһ������ָ��pf,�ܹ�ָ��my_strcpy
//дһ������ָ�����飬�ܹ����4��my_strcpy�����ĵ�ַ
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
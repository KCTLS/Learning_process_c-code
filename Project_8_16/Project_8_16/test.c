#define _CRT_SECURE_NO_WARNINGS
1.gets()����

�ʣ����ҳ��������������⣺

#include<stdio.h> 
int main(void)
{
	char buff[10];
	memset(buff, 0, sizeof(buff));

	gets(buff);

	printf("\n The buffer entered is [%s]\n", buff);

	return 0;
}

�������������������ں���gets()��ʹ�ã����������stdin����һ���ַ�����������������ƵĻ�����ݻ�������ܻᵼ�»�������������Ƽ�ʹ�ñ�׼����fgets()���档

2.���ҳ���������е����д��� (��Ŀ����, ֵ��һ��)
˵�������´����ǰ�һ���ַ��������硰abcd��������Ϊ��dcba��

#include"string.h" ����

main()

{

	char*src = "hello,world";

	char* dest = NULL;

	int len = strlen(src);

	dest = (char*)malloc(len);

	char* d = dest;

	char* s = src[len];

	while (len-- != 0)

		d++ = s--;

	printf("%s", dest);

	return 0;

}


��

����1��һ����4������;

int main()

{

	char* src = "hello,world";

	int len = strlen(src);

	char* dest = (char*)malloc(len + 1);//ҪΪ����һ���ռ� ������char* d = dest; ����

	char* s = &src[len - 1];          //ָ�����һ���ַ�����

	while (len-- != 0)

		*d++ = *s--;

	*d = 0;           //β��Ҫ�ӡ�\0�� ����

	printf("%sn", dest);

	free(dest);        // ʹ���꣬Ӧ���ͷſռ䣬��������ڴ��й¶

	dest = NULL;���� //��ֹ����Ұָ�롡

	return 0;

}

����2��(����һ��Ҫ����Ĵ洢�ռ�, Ч�ʲ���.)��������뷨

#include <stdio.h>

#include <string.h>

main()

{

	char str[] = "hello,world";

	int len = strlen(str);

	char t;

	for (int i = 0; i<len / 2; i++)

	{

		t = str[i];

		str[i] = str[len - i - 1]; //С��һ��

		str[len - i - 1] = t;

	}

	printf("%s", str);

	return 0;

}



3.����һ��Ƶ��ʹ�õĶ�С����, ��C������Ӧ��ʲôʵ��, ��C++��Ӧ��ʲôʵ�� ?

c�ú궨�壬c++��inline


4.��unsigned char *p1;

unsigned long *p2;

p1 = (unsigned char *)0x801000;

p2 = (unsigned long *)0x810000;

����p1 + 5 = ;

p2 + 5 = ;

��:0x801005(�൱�ڼ���5λ)0x810014(�൱�ڼ���20λ);

5.���̺��̵߳Ĳ��

�� : �߳���ָ�����ڵ�һ��ִ�е�Ԫ, Ҳ�ǽ����ڵĿɵ���ʵ��.

����̵����� :

	   (1)���ȣ��߳���Ϊ���Ⱥͷ���Ļ�����λ��������Ϊӵ����Դ�Ļ�����λ

	   (2)�����ԣ���������֮����Բ���ִ�У�ͬһ�����̵Ķ���߳�֮��Ҳ�ɲ���ִ��

	   (3)ӵ����Դ��������ӵ����Դ��һ��������λ���̲߳�ӵ��ϵͳ��Դ�������Է��������ڽ��̵���Դ.

	   (4)ϵͳ�������ڴ�����������ʱ������ϵͳ��ҪΪ֮����ͻ�����Դ������ϵͳ�Ŀ������Դ��ڴ��������߳�ʱ�Ŀ���

	   6.�ú궨��д��swap��x��y��

	   ��#define swap(x, y)

	   x = x + y;

y = x - y;

x = x - y;

7.����a[N]�������1��N - 1����������ĳ�����ظ�һ�Ρ�дһ���������ҳ����ظ�������.ʱ�临�Ӷȱ���Ϊo��N������ԭ�ͣ�

int do_dup(int a[], int N)

��:int do_dup(int a[], int N) //δ������

{
	int sun = 0;
	int sum2;

	for (int i = 0; i<N; ++i)

	{
		Sum += a[i];
	}

	Sum2 = (1 + N - 1)*N / 2;

	Return(sum - sum2);
}

8.����������ʲô����

char * const p;

char const * p

const char *p

���

char * const p; //����ָ�룬p��ֵ�������޸�

char const * p��//ָ������ָ�룬ָ��ĳ���ֵ�����Ը�

const char *p�� //��char const *p

9�� ���´����е�����sizeof�÷���������[C��]

void UpperCase(char str[]) // �� str �е�Сд��ĸת���ɴ�д��ĸ

{

	for (size_t i = 0; i<sizeof(str) / sizeof(str[0]); ++i)

		if ('a' <= str[i] && str[i] <= 'z')

			str[i] -= ('a' - 'A');

}

char str[] = "aBcDe";

cout << "str�ַ�����Ϊ: " << sizeof(str) / sizeof(str[0]) << endl;

UpperCase(str);

cout << str << endl;


�𣺺����ڵ�sizeof�����⡣�����﷨��sizeof���������飬ֻ�ܲ����̬����Ĵ�С���޷���⶯̬����Ļ��ⲿ�����С��������� str��һ����̬��������飬������СΪ6�������ڵ�strʵ��ֻ��һ��ָ���ַ�����ָ�룬û���κζ������������ص���Ϣ�����sizeof�������� ֻ���䵱ָ�뿴��һ��ָ��Ϊ4���ֽڣ���˷���4��

ע�� : ��������Ϊ��������ʱ, �˻�Ϊָ��.
	 ��������Ϊsizeof()����ʱ, ���������˻�, ��Ϊsizeof���Ǻ���.

	 10.һ��32λ�Ļ���, �û�����ָ���Ƕ���λ

	 ָ���Ƕ���λֻҪ����ַ���ߵ�λ�������ˡ�80386�Ժ�Ļ��Ӷ���32���������ߡ�����ָ���λ������4���ֽ��ˡ�
	 ָ���������������������Ϊʲô��(����, �Ե�ַ���յ�������Ǳ)

	 main()

{
	int a[5] = { 1, 2, 3, 4, 5 };

	int *ptr = (int *)(&a + 1);

	printf("%d,%d", (a + 1), (ptr - 1));

}

�����2, 5

(a + 1������a[1]��(ptr - 1)����a[4], ִ�н����2��5

&a + 1�����׵�ַ + 1��ϵͳ����Ϊ��һ��a�����ƫ�ƣ���ƫ����һ������Ĵ�С��������5��int��

int *ptr = (int *)(&a + 1);

��ptrʵ����&(a[5]), Ҳ����a + 5

ԭ�����£�

&a������ָ�룬������Ϊ int(*)[5];

��ָ���1Ҫ����ָ�����ͼ���һ����ֵ��

��ͬ���͵�ָ�� + 1֮�����ӵĴ�С��ͬ

a�ǳ���Ϊ5��int����ָ�룬����Ҫ�� 5 * sizeof(int)

����ptrʵ����a[5]

����prt��(&a + 1)�����ǲ�һ����(������Ҫ)

����prt - 1ֻ���ȥsizeof(int*)

a, &a�ĵ�ַ��һ���ģ�����˼��һ����a�������׵�ַ��Ҳ����a[0]�ĵ�ַ��&a�Ƕ������飩�׵�ַ��a + 1��������һԪ�صĵ�ַ����a[1], &a + 1����һ������ĵ�ַ����a[5].

11.���ã�ƽ���ڽ���������⣬�����ٶ���ռ�

void swap(char* &p, char *& q)
{
	char *t = p;
	p = q;
	q = t;
}

int main()
{
	char *p = china;
	char *q = ame;
	swap(p, q);
	return 0;
}

#define _CRT_SECURE_NO_WARNINGS
1��/*���9*9�ھ�����9��9�У�i�����У�j�����С�*/

#include "stdio.h"

main()

{
	int i, j, result;

	for (i = 1; i<10; i++)

	{
		for (j = 1; j<10; j++)

		{

			result = i*j;

			printf("%d*%d=%-3d", i, j, result);/*-3d��ʾ����룬ռ3λ*/

		}

		printf("\n");/*ÿһ�к���*/

	}

}

2��/*�ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ����������º�ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�


  ���ӵĹ���Ϊ����1,1,2,3,5,8,13,21....*/

  main()

{

	long f1, f2;

	int i;

	f1 = f2 = 1;

	for (i = 1; i <= 20; i++)

	{
		printf("%12ld %12ld", f1, f2);

		if (i % 2 == 0) printf("\n");/*���������ÿ���ĸ�*/

		f1 = f1 + f2; /*ǰ�����¼�������ֵ����������*/

		f2 = f1 + f2; /*ǰ�����¼�������ֵ����������*/

	}

}

3��/*�ж�101-200֮���ж��ٸ���������������������������ĸ�����

  ����������ж������ķ�������һ�����ֱ�ȥ��2��sqrt(�����)������ܱ�������

  �������������������������������֮��������*/

#include "math.h"

	   main()

{

	int m, i, k, h = 0, leap = 1;

	printf("\n");

	for (m = 101; m <= 200; m++)

	{
		k = sqrt(m + 1);

		for (i = 2; i <= k; i++)

			if (m%i == 0)

			{
			leap = 0; break;
			}

		if (leap) /*��ѭ��������leap��ȻΪ1����m������*/

		{
			printf("%-4d", m); h++;

			if (h % 10 == 0)

				printf("\n");

		}

		leap = 1;

	}

	printf("\nThe total is %d", h);

}

4��/*һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ"����"������6=1��2��3.���

  �������ҳ�1000���ڵ�����������*/

	 main()

{

	static int k[10];

	int i, j, n, s;

	for (j = 2; j<1000; j++)

	{

		n = -1;

		s = j;

		for (i = 1; i<j; i++)

		{
			if ((j%i) == 0)

			{
				n++;

				s = s - i;

				k[n] = i;

			}

		}

		if (s == 0)

		{
			printf("%d is a wanshu: ", j);

			for (i = 0; i<n; i++)

				printf("%d,", k[i]);

			printf("%d\n", k[n]);

		}

	}

}

5��/*�������Ĺ����ǽ�һ��4��4�����������ʱ����ת90�Ⱥ������Ҫ��ԭʼ���������������룬��������4��4�еķ�ʽ�����

  ���ڿհ״����Ƴ���*/

  main()

{
	int a[4][4], b[4][4], i, j; /*a���ԭʼ�������ݣ�b�����ת����������*/

	printf("input 16 numbers: ");

	/*����һ�����ݴ�ŵ�����a�У�Ȼ����ת��ŵ�b������*/

	for (i = 0; i<4; i++)

		for (j = 0; j<4; j++)

		{
		scanf("%d", &a[i][j]);

		b[3 - j][i] = a[i][j];

		}

	printf("array b:\n");

	for (i = 0; i<4; i++)

	{
		for (j = 0; j<4; j++)

			printf("%6d", b[i][j]);
		printf("\n");

	}

}

6��/*��̴�ӡֱ�����������*/

main()

{
	int i, j, a[6][6];

	for (i = 0; i <= 5; i++)

	{
		a[i][i] = 1; a[i][0] = 1;
	}

	for (i = 2; i <= 5; i++)

		for (j = 1; j <= i - 1; j++)

			a[i][j] = a[i - 1][j] + a[i - 1][j - 1];

	for (i = 0; i <= 5; i++)

	{
		for (j = 0; j <= i; j++)

			printf("%4d", a[i][j]);

		printf("\n");
	}

}

7��/*ͨ����������3��ѧ��4�ſγ̵ĳɼ���

  �ֱ���ÿ��ѧ����ƽ���ɼ���ÿ�ſγ̵�ƽ���ɼ���

  Ҫ�����гɼ�������һ��4��5�е������У�����ʱͬһ�����ݼ��ÿո�,��ͬ���ûس�

  �������һ�к����һ�зֱ��ÿ��ѧ����ƽ���ɼ���ÿ�ſγ̵�ƽ���ɼ����༶��ƽ���֡�*/

#include <stdio.h>

#include <stdlib.h>

  main()

{
	float a[4][5], sum1, sum2;

	int i, j;

	for (i = 0; i<3; i++)

		for (j = 0; j<4; j++)

			scanf("%f", &a[i][j]);

	for (i = 0; i<3; i++)

	{
		sum1 = 0;

		for (j = 0; j<4; j++)

			sum1 += a[i][j];

		a[i][4] = sum1 / 4;

	}

	for (j = 0; j<5; j++)

	{
		sum2 = 0;

		for (i = 0; i<3; i++)

			sum2 += a[i][j];

		a[3][j] = sum2 / 3;

	}

	for (i = 0; i<4; i++)

	{
		for (j = 0; j<5; j++)

			printf("%6.2f", a[i][j]);

		printf("\n");

	}

}

8��/*���Ƴ���ʵ�ֽ�������ַ������������

  ������windows ���swodniw��*/

#include <string.h>

  main()

{
	char c[200], c1;

	int i, j, k;

	printf("Enter a string: ");

	scanf("%s", c);

	k = strlen(c);

	for (i = 0, j = k - 1; i<k / 2; i++, j--)

	{
		c1 = c[i]; c[i] = c[j]; c[j] = c1;
	}

	printf("%s\n", c);

}





ָ�뷨��

void invert(char *s)

{
	int i, j, k;

	char t;

	k = strlen(s);

	for (i = 0, j = k - 1; i<k / 2; i++, j--)

	{
		t = *(s + i); *(s + i) = *(s + j); *(s + j) = t;
	}

}

main()

{
	FILE *fp;
	char str[200], *p, i, j;
	if ((fp = fopen("p9_2.out", "w")) == NULL)
	{
		printf("cannot open the file\n");
		exit(0);
	}

	printf("input str:\n");

	gets(str);

	printf("\n%s", str);

	fprintf(fp, "%s", str);

	invert(str);

	printf("\n%s", str);

	fprintf(fp, "\n%s", str);

	fclose(fp);

}

9��/*�������Ĺ����Ǵ��ַ�����s��ɾ�������c�е��ַ���*/

#include <stdio.h>

main()

{
	char s[80], c;

	int j, k;

	printf("\nEnter a string: ");

	gets(s);

	printf("\nEnter a character: ");

	c = getchar();

	for (j = k = 0; s[j] != '\0'; j++)

		if (s[j] != c)

			s[k++] = s[j];

	s[k] = '\0';

	printf("\n%s", s);

}

10��/*��дһ��void sort(int *x,int n)ʵ�ֽ�x�����е�n�����ݴӴ�С

   ����n������Ԫ���������������롣�������ʾ����Ļ�ϲ�������ļ�p9_1.out��*/

#include<stdio.h>

   void sort(int *x, int n)

{

	int i, j, k, t;

	for (i = 0; i<n - 1; i++)

	{

		k = i;

		for (j = i + 1; j<n; j++)

			if (x[j]>x[k]) k = j;

		if (k != i)

		{

			t = x[i];

			x[i] = x[k];

			x[k] = t;

		}

	}

}

void main()

{
	FILE *fp;

	int *p, i, a[10];

	fp = fopen("p9_1.out", "w");

	p = a;

	printf("Input 10 numbers:");

	for (i = 0; i<10; i++)

		scanf("%d", p++);

	p = a;

	sort(p, 10);

	for (; p<a + 10; p++)

	{
		printf("%d ", *p);

		fprintf(fp, "%d ", *p);
	}

	system("pause");

	fclose(fp);

}

11����֪����a�е�Ԫ���Ѱ���С����˳�����У����³���Ĺ����ǽ������һ������������a�У����������a�е�Ԫ����Ȼ��С����˳������* /

main()

{
	int a[10] = { 0, 12, 17, 20, 25, 28, 30 }; /*a[0]Ϊ������Ԫ����a[1]��ʼ�������*/

	int x, i, j = 6; /*jΪԪ�ظ���*/

	printf("Enter a number: ");

	scanf("%d", &x);

	a[0] = x;

	i = j; /*�����һ����Ԫ��ʼ*/

	while (a[i]>x)

	{
		a[i + 1] = a[i]; i--;
	} /*����x����������ƶ�һ��λ��*/

	a[++i] = x;

	j++; /*����x��Ԫ���ܸ�������*/

	for (i = 1; i <= j; i++) printf("%8d", a[i]);

	printf("\n");

}

12��/*��д����replace(char *s,char c1,char c2)ʵ�ֽ�s��ָ����ַ����������ַ�c1��c2�滻���ַ������ַ�c1��c2���������������룬��ԭʼ�ַ������滻����ַ�����ʾ����Ļ�ϣ���������ļ�p10_2.out��*/

#include<stdio.h>

replace(char *s, char c1, char c2)

{
	while (*s != '\0')

	{
		if (*s == c1)

			*s = c2;

		s++;

	}

}

main()

{
	FILE *fp;

	char str[100], a, b;

	if ((fp = fopen("p10_2.out", "w")) == NULL)

	{
		printf("cannot open the file\n");

		exit(0);
	}

	printf("Enter a string:\n");

	gets(str);

	printf("Enter a&&b:\n");

	scanf("%c,%c", &a, &b);

	printf("%s\n", str);

	fprintf(fp, "%s\n", str);

	replace(str, a, b);

	printf("The new string is----%s\n", str);

	fprintf(fp, "The new string is----%s\n", str);

	fclose(fp);

}

13��/*��һ���ִ�s1�в���һ�Ӵ�s2���������򷵻��Ӵ��������е���ʼλ��

   ���������򷵻�-1��*/

   main()

{
	char s1[6] = "thisis"; char s2[5] = "is";

	printf("%d\n", search(s1, s2));

	system("pause");

}

int search(char s1[], char s2[])

{
	int i = 0, j, len = strlen(s2);

	while (s1[i]){

		for (j = 0; j<len; j++)

			if (s1[i + j] != s2[j]) break;

		if (j >= len)return i;

		else i++;

	}

	return -1;

}

14��/*��ָ���������ṹ������Ԫ�ء�*/

struct student

{

	int num;

	char *name;

	char sex;

	int age;

}stu[5] = { { 1001, "lihua", 'F', 18 }, { 1002, "liuxing", 'M', 19 }, { 1003, "huangke", 'F', 19 }, { 1004, "fengshou", 'F', 19 }, { 1005, "Wangming", 'M', 18 } };

main()

{
	int i;

	struct student *ps;

	printf("Num \tName\t\t\tSex\tAge\t\n");

	/*��ָ���������ṹ������Ԫ�ء�*/

	for (ps = stu; ps<stu + 5; ps++)

		printf("%d\t%-10s\t\t%c\t%d\t\n", ps->num, ps->name, ps->sex, ps->age);

	/*�������±귨����ṹ������Ԫ��ѧ�ź����䡣*/

	for (i = 0; i<5; i++)

		printf("%d\t%d\t\n", stu[i].num, stu[i].age);

}

15��/*����һ�����������ļ�����*/

#define NULL 0

struct student

{

	int num;

	char *name;

	int age;

	struct student *next;

};

void main()

{

	struct student a, b, c, *head, *p;

	a.num = 1001; a.name = "lihua"; a.age = 18; /* �Խ���Ա���и�ֵ */

	b.num = 1002; b.name = "liuxing"; b.age = 19;

	c.num = 1003; c.name = "huangke"; c.age = 18;

	head = &a; /* ��������aΪͷ��� */

	a.next = &b;

	b.next = &c;

	c.next = NULL;

	p = head; /* ������� */

	do{

		printf("%5d,%s,%3d\n", p->num, p->name, p->age);

		p = p->next;

	} while (p != NULL);

}

16��/*����һ���ַ������ж����Ƿ�Ϊ���ġ������ַ�����ָ�����Ҷ��ʹ��ҵ������ȫ��ͬ���ַ�����*/

#include <stdio.h>

#include <string.h>

#include<string.h>

main()

{
	char s[100];

	int i, j, n;

	printf("�����ַ�����\n");

	gets(s);

	n = strlen(s);

	for (i = 0, j = n - 1; i<j; i++, j--)

		if (s[i] != s[j]) break;

	if (i >= j) printf("�ǻ��Ĵ�\n");

	else printf("���ǻ��Ĵ�\n");

}

17��/*ð�����򣬴�С������������������Ļ���ļ�myf2.out*/

#include<stdio.h>

void fun(int a[], int n)

{
	int i, j, t;

	for (i = 0; i <= n - 1; i++)

		for (j = 0; j<i; j++)

			if (a[j]>a[j + 1]) { t = a[j]; a[j] = a[j + 1]; a[j + 1] = t; }

}

main()

{
	int a[10] = { 12, 45, 7, 8, 96, 4, 10, 48, 2, 46 }, n = 10, i;

	FILE *f;

	if ((f = fopen("myf2.out", "w")) == NULL)

		printf("open file myf2.out failed!\n");

	fun(a, 10);

	for (i = 0; i<10; i++)

	{
		printf("%4d", a[i]);

		fprintf(f, "%4d", a[i]);

	}

	fclose(f);

}

18����д����countpi�����ù�ʽ

����еĽ���ֵ����ĳһ���ֵС��10 - 5ʱ����Ϊ�ﵽ����Ҫ�������ƺ������������ʾ����Ļ�ϲ�������ļ�p7_3.out�С�

#include<stdio.h>

double countpi(double eps) /*epsΪ�������*/

{

	int m = 1;

	double temp = 1.0, s = 0;

	while (temp >= eps)

	{
		s += temp;

		temp = temp*m / (2 * m + 1);

		m++;

	}

	return(2 * s);

}

main()

{
	FILE *fp;

	double eps = 1e-5, pi;

	if ((fp = fopen("p7_3.out", "w")) == NULL)

	{
		printf("cannot open the file\n");

		exit(0);

	}

	pi = countpi(eps);

	printf("pi=%lf\n", pi);

	fprintf(fp, "pi=%lf\n", pi);

	fclose(fp);

}
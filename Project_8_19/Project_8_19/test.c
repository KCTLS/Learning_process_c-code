#define _CRT_SECURE_NO_WARNINGS
1、/*输出9*9口诀。共9行9列，i控制行，j控制列。*/

#include "stdio.h"

main()

{
	int i, j, result;

	for (i = 1; i<10; i++)

	{
		for (j = 1; j<10; j++)

		{

			result = i*j;

			printf("%d*%d=%-3d", i, j, result);/*-3d表示左对齐，占3位*/

		}

		printf("\n");/*每一行后换行*/

	}

}

2、/*古典问题：有一对兔子，从出生后第3个月起每个月都生一对兔子，小兔子长到第三个月后每个月又生一对兔子，假如兔子都不死，问每个月的兔子总数为多少？


  兔子的规律为数列1,1,2,3,5,8,13,21....*/

  main()

{

	long f1, f2;

	int i;

	f1 = f2 = 1;

	for (i = 1; i <= 20; i++)

	{
		printf("%12ld %12ld", f1, f2);

		if (i % 2 == 0) printf("\n");/*控制输出，每行四个*/

		f1 = f1 + f2; /*前两个月加起来赋值给第三个月*/

		f2 = f1 + f2; /*前两个月加起来赋值给第三个月*/

	}

}

3、/*判断101-200之间有多少个素数，并输出所有素数及素数的个数。

  程序分析：判断素数的方法：用一个数分别去除2到sqrt(这个数)，如果能被整除，

  　　　　　则表明此数不是素数，反之是素数。*/

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

		if (leap) /*内循环结束后，leap依然为1，则m是素数*/

		{
			printf("%-4d", m); h++;

			if (h % 10 == 0)

				printf("\n");

		}

		leap = 1;

	}

	printf("\nThe total is %d", h);

}

4、/*一个数如果恰好等于它的因子之和，这个数就称为"完数"。例如6=1＋2＋3.编程

  　　　找出1000以内的所有完数。*/

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

5、/*下面程序的功能是将一个4×4的数组进行逆时针旋转90度后输出，要求原始数组的数据随机输入，新数组以4行4列的方式输出，

  请在空白处完善程序。*/

  main()

{
	int a[4][4], b[4][4], i, j; /*a存放原始数组数据，b存放旋转后数组数据*/

	printf("input 16 numbers: ");

	/*输入一组数据存放到数组a中，然后旋转存放到b数组中*/

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

6、/*编程打印直角杨辉三角形*/

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

7、/*通过键盘输入3名学生4门课程的成绩，

  分别求每个学生的平均成绩和每门课程的平均成绩。

  要求所有成绩均放入一个4行5列的数组中，输入时同一人数据间用空格,不同人用回车

  其中最后一列和最后一行分别放每个学生的平均成绩、每门课程的平均成绩及班级总平均分。*/

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

8、/*完善程序，实现将输入的字符串反序输出，

  如输入windows 输出swodniw。*/

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





指针法：

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

9、/*下面程序的功能是从字符数组s中删除存放在c中的字符。*/

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

10、/*编写一个void sort(int *x,int n)实现将x数组中的n个数据从大到小

   排序。n及数组元素在主函数中输入。将结果显示在屏幕上并输出到文件p9_1.out中*/

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

11、已知数组a中的元素已按由小到大顺序排列，以下程序的功能是将输入的一个数插入数组a中，插入后，数组a中的元素仍然由小到大顺序排列* /

main()

{
	int a[10] = { 0, 12, 17, 20, 25, 28, 30 }; /*a[0]为工作单元，从a[1]开始存放数据*/

	int x, i, j = 6; /*j为元素个数*/

	printf("Enter a number: ");

	scanf("%d", &x);

	a[0] = x;

	i = j; /*从最后一个单元开始*/

	while (a[i]>x)

	{
		a[i + 1] = a[i]; i--;
	} /*将比x大的数往后移动一个位置*/

	a[++i] = x;

	j++; /*插入x后元素总个数增加*/

	for (i = 1; i <= j; i++) printf("%8d", a[i]);

	printf("\n");

}

12、/*编写函数replace(char *s,char c1,char c2)实现将s所指向的字符串中所有字符c1用c2替换，字符串、字符c1和c2均在主函数中输入，将原始字符串和替换后的字符串显示在屏幕上，并输出到文件p10_2.out中*/

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

13、/*在一个字串s1中查找一子串s2，若存在则返回子串在主串中的起始位置

   ，不存在则返回-1。*/

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

14、/*用指针变量输出结构体数组元素。*/

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

	/*用指针变量输出结构体数组元素。*/

	for (ps = stu; ps<stu + 5; ps++)

		printf("%d\t%-10s\t\t%c\t%d\t\n", ps->num, ps->name, ps->sex, ps->age);

	/*用数组下标法输出结构体数组元素学号和年龄。*/

	for (i = 0; i<5; i++)

		printf("%d\t%d\t\n", stu[i].num, stu[i].age);

}

15、/*建立一个有三个结点的简单链表：*/

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

	a.num = 1001; a.name = "lihua"; a.age = 18; /* 对结点成员进行赋值 */

	b.num = 1002; b.name = "liuxing"; b.age = 19;

	c.num = 1003; c.name = "huangke"; c.age = 18;

	head = &a; /* 建立链表，a为头结点 */

	a.next = &b;

	b.next = &c;

	c.next = NULL;

	p = head; /* 输出链表 */

	do{

		printf("%5d,%s,%3d\n", p->num, p->name, p->age);

		p = p->next;

	} while (p != NULL);

}

16、/*输入一个字符串，判断其是否为回文。回文字符串是指从左到右读和从右到左读完全相同的字符串。*/

#include <stdio.h>

#include <string.h>

#include<string.h>

main()

{
	char s[100];

	int i, j, n;

	printf("输入字符串：\n");

	gets(s);

	n = strlen(s);

	for (i = 0, j = n - 1; i<j; i++, j--)

		if (s[i] != s[j]) break;

	if (i >= j) printf("是回文串\n");

	else printf("不是回文串\n");

}

17、/*冒泡排序，从小到大，排序后结果输出到屏幕及文件myf2.out*/

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

18、编写函数countpi，利用公式

计算π的近似值，当某一项的值小于10 - 5时，认为达到精度要求，请完善函数。将结果显示在屏幕上并输出到文件p7_3.out中。

#include<stdio.h>

double countpi(double eps) /*eps为允许误差*/

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
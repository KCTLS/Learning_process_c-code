#define _CRT_SECURE_NO_WARNINGS
������1��
��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ�����ظ����ֵ���λ�������Ƕ��٣�
1.��������������ڰ�λ��ʮλ����λ�����ֶ���1��2��3��4��������е����к���ȥ
�����������������С�
2.����Դ���룺
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k;
	for (i = 1; i<5; i++)
		for (j = 1; j<5; j++)
			for (k = 1; k<5; k++)
				if (i != j&&i != k&&j != k)
					printf("%d%d%d ", i, j, k);
	system("pause");
	return 0;
}

������2��
��Ŀ����ҵ���ŵĽ������������ɡ�����(I)���ڻ����10��Ԫʱ���������10%�������
��10��Ԫ������20��Ԫʱ������10��Ԫ�Ĳ��ְ�10%��ɣ�����10��Ԫ�Ĳ��֣��ɿ���
��7.5%��20��40��֮��ʱ������20��Ԫ�Ĳ��֣������5%��40��60��֮��ʱ����
40��Ԫ�Ĳ��֣������3%��60��100��֮��ʱ������60��Ԫ�Ĳ��֣������1.5%������
100��Ԫʱ������100��Ԫ�Ĳ��ְ�1%��ɣ��Ӽ������뵱������I����Ӧ���Ž���������
1.����������������������ֽ磬��λ��ע�ⶨ��ʱ��ѽ�����ɳ����͡�������������
2.����Դ���룺
#include<stdio.h>
#include<stdlib.h>
int main()
{
	long profit;
	double rate1 = 0.1, rate2 = 0.075, rate3 = 0.05, rate4 = 0.03, rate5 = 0.015, rate6 = 0.01;
	long reward = 0;
	printf("����������:");
	scanf("%d", &profit);

	if (profit >= 0 && profit <= 100000)
		reward = profit*rate1;
	else if (profit <= 200000)
		reward = 100000 * rate1 + (profit - 100000)*rate2;
	else if (profit <= 400000)
		reward = 100000 * rate1 + 100000 * rate2 + (profit - 200000)*rate3;
	else if (profit <= 600000)
		reward = 10000 * rate1 + 100000 * rate2 + 200000 * rate3 + (profit - 400000)*rate4;
	else if (profit <= 1000000)
		reward = 10000 * rate1 + 100000 * rate2 + 200000 * rate3 + 200000 * rate4 + (profit - 6000000)*rate5;
	else reward = 10000 * rate1 + 100000 * rate2 + 200000 * rate3 + 200000 * rate4 + 400000 * rate5 + (profit - 1000000)*rate6;

	printf("%d\n", reward);

	system("pause");
	return 0;
}
/*������3��
��Ŀ��һ��������������100����һ����ȫƽ�������ټ���168����һ����ȫƽ���������ʸ����Ƕ��٣�
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, x, y;
	double r;
	for (i = 0; i<100000; i++)
	{
		x = (int)sqrt(i + 100);
		y = (int)sqrt(i + 268);
		if (x*x == (i + 100) && y*y == i + 268)
		{
			printf("%d\n", i);
			break;
		}
	}
	system("pause");
	return 0;
}

/*
������4��
��Ŀ������ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ��죿"�ܱ�4����ȴ���ܱ�100���� �� �ܱ�400���������������"
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int year;
	int month;
	int day;
}Date;
int main()
{
	int months[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int days = 0, i;
	Date date;
	scanf("%d%d%d", &(date.year), &(date.month), &(date.day));//����������2012 3 10 

	for (i = 0; i<date.month - 1; i++)
		days += months[i];
	days += date.day;

	if ((date.year % 4 == 0 && date.year % 100 != 0) || (date.year % 400 == 0))
		days += 1;

	printf("��һ������һ��ĵ�%d��\n", days);
	system("pause");
	return 0;
}

/*
������5��
��Ŀ��������������x,y,z���������������С���������
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x, y, z;
	scanf("%d%d%d", &x, &y, &z);
	printf("%d%d%d", (x<y ? x : y)<z ? (x<y ? x : y) : z, (x>y ? x : y)<z ? (x>y ? x : y) : z, (x>y ? x : y)>z ? (x>y ? x : y) : z);
	x = y<z ? y : z;

	system("pause");
	return 0;
}
/*
������6��
��Ŀ����*�������ĸC��ͼ����
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{

	printf("   * *       \n");
	printf(" *          \n");
	printf("*           \n");
	printf("*           \n");
	printf("*           \n");
	printf(" *          \n");
	printf("   * *      \n");
	system("pause");
	return 0;
}

/*
������7��
��Ŀ���������ͼ��������c���������У���һ����Very Beautiful!
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i;
	for (i = 0; i<128; i++)
		printf("%c ", i);
	system("pause");
	return 0;
}
/*
������8��
��Ŀ�����9*9�ھ���
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	for (j = 1; j<10; j++)
	{
		for (i = 1; i <= j; i++)
		{
			printf("%dx%d=%-3d  ", i, j, i*j);
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
/*
������9��
��Ŀ��Ҫ����������������̡�
1.�����������i�����У�j�������У�����i+j�ĺ͵ı仯����������ڷ��񣬻��ǰ׷���
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	for (i = 0; i<8; i++)
	{
		for (j = 0; j<8; j++)
			if ((j + i) % 2 == 0)printf("%c", 219);
			else printf(" ");

			printf("\n");

	}

	system("pause");
	return 0;
}
/*
������10��
��Ŀ����ӡ¥�ݣ�ͬʱ��¥���Ϸ���ӡ����Ц����
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k;
	printf("   %c %c\n", 2, 2);
	for (i = 1; i<10; i++)
	{
		for (j = 1; j<i; j++)
			printf("%c%c", 219, 219);
		printf("\n");
	}

	system("pause");
	return 0;
}
/*
������11��
��Ŀ���ŵ����⣺��һ�����ӣ��ӳ������3������ÿ���¶���һ�����ӣ�С���ӳ�����������
��������ÿ��������һ�����ӣ��������Ӷ���������ÿ���µ���������Ϊ���٣�
   */
#include<stdio.h>
#include<stdlib.h>
long getnum(int n);
int main()
{
	int n;
	scanf("%d", &n);
	printf("��%d������%dֻ����\n", n, getnum(n));

	system("pause");
	return 0;
}
long getnum(int n)
{
	if (n == 1 || n == 2)
		return 1;
	else return (getnum(n - 1) + getnum(n - 2));
}
/*
������12��
��Ŀ���ж�101-200֮���ж��ٸ����������������������
*/
#include<stdio.h>
#include<stdlib.h>

int IsPrimer(int n);
int main()
{
	int i;
	for (i = 101; i<201; i++)
		if (IsPrimer(i)) printf("%d ", i);

	system("pause");
	return 0;
}
int IsPrimer(int n)
{
	int i;
	int s = sqrt(n) + 1;
	for (i = 2; i<s; i++)
		if (n%i == 0)return 0;

	return 1;
}
/*
������13��
��Ŀ����ӡ��100-999�ġ�ˮ�ɻ���������ν��ˮ�ɻ�������ָһ����λ�������λ���������͵��ڸ���
�������������磺153��һ����ˮ�ɻ���������Ϊ153=1�����η���5�����η���3�����η���
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j, k;
	for (i = 1; i<10; i++)
		for (j = 0; j<10; j++)
			for (k = 0; k<10; k++)
				if (i*i*i + j*j*j + k*k*k == i * 100 + j * 10 + k)
					printf("%d%d%d ", i, j, k);

	system("pause");
	return 0;
}
/*
������14��
��Ŀ����һ���������ֽ������������磺����90,��ӡ��90=2*3*3*5��
*/
#include<stdio.h>
#include<stdlib.h>
int IsPrimer(int n);
int Explode(int n);
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d=", n);
	while (!IsPrimer(n))
	{
		n = Explode(n);
	}
	printf("%d", n);
	system("pause");
	return 0;
}
int IsPrimer(int n)
{
	int i;
	int s = sqrt(n) + 1;
	for (i = 2; i<s; i++)
		if (n%i == 0)return 0;

	return 1;
}
int Explode(int n)
{
	int i;
	for (i = 2;; i++)
		if (n%i == 0)
		{
		printf("%d*", i);
		return n / i;
		}
}
/*
������15��
��Ŀ�����������������Ƕ������ɴ��⣺ѧϰ�ɼ�>=90�ֵ�ͬѧ��A��ʾ��60-89��֮�����B��ʾ��
������60�����µ���C��ʾ��
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int grade;
	char rank;
	scanf("%d", &grade);
	rank = grade >= 90 ? 'A' : (grade >= 60 ? 'B' : 'C');
	printf("%c\n", rank);
	system("pause");
	return 0;
}
/*
������16��
��Ŀ����������������m��n���������Լ������С��������
�������룺
*/
#include<stdio.h>
#include<stdlib.h>
int GCD(int m, int n);
int LCM(int m, int n);
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	printf("���Լ��Ϊ��%d,��С������Ϊ��%d\n", GCD(m, n), LCM(m, n));

	system("pause");
	return 0;
}
int GCD(int m, int n)
{
	int big, small;
	int i;
	big = m>n ? m : n;
	small = m<n ? m : n;
	for (i = small; i>0; i--)
		if (big%i == 0 && small%i == 0)
		{
		return i;
		}
}
int LCM(int m, int n)
{
	int big = m>n ? m : n;
	int small = m<n ? m : n;
	int i;
	for (i = big;; i++)
		if (i%big == 0 && i%small == 0)
			return i;
}
//�������룺
/*
������16��
��Ŀ����������������m��n���������Լ������С��������
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int m, n, tem;
	int big, small;
	scanf("%d%d", &m, &n);
	big = m>n ? m : n;
	small = m<n ? m : n;

	while ((big%small) != 0)
	{
		tem = big%small;
		big = tem>small ? tem : small;
		small = tem<small ? tem : small;
	}
	printf("���Լ����%d\n", small);
	printf("��С��������%d\n", (m*n) / small);

	system("pause");
	return 0;
}
/*
������17��
��Ŀ������һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ�����
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	char c;
	int i;
	int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
	while ((c = getchar()) != '\n'){
		if ((c >= 'a'&&c <= 'z') || (c >= 'A'&&c <= 'Z')) num1++;
		else if (c >= '0'&&c <= '9') num3++;
		else if (c == ' ') num2++;
		else num4++;
	}
	printf("Ӣ����ĸ����%d���ո�����%d�������ַ�����%d�������ַ�����%d\n", num1, num2, num3, num4);

	system("pause");
	return 0;
}
/*
������18��
��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ
����������5�������)������������м��̿��ơ�(int)pow(10,count-i);
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, count, r = 0, i, j, tem;
	scanf("%d%d", &a, &count);
	for (i = count; i>0; i--)
	{
		tem = a*i;
		for (j = 0; j<count - i; j++)
			tem *= 10;
		r += tem;
	}

	printf("%d\n", r);

	system("pause");
	return 0;
}
/*
������18��
��Ŀ����s=a+aa+aaa+aaaa+aa...a��ֵ������a��һ�����֡�����2+22+222+2222+22222(��ʱ
����������5�������)������������м��̿��ơ�(int)pow(10,count-i);
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, n, count = 0, sn = 0, tn = 0;
	scanf("%d%d", &a, &n);
	while (count<n){
		tn += a;
		sn += tn;
		a *= 10;
		count++;
	}
	printf("%d\n", sn);
	system("pause");
	return 0;
}

/*
������19��
��Ŀ��һ�������ǡ�õ�����������֮�ͣ�������ͳ�Ϊ��������������6=1��2��3.���
�������ҳ�1000���ڵ�����������
   */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int i, j, tem, n;
	for (i = 2; i <= 1000; i++)
	{
		tem = 0;
		for (j = 1; j<i; j++)
			if (i%j == 0)
			{
			tem += j;
			}
		if (tem == i)printf("%d ", i);
	}
	system("pause");
	return 0;
}
/*
������20��
��Ŀ��һ���100�׸߶��������£�ÿ����غ�����ԭ�߶ȵ�һ�룻�����£�������
��������10�����ʱ�������������ף���10�η�����ߣ�
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	float sh = 100.0, h = 50.0;
	int i;
	for (i = 2; i <= 10; i++)
	{
		sh += 2 * h;
		h /= 2;
	}
	printf("%f %f\n", sh, h);

	system("pause");
	return 0;
}
/*
������21��
��Ŀ�����ӳ������⣺���ӵ�һ��ժ�����ɸ����ӣ���������һ�룬����񫣬�ֶ����һ��
�������ڶ��������ֽ�ʣ�µ����ӳԵ�һ�룬�ֶ����һ�����Ժ�ÿ�����϶�����ǰһ��ʣ��
   ��������һ����һ��������10���������ٳ�ʱ����ֻʣ��һ�������ˡ����һ�칲ժ�˶��١�
	  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, s = 1;
	for (i = 9; i>0; i--)
	{
		s = (s + 1) * 2;
	}

	printf("��һ�칲ժ��%d������ \n", s);
	system("pause");
	return 0;
}
/*
������22��
��Ŀ������ƹ����ӽ��б������������ˡ��׶�Ϊa,b,c���ˣ��Ҷ�Ϊx,y,z���ˡ��ѳ�ǩ����
�����������������������Ա����������������a˵������x�ȣ�c˵������x,z�ȣ��������ҳ�
   �������������ֵ�������
	  */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char i, j, k = 'y';
	for (i = 'y'; i <= 'z'; i++)
	{
		for (j = 'x'; j <= 'z'; j++)
		{
			if (i != j&&i != k&&j != k&&i != 'x'&&k != 'x'&&k != 'z')
				printf("The order is a--%c,b--%c,c--%c\n", i, j, k);
		}
	}
	system("pause");
	return 0;
}
/*
������23��
��Ŀ����ӡ������ͼ�������Σ�
*
***
******
********
******
***
*
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	for (i = 1; i <= 4; i++)
	{
		for (j = 0; j<i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 3; i>0; i--)
	{
		for (j = i; j>0; j--)
			printf("*");
		printf("\n");
	}
	system("pause");
	return 0;
}
/*
������24��
��Ŀ����һ�������У�2/1��3/2��5/3��8/5��13/8��21/13...���������е�ǰ20��֮�͡�
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, tem;
	double s = 0, a = 2, b = 1;
	for (i = 0; i<20; i++)
	{
		s += a / b;
		tem = b;
		b = a;
		a = a + tem;
	}
	printf("%lf\n", s);
	system("pause");
	return 0;
}
/*
������25��
��Ŀ����1+2!+3!+...+20!�ĺ�
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a = 1, s = 0, i;
	for (i = 1; i <= 20; i++)
	{
		a *= i;
		s += a;
	}
	printf("1+2!+3!+...+20!=%d\n", s);

	system("pause");
	return 0;
}
/*
������26��
��Ŀ�����õݹ鷽����5!��
*/
#include<stdio.h>
#include<stdlib.h>
int getnum(int n);
int main()
{
	int n;
	printf("5!=%d\n", getnum(5));
	system("pause");
	return 0;
}
int getnum(int n)
{
	if (n == 1) return 1;
	else if (n>1)return (n*getnum(n - 1));
	else return 0;
}
/*
������27��
��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
*/
#include<stdio.h>
#include<stdlib.h>
void func(char*ch);
int main()
{
	char str[6];
	gets(str);
	func(str);
	system("pause");
	return 0;
}
void func(char*ch)
{
	if (*ch != '\0')
	{
		func(ch + 1);
		printf("%c ", *ch);
	}
	else return;
}
/*
������27��
��Ŀ�����õݹ麯�����÷�ʽ�����������5���ַ������෴˳���ӡ������
*/
#include<stdio.h>
#include<stdlib.h>
void func(int n);
int main()
{
	func(5);
	system("pause");
	return 0;
}
void func(int n)
{
	char ch;
	ch = getchar();
	if (n>1) func(n - 1);
	putchar(ch);
}
/*
������28��
��Ŀ����5��������һ���ʵ�����˶����ꣿ��˵�ȵ�4���˴�2�ꡣ�ʵ�4������������˵�ȵ�
������3���˴�2�ꡣ�ʵ������ˣ���˵�ȵ�2�˴����ꡣ�ʵ�2���ˣ�˵�ȵ�һ���˴����ꡣ���
   �������ʵ�һ���ˣ���˵��10�ꡣ���ʵ�����˶��
	  ����ĿҲ̫���˰ɣ����Ҫ�����Сѧ�������㣬�������ڿ��ݹ�
	  */
#include<stdio.h>
#include<stdlib.h>
int func(int n);
int main()
{
	printf("��5����%d��\n", func(5));
	system("pause");
	return 0;
}
int func(int n)
{
	if (n == 1) return 10;
	else return 2 + func(n - 1);
}
/*
������29��
��Ŀ����һ��������5λ����������Ҫ��һ�������Ǽ�λ�������������ӡ����λ���֡�
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, a, b, c, d, e;
	scanf("%d", &n);
	a = n / 10000;
	b = n % 10000 / 1000;
	c = n % 1000 / 100;
	d = n % 100 / 10;
	e = n % 10;
	if (a != 0)printf("����һ��5λ������λ�����ӡΪ��%d %d %d %d %d\n", e, d, c, b, a);
	else if (b != 0)printf("����һ��4λ������λ�����ӡΪ:%d %d %d %d\n", e, d, c, b);
	else if (c != 0)printf("����һ��3λ������λ�����ӡΪ��%d %d %d\n", e, d, c);
	else if (d != 0)printf("����һ��2λ������λ�����ӡΪ��%d %d\n", e, d);
	else printf("����һ��1λ������λ�����ӡΪ��%d\n", a);

	system("pause");
	return 0;
}
/*
������30��
��Ŀ��һ��5λ�����ж����ǲ��ǻ���������12321�ǻ���������λ����λ��ͬ��ʮλ��ǧλ��ͬ������
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, a, b, c, d, e;
	scanf("%d", &n);
	a = n / 10000;
	b = n % 10000 / 1000;
	c = n % 1000 / 100;
	d = n % 100 / 10;
	e = n % 10;
	if (a == e&&b == d)printf("%d��һ��������.\n", n);
	else printf("%d����һ��������\n", n);

	system("pause");
	return 0;
}
/*
������31��
��Ŀ�����������ڼ��ĵ�һ����ĸ���ж�һ�������ڼ��������һ����ĸһ���������
�������жϵڶ�����ĸ��Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday;
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	ch = getchar();
	getchar();//�Ե��سǷ� 
	switch (ch){
	case 'M':printf("Monday\n"); break;
	case 'W':printf("Wednesday\n"); break;
	case 'F':printf("Friday\n"); break;
	case 'T':printf("�޷��ж�,��������ڶ�����ĸ"); ch = getchar();
		if (ch == 'u')printf("Tuesday\n");
		if (ch == 'h')printf("Thursday\n");
		break;
	case 'S':printf("�޷��ж�,��������ڶ�����ĸ"); ch = getchar();
		if (ch == 'a')printf("Saturday\n");
		if (ch == 'u')printf("Sunday\n");
		break;
	default:printf("date error");
	}

	system("pause");
	return 0;
}
32 - 35����TC�ض���ͼ�ο��йأ�����֮
36������������ǰ�����Ŀ�ظ�������֮
/*
������37��
��Ŀ����10������������
��ȥ������ð��
*/
#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int a[N], i, j, tem;
	printf("Please input 10 number:\n");
	for (i = 0; i<N; i++)
		scanf("%d", &a[i]);

	for (i = N - 1; i>0; i--)
		for (j = 0; j<i; j++)
			if (a[j]>a[j + 1])
			{
		tem = a[j];
		a[j] = a[j + 1];
		a[j + 1] = tem;
			}

	for (i = 0; i<N; i++)
		printf("%d ", a[i]);
	system("pause");
	return 0;
}
/*
������38��
��Ŀ����һ��3*3����Խ���Ԫ��֮��
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[3][3];
	int i, s = 0;
	int *p = (int *)a;
	printf("���������3*3int�;���ĸ���Ԫ��:\n");
	for (i = 0; i<9; i++)
		scanf("%d", p++);

	for (i = 0; i<3; i++)
		s += a[i][i];
	printf("���3*3����Խ���Ԫ��֮��Ϊ:%d\n", s);
	system("pause");
	return 0;
}
/*
������39��
��Ŀ����һ���Ѿ��ź�������顣������һ������Ҫ��ԭ���Ĺ��ɽ������������С�
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[11] = { 1, 3, 5, 7, 8, 11, 23, 45, 67, 89 };
	int i, j, n;
	scanf("%d", &n);
	for (i = 0; i<10 & n>a[i]; i++)
		;
	for (j = 10; j>i; j--)
		a[j] = a[j - 1];
	a[i] = n;

	printf("�����Ľ��Ϊ��\n");
	for (i = 0; i<11; i++)
		printf("%d ", a[i]);
	system("pause");
	return 0;
}
/*
������40��
��Ŀ����һ���������������
�����ô�� ,���е��������ǲ��Ǿ�����Ŀ��
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a[10] = { 1, 3, 5, 7, 8, 11, 23, 45, 67, 89 }, i;
	printf("��������������Ľ��Ϊ:\n");
	for (i = 9; i >= 0; i--)
		printf("%d ", a[i]);

	system("pause");
	return 0;
}
/*
������51~60��
��Ŀ��ѧϰʹ�ð�λ�� & ����λ������|����λ�������^��λȡ������~����
û�����������Ŀ��������ֻС��һ��
��λ�������Ƕ�������������λ�����롱�������Ƕ�Ϊ1ʱ���Ϊ1��������Ϊ0��
1&1=1��1&1=1��0&1=0,0&0=0
��1&x=1���Կ���1����ȡ���е��ض�λ��
0&x=0�����Կ���0���������е�ĳЩλ��0
��λ������"|"
��λ�������Ƕ�������������λ����򡱡������Ƕ���0ʱ���Ϊ0��������Ϊ1
��1|x=1�����Կ���1����������ĳЩλ��1
0|x=x�����Կ���0����������ĳЩλ���ֲ��䡣
���ð�λ�����㻹���԰�һ�������������ӵ���һ�������������棺
���ڶ����ַ�����ĩβ����N��0��NΪҪ���ӵ��ַ���λ����Ȼ����а�λ��������õ��Ľ����Ϊ����
��λ������㡰^��
��λ��������ǽ���������λ����򣬵�����һ��Ϊ1��һ��Ϊ0ʱ��������ʱ�����Ϊ1������Ϊ0.
1^0=1,1^1=0,0^1=1,0^0=0
��1^x=~x,0^x=x
���Կ�����������ĳЩλȡ����
��λȡ����~��
��λȡ�������ǽ�������������λ��ȡ������
�����������������<<��
���������������ǰ����������ƶ�����λ���Ƴ���߽������λ������ʧ���Ҳ������ӵ�λΪ0.
�����ƶ�һλ��ͬ�ڳ���2
���������������">>"
������������������������ƶ�����λʱ���Ƴ��ұ߽������λ����ʧ��������λ����������£�
1.�����޷�����������ʱ�����λһ�ɲ�0����Ϊ���߼����ơ�
2.�����з�������������λ��0����������λһ�ɲ�0,��������λ��1���������λһ�ɲ�1����Ϊ���������ơ�
��������һλ����ԭ��2��������һλ��С��ԭ����1/2����
�������ӣ����Ƽ�С��
*/
/*
������61��
��Ŀ����ӡ����������Σ�Ҫ���ӡ��10������ͼ��������
1.���������
������ ���� 1
	   ������������1 ��1
			 ������������1 ��2 ��1
				   ������������1�� 3 ��3�� 1
						 ������������1�� 4�� 6 ��4 ��1
							   ������������1�� 5�� 10��10��5 ��1��
									 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i, j;
	int a[10][10] = { 0 };
	for (i = 0; i<10; i++)
		a[i][0] = 1;

	for (i = 1; i<10; i++)
		for (j = 1; j<i + 1; j++)
			a[i][j] = a[i - 1][j - 1] + a[i - 1][j];

	for (i = 0; i<10; i++)
	{
		for (j = 0; j<i + 1; j++)
			printf("%3d ", a[i][j]);
		printf("\n");
	}

	system("pause");
	return 0;
}
/*
������66��
��Ŀ������3����a,b,c������С˳�������
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, tem;
	scanf("%d%d%d", &a, &b, &c);
	if (a<b){ tem = a; a = b; b = tem; }
	if (b<c){ tem = b; b = c; c = tem; }
	if (a<b){ tem = a; a = b; b = tem; }
	printf("%d %d %d\n", a, b, c);

	system("pause");
	return 0;
}
/*
������67��
��Ŀ���������飬�������һ��Ԫ�ؽ�������С�������һ��Ԫ�ؽ�����������顣
������ָ��ָ�����ĺ���С��
*/
#include<stdio.h>
#include<stdlib.h>
#define N 10
int main()
{
	int a[N], *pl, *ps, tem, i;
	for (i = 0; i<N; i++)
		scanf("%d", &a[i]);
	ps = pl = &a[0];
	for (i = 1; i<N; i++)
	{
		if (*pl<a[i]) pl = &a[i];
		if (*ps>a[i])ps = &a[i];
	}

	tem = a[0]; a[0] = *pl; *pl = tem;
	tem = a[N - 1]; a[N - 1] = *ps; *ps = tem;

	for (i = 0; i<N; i++)
		printf("%d ", a[i]);

	system("pause");
	return 0;
}
/*
������68��
��Ŀ����n��������ʹ��ǰ�����˳�������m��λ�ã����m���������ǰ���m����
*/
#include<stdio.h>
#include<stdlib.h>
void move(int array[], int n, int m);
int main()
{
	int n, m, a[20], i, j, tem;
	printf("input n and m:\n");
	scanf("%d%d", &n, &m);
	printf("input array:\n");
	for (i = 0; i<n; i++)
		scanf("%d", &a[i]);
	move(a, n, m);

	system("pause");
	return 0;
}
void move(int array[], int n, int m)
{
	int temarray[20];
	int i, j;
	for (i = n - m, j = 0; i<n; i++, j++)
		temarray[j] = array[i];
	for (i = 0; i<n - m + 1; i++, j++)
		temarray[j] = array[i];
	for (i = 0; i<n; i++)
		array[i] = temarray[i];
}
/*
������69��
��Ŀ����n����Χ��һȦ��˳���źš��ӵ�һ���˿�ʼ��������1��3��������������3�����˳�
������Ȧ�ӣ���������µ���ԭ���ڼ��ŵ���λ��
   */
#include<stdio.h>
#include<stdlib.h>
#define NMax 40 
int main()
{
	int a[NMax], i, j, count, n;
	printf("input n:\n");
	scanf("%d", &n);
	getchar();
	for (i = 0; i<n; i++)
		a[i] = i + 1;
	i = 0; j = 0; count = 0;

	while (count<n - 1){
		if (a[j] != 0) i++;
		if (i == 3) { count++; i = 0; a[j] = 0; }
		j++;
		if (j == n)j = 0;
	}

	for (i = 0; i<n; i++)
		if (a[i] != 0){ printf("���ʣ�µ���ԭ���ĵ�%dλ\n\n", i + 1); break; }

	system("pause");
	return 0;
}
/*
������70��
��Ŀ��дһ����������һ���ַ����ĳ��ȣ���main�����������ַ�����������䳤�ȡ�������
*/
#include<stdio.h>
#include<stdlib.h>
int getstrlen(char*str);
int main()
{
	char str[50];
	gets(str);
	printf("%d\n", getstrlen(str));

	system("pause");
	return 0;
}
int getstrlen(char*str)
{
	char *p = str;
	while (*(p++) != '\0')
		;
	return p - str - 1;
}
/*
������71��
��Ŀ����дinput()��output()�������룬���5��ѧ�������ݼ�¼��������
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char name[20];
	char sex[5];
	int  age;
}Stu;
void input(Stu*stu);
void output(Stu*stu);
int main()
{
	Stu stu[5];
	printf("������5��ѧ������Ϣ������ �Ա� ����:\n");
	input(stu);
	printf("5��ѧ������Ϣ���£�\n����  �Ա�  ����\n");
	output(stu);

	system("pause");
	return 0;
}
void input(Stu*stu)
{
	int i;
	for (i = 0; i<5; i++)
		scanf("%s%s%d", stu[i].name, stu[i].sex, &(stu[i].age));
}
void output(Stu*stu)
{
	int i;
	for (i = 0; i<5; i++)
		printf("%s %s %d\n", stu[i].name, stu[i].sex, stu[i].age);
}
/*
������72��
��Ŀ������һ������
*/
#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
typedef struct LNode{
	int          data;
	struct LNode *next;
}LNode, *LinkList;

LinkList CreateList(int n);
void print(LinkList h);
int main()
{
	LinkList Head = NULL;
	int n;

	scanf("%d", &n);
	Head = CreateList(n);

	printf("�ոս����ĸ�������Ԫ�ص�ֵΪ��\n");
	print(Head);

	printf("\n\n");
	system("pause");
	return 0;
}
LinkList CreateList(int n)
{
	LinkList L, p, q;
	int i;
	L = (LNode*)malloc(sizeof(LNode));
	if (!L)return 0;
	L->next = NULL;
	q = L;
	for (i = 1; i <= n; i++)
	{
		p = (LinkList)malloc(sizeof(LNode));
		printf("�������%d��Ԫ�ص�ֵ:", i);
		scanf("%d", &(p->data));
		p->next = NULL;
		q->next = p;
		q = p;
	}
	return L;
}
void print(LinkList h)
{
	LinkList p = h->next;
	while (p != NULL){
		printf("%d ", p->data);
		p = p->next;
	}
}

/*
������76��
��Ŀ����дһ������������nΪż��ʱ�����ú�����1/2+1/4+...+1/n,������nΪ����ʱ�����ú���
������1/1+1/3+...+1/n(����ָ�뺯��)����
   */
#include<stdio.h>
#include<stdlib.h>
double  evenumber(int n);
double  oddnumber(int n);

int main()
{
	int n;
	double r;
	double(*pfunc)(int);
	scanf("%d", &n);
	if (n % 2 == 0) pfunc = evenumber;
	else pfunc = oddnumber;

	r = (*pfunc)(n);
	printf("%lf\n", r);

	system("pause");
	return 0;
}
double  evenumber(int n)
{
	double s = 0, a = 0;
	int i;
	for (i = 2; i <= n; i += 2)
	{
		a = (double)1 / i;
		s += a;
	}
	return s;
}
double  oddnumber(int n)
{
	double s = 0, a = 0;
	int i;
	for (i = 1; i <= n; i += 2)
	{
		a = (double)1 / i;
		s += a;
	}
	return s;
}
/*
������77��
��Ŀ�������ϰ��ָ��ָ���ָ�룩
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	char *s[] = { "man", "woman", "girl", "boy", "sister" };
	char **q;
	int k;
	for (k = 0; k<5; k++)
	{
		q = &s[k];       /*��������������*/
		printf("%s\n", *q);
	}
	system("pause");
	return 0;
}
/*
������78��
��Ŀ���ҵ����������ˣ�����������ҳ���������ʲô���⡣
*/
#include<stdio.h>
#include<stdlib.h>
struct man{
	char name[20];
	int  age;
}person[3] = { "li", 18, "wang", 19, "sun", 22 };
int main()
{
	struct man *q, *p;
	int i, m = 0;
	p = person;
	for (i = 0; i<3; i++)
	{
		if (m<p->age)m = p->age;
		q = p++;
	}
	printf("%s %d\n", q->name, q->age);
	system("pause");
	return 0;
}
/*
������79��
��Ŀ���ַ�������
*/
#include<stdio.h>
#include<stdlib.h>
void swap(char*str1, char*str2);
int main()
{
	char str1[20], str2[20], str3[20];
	printf("������3���ַ���,ÿ���ַ����Իس�����!:\n");
	gets(str1);
	gets(str2);
	gets(str3);
	if (strcmp(str1, str2)>0)swap(str1, str2);
	if (strcmp(str2, str3)>0)swap(str2, str3);
	if (strcmp(str1, str2)>0)swap(str1, str2);
	printf("�����Ľ��Ϊ��\n");
	printf("%s\n%s\n%s\n", str1, str2, str3);
	system("pause");
	return 0;
}
void swap(char*str1, char*str2)
{
	char tem[20];
	strcpy(tem, str1);
	strcpy(str1, str2);
	strcpy(str2, tem);
}
/*
������80��
��Ŀ����̲����һ�����ӣ���ֻ�������֡���һֻ���Ӱ��������ƽ����Ϊ��ݣ�����һ������ֻ
���������ӰѶ��һ�����뺣�У�������һ�ݡ��ڶ�ֻ���Ӱ�ʣ�µ�������ƽ���ֳ���ݣ��ֶ���
   ������һ������ͬ���Ѷ��һ�����뺣�У�������һ�ݣ����������ġ�����ֻ���Ӷ����������ģ�
	  �������ʺ�̲��ԭ�������ж��ٸ����ӣ�
		 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x
		, i = 0, j = 1;
	while (i<5){
		x = 4 * j;
		for (i = 0; i<5; i++)
		{
			if (x % 4 != 0){ break; }
			x = (x / 4) * 5 + 1;
		}
		j++;
	}
	printf("%d\n", x);

	system("pause");
	return 0;
}
/*
������80��
��Ŀ����̲����һ�����ӣ���ֻ�������֡���һֻ���Ӱ��������ƽ����Ϊ��ݣ�����һ������ֻ
���������ӰѶ��һ�����뺣�У�������һ�ݡ��ڶ�ֻ���Ӱ�ʣ�µ�������ƽ���ֳ���ݣ��ֶ���
   ������һ������ͬ���Ѷ��һ�����뺣�У�������һ�ݣ����������ġ�����ֻ���Ӷ����������ģ�
	  �������ʺ�̲��ԭ�������ж��ٸ����ӣ�
		 �����Ŀ������ѧ����˵�кܼ򵥵���������λ����Ĳ���
		 http://blog.csdn.net/yupenghua/article/details/6803494
		 */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int x
		, i = 0, j = 1;
	while (i<5){
		x = 4 * j;
		for (i = 0; i<5; i++)
		{
			if (x % 4 != 0){ break; }
			x = (x / 4) * 5 + 1;
		}
		j++;
	}
	printf("%d\n", x);

	system("pause");
	return 0;
}
/*
������81��
��Ŀ��809*??=800*??+9*??+1 ����??�������λ��,8*??�Ľ��Ϊ��λ����9*??�Ľ��Ϊ3λ������??�������λ������809*??��Ľ����
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, i;
	for (i = 10; i<100; i++)
		if (8 * i<100 && 9 * i>99 && 9 * i<1000)
		{
		printf("??�������λ��Ϊ��%d\n", i);
		break;
		}
	printf("809*%d==800*%d+9*%d+1\n", i, i, i);

	system("pause");
	return 0;
}
/*
������82��
��Ŀ���˽���ת��Ϊʮ����
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n = 0, i = 0;
	char s[20];
	printf("������һ��8������:\n");
	gets(s);
	while (s[i] != '\0'){
		n = n * 8 + s[i] - '0';
		i++;
	}
	printf("�������8������ת��Ϊʮ����Ϊ%d", n);

	system("pause");
	return 0;
}
/*
������83��
��Ŀ����0��7������ɵ�����������
��1,3,5,7����λ��0���������λ��һλ������λ��������7λ��
*/
#include<stdio.h>
#include<stdlib.h>
int factorial(int a, int b);/*��׳�*/
int main()
{
	int sum = 0, i;
	sum += 4; /*һλ�����ܰ����洦��һλ��ʱ��������4��*/
	for (i = 2; i<8; i++)
		sum += 4 * (factorial(7, i - 1) - factorial(6, i - 2));
	printf("�������%d������\n", sum);
	system("pause");
	return 0;
}
int factorial(int a, int b)
{
	int i, sum = 1;
	if (b <= 0)return 1;
	for (i = 0; i<b; i++)
		sum *= (a - i);
	return sum;
}
/*
������84��
��Ŀ��һ��ż�����ܱ�ʾΪ��������֮�͡�
��ȥ������ʲô��Ŀ��Ҫ��֤������������治֪����ô֤�����ǾͰ�һ��ż���ֽ�����������ɡ�
*/
#include<stdio.h>
#include<stdlib.h>
int Isprimer(unsigned int n);
int main()
{
	unsigned int n, i;
	do{
		printf("������һ��ż��:\n");
		scanf("%d", &n);
	} while (n % 2 != 0);
	for (i = 1; i<n; i++)
		if (Isprimer(i) && Isprimer(n - i))
			break;
	printf("ż��%d���Էֽ��%d��%d���������ĺ�\n", n, i, n - i);

	system("pause");
	return 0;
}
int Isprimer(unsigned int n)
{
	int i;
	if (n<4)return 1;
	else if (n % 2 == 0)return 0;
	else
		for (i = 3; i<sqrt(n) + 1; i++)
			if (n%i == 0)return 0;

	return 1;
}
/*
������85��
��Ŀ���ж�һ�������ܱ�����9����
Ѿ�ģ�����Ŀ����˼���ж�һ����������������9��ɵ����ɣ��Ҿ���ô���ɡ������ǲ�
�ܱ���1������֮�����������
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int p, i;
	long int sum = 9;
	printf("������һ������:\n");
	scanf("%d", &p);
	for (i = 1;; i++)
		if (sum%p == 0)break;
		else sum = sum * 10 + 9;

		printf("����%d������%d��9��ɵ���%ld\n", p, i, sum);



		system("pause");
		return 0;
}
/*
������86��
��Ŀ�������ַ������ӳ���
�����ô������strcat������
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<malloc.h>
char* strconnect(char *str1, char *str2);
int main()
{
	char str1[20], str2[20];
	char *str;
	puts("�����������ַ������ûس��ֿ�:");
	gets(str1);
	gets(str2);
	str = strconnect(str1, str2);
	puts("���Ӻ���ַ���Ϊ:");
	puts(str);
	system("pause");
	return 0;
}
char* strconnect(char *str1, char *str2)
{
	char*str;
	str = (char*)malloc(strlen(str1) + strlen(str2) + 1);
	str[0] = '\0';
	strcat(str, str1);
	strcat(str, str2);
	return str;
}
/*
������88��
��Ŀ����ȡ7������1��50��������ֵ��ÿ��ȡһ��ֵ�������ӡ����ֵ�����ģ���
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n, i, j;
	for (i = 0; i<7; i++)
	{
		scanf("%d", &n);
		if (n>50){ printf("����������:\n"); i--; }
		else
		{
			for (j = 0; j<n; j++)
				printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}
/*
������89��
��Ŀ��ĳ����˾���ù��õ绰�������ݣ���������λ���������ڴ��ݹ������Ǽ��ܵģ����ܹ������£�
������ÿλ���ֶ�����5,Ȼ���úͳ���10��������������֣��ٽ���һλ�͵���λ�������ڶ�λ�͵���λ������
   ����ʲô�Ⱑ����Ҫ�Ҽ����أ����ǽ����أ�
   ���Ҿͼ��ܰɣ�
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int a, b, c, d, tem;
	char str[5];
	printf("����һ��Ҫ���ܵ���λ����:\n");
	gets(str);
	a = (str[0] - '0' + 5) % 10;
	b = (str[1] - '0' + 5) % 10;
	c = (str[2] - '0' + 5) % 10;
	d = (str[3] - '0' + 5) % 10;
	tem = a; a = d; d = tem;
	tem = b; b = c; c = tem;
	tem = a * 1000 + b * 100 + c * 10 + d;

	printf("���ܺ����Ϊ%d\n", tem);

	system("pause");
	return 0;
}
/*
������96��
��Ŀ�������ַ������Ӵ����ֵĴ���
��ʱ������KMP�㷨��
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int i, j, k, TLen, PLen, count = 0;
	char T[50], P[10];
	printf("�����������ַ������Իس�������ĸ����ǰ���Ӵ��ں�\n");
	gets(T);
	gets(P);
	TLen = strlen(T);
	PLen = strlen(P);
	for (i = 0; i <= TLen - PLen; i++)
	{
		for (j = 0, k = i; j<PLen&&P[j] == T[k]; j++, k++)
			;
		if (j == PLen)count++;
	}
	printf("%d\n", count);
	system("pause");
	return 0;
}
/*
������97��
��Ŀ���Ӽ�������һЩ�ַ�������������͵�������ȥ��ֱ������һ��#Ϊֹ��
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp = NULL;
	char filename[25];
	char ch;
	printf("������Ҫ���浽���ļ������ƣ�\n");
	gets(filename);
	if ((fp = fopen(filename, "w")) == NULL)
	{
		printf("error: cannot open file!\n");
		exit(0);
	}
	printf("���������������Ҫ�����һЩ�ַ�����#������\n");
	getchar();
	while ((ch = getchar()) != '#'){
		fputc(ch, fp);
	}
	fclose(fp);
	system("pause");
	return 0;
}
/*
������98��
��Ŀ���Ӽ�������һ���ַ�������Сд��ĸȫ��ת���ɴ�д��ĸ��Ȼ�������һ�������ļ���test���б��档
������������ַ����ԣ�������
   */
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE*fp = NULL;
	char str[50];
	int i, len;
	printf("����һ���ַ�����\n");
	gets(str);
	len = strlen(str);
	for (i = 0; i<len; i++)
	{
		if (str[i] <= 'z'&&str[i] >= 'a')
			str[i] -= 32;
	}
	if ((fp = fopen("test", "w")) == NULL)
	{
		printf("error: cannot open file!\n");
		exit(0);
	}
	fprintf(fp, "%s", str);
	fclose(fp);

	system("pause");
	return 0;
}
/*
������99��
��Ŀ�������������ļ�A��B,�����һ����ĸ��Ҫ����������ļ��е���Ϣ�ϲ�������ĸ˳�����У���
�����������һ�����ļ�C�С�
   ��Ŀû�������A�ļ���B�ļ��е���ĸ�ǲ�������ġ��Ҿ͵���û��ɣ��ϲ���ð������ͺã�
   */
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	FILE*fa, *fb, *fc;
	int i, j, k;
	char str[100], str1[100];
	char tem;
	if ((fa = fopen("A.txt", "r")) == NULL)
	{
		printf("error: cannot open A file!\n");
		exit(0);
	}
	fgets(str, 99, fa);
	fclose(fa);
	if ((fb = fopen("B.txt", "r")) == NULL)
	{
		printf("error: cannot open B file!\n");
		exit(0);
	}
	fgets(str1, 100, fb);
	fclose(fb);
	strcat(str, str1);
	for (i = strlen(str) - 1; i>1; i--)
		for (j = 0; j<i; j++)
			if (str[j]>str[j + 1])
			{
		tem = str[j];
		str[j] = str[j + 1];
		str[j + 1] = tem;
			}

	if ((fc = fopen("C.txt", "w")) == NULL)
	{
		printf("error: cannot open C file!\n");
		exit(0);
	}
	fputs(str, fc);
	fclose(fc);
	system("pause");
	return 0;
}
/*
������100��
��Ŀ�������ѧ����ÿ��ѧ����3�ſεĳɼ����Ӽ��������������ݣ�����ѧ���ţ����������ſγɼ����������
������ƽ���ɼ�����ԭ�е����ݺͼ������ƽ����������ڴ����ļ�"stud"�С�
   */
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	int ID;
	int math;
	int English;
	int C;
	int avargrade;
	char name[20];
}Stu;
int main()
{
	FILE*fp;
	Stu stu[5];
	int i, avargrade = 0;
	printf("������5��ͬѧ����Ϣ��ѧ���ţ�������3�ųɼ�:\n");
	for (i = 0; i<5; i++)
	{
		scanf("%d%s%d%d%d", &(stu[i].ID), stu[i].name, &(stu[i].math), &(stu[i].English), &(stu[i].C));
		stu[i].avargrade = (stu[i].math + stu[i].English + stu[i].C) / 3;
	}

	if ((fp = fopen("stud", "w")) == NULL)
	{
		printf("error :cannot open file!\n");
		exit(0);
	}
	for (i = 0; i<5; i++)
		fprintf(fp, "%d %s %d %d %d %d\n", stu[i].ID, stu[i].name, stu[i].math, stu[i].English,
		stu[i].C, stu[i].avargrade);

	fclose(fp);
	system("pause");
	return 0;
}